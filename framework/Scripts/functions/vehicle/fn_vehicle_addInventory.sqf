#include "..\script_component.hpp";
/*
 * Author: SGT.Brostrom.A
 * This function changes the inventory of the given vehicle.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * nothing
 *
 * Example:
 * [_vehicle] call Ghost_fnc_vehicle_addInventory;
 *
 * Public: No
 */

params [["_vehicle", objNull, [objNull]]];

if (!EGVAR(Settings,enableVehicleInventory)) exitWith {};
if (!isNil{_vehicle getVariable QEGVAR(VehicleFunc,Inventory)}) exitWith {SHOW_WARNING_2("VehicleInventory", "Vehicle inventory already applied for %1 [%2].", _vehicle, typeOf _vehicle);};
if (!(_vehicle call FUNC(isValidFaction))) exitWith {};

INFO_2("VehicleInventory", "Applying vehicle inventory to %1 (%2)", _vehicle, typeOf _vehicle);

private _vehicleType = _vehicle getVariable [QEGVAR(Vehicle,Type), typeOf _vehicle];


// Remove ACE Cargo
private _cargoArray = _vehicle getVariable ["ace_cargo_loaded",[]];
{
    [_x, _vehicle] call ace_cargo_fnc_removeCargoItem;
} forEach _cargoArray;

// Do not allow renaming of vehicles
_vehicle setVariable ["ace_cargo_noRename", true, true];

_vehicle setVariable [QEGVAR(VehicleFunc,Inventory), true, true];

if (_vehicleType == "EMPTY") exitWith { [_vehicle, []] call FUNC(addCargo); };


// Ground Vehicles

if (_vehicle iskindOf "MRAP_01_base_F") then {
    
    // Cargo
    switch (true) do {
        case (_vehicle iskindOf "rhsusf_m998_w_2dr"): {
            [_vehicle, 8, 20, false, false] call FUNC(setCargoAttributes);
        };
        case (_vehicle iskindOf "rhsusf_m1152_base"): {
            [_vehicle, 20, 20, false, false] call FUNC(setCargoAttributes);
        };
        default {
            [_vehicle, 4, 20, false, false] call FUNC(setCargoAttributes);
        };
    };
    
    ["ACE_Wheel", _vehicle, true] call ace_cargo_fnc_loadItem;

    // Interior
    switch (_vehicleType) do {
        case "rhsusf_m998_d_2dr_fulltop";
        case "rhsusf_m998_w_2dr_fulltop";
        case "MED": {
            [_vehicle, 
                GET_CONTAINER("vehicle_medicalAtlas")
            ] call FUNC(addCargo);

            ["ace_medicalSupplyCrate",
                GET_CONTAINER("crate_medicalAtlas"),
                _vehicle
            ] call FUNC(createCargoCrate);
        };
        case "rhsusf_m1165a1_gmv_m2_m240_socom_d";
        case "rhsusf_m1165a1_gmv_m2_m240_socom_w": {
            [_vehicle, 
                GET_CONTAINER("vehicle_HMMWV")
            ] call FUNC(addCargo);
        };
        case "rhsusf_m1165a1_gmv_mk19_m240_socom_d";
        case "rhsusf_m1165a1_gmv_mk19_m240_socom_w": {
            [_vehicle, 
                GET_CONTAINER("vehicle_HMMWV_Weapons")
            ] call FUNC(addCargo);
        };
        default {
            [_vehicle, 
                GET_CONTAINER("vehicle_HMMWV")
            ] call FUNC(addCargo);
        };
    };
};

if (_vehicle iskindOf "Truck_01_base_F") then {
    switch (_vehicleType) do {
        case "rhsusf_M1230a1_usarmy_wd";
        case "rhsusf_M1230a1_usarmy_d";
        case "MED": {
            [_vehicle, 
                GET_CONTAINER("vehicle_medicalAtlas")
            ] call FUNC(addCargo);

            ["ace_medicalSupplyCrate",
                GET_CONTAINER("crate_medicalAtlas"),
                _vehicle
            ] call FUNC(createCargoCrate);
        };
        default {
            [_vehicle, []] call FUNC(addCargo);
        };
    };
    ["ACE_Wheel", _vehicle, true] call ace_cargo_fnc_loadItem;
};


// Deployable

// Rotary Wing
if (_vehicle iskindOf "Heli_Transport_01_base_F") then {
    switch (_vehicleType) do {
        case "RHS_UH60M_MEV2_d";
        case "RHS_UH60M_MEV_d";
        case "RHS_UH60M_MEV2";
        case "RHS_UH60M_MEV";
        case "MED": {
            [_vehicle, 
                GET_CONTAINER("vehicle_medicalAtlas")
            ] call FUNC(addCargo);

            ["ace_medicalSupplyCrate",
                GET_CONTAINER("crate_medicalAtlas"),
                _vehicle
            ] call FUNC(createCargoCrate);
        };
        default {
            [_vehicle, 
                GET_CONTAINER("vehicle_heliTransport")
            ] call FUNC(addCargo);
        };
    };
};

if (_vehicle iskindOf "Heli_Transport_02_base_F") then {
    [_vehicle, 
        GET_CONTAINER("vehicle_heliTransport")
    ] call FUNC(addCargo);
};
