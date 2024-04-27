#include "..\script_component.hpp";
/*
 * Author: SGT.Brostrom.A
 * This function apply globla functions to vehicles.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * nothing
 *
 * Example:
 * [_vehicle] call Ghost_fnc_vehicle_addFunctionsGlobal
 *
 * Public: No
 */

params [["_vehicle", objNull, [objNull]]];

if (!isNil{_vehicle getVariable QEGVAR(VehicleFunc,FunctionsGlobal)}) exitWith {SHOW_WARNING_1("VehicleFunctionsGlobal", "Vehicle functions already applied for %1 [%2].", _vehicle, typeOf _vehicle);};

INFO_2("VehicleFunctionsGlobal", "Applying vehicle functions to %1 (%2)", _vehicle, typeOf _vehicle);

private _vehicleType = _vehicle getVariable [QEGVAR(Vehicle,Type), typeOf _vehicle];

_vehicle setVariable [QEGVAR(VehicleFunc,FunctionsGlobal), true];

if (!(_vehicle call FUNC(isValidFaction))) exitWith {};


// Airframes


// Ground vehicles
if (_vehicle iskindOf "MRAP_01_base_F") then {
    switch (_vehicleType) do {
        case "rhsusf_m998_d_2dr_fulltop";
        case "rhsusf_m998_w_2dr_fulltop";
        case "MED": {_vehicle setVariable ["ace_medical_isMedicalVehicle", true, true];};
        default {};
    };
};

if (_vehicle iskindOf "Truck_01_base_F") then {
    switch (_vehicleType) do {
        case "rhsusf_M1230a1_usarmy_wd";
        case "rhsusf_M1230a1_usarmy_d";
        case "MED": {_vehicle setVariable ["ace_medical_isMedicalVehicle", true, true];};
        default {};
    };
};

