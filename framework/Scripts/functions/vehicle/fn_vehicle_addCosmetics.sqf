#include "..\script_component.hpp";
/*
 * GhostAuthor: CPL.Brostrom.A tinkered with by YonVA
 * This function changes appearance for approved vehicles defined in the faction setting.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * nothing
 *
 * Example:
 * [_vehicle] call GHOST_fnc_vehicle_addCosmetics;
 *
 * Public: No
 */

params [["_vehicle", objNull, [objNull]]];

if (!isNil{_vehicle getVariable QEGVAR(VehicleFunc,Cosmetics)}) exitWith {SHOW_WARNING_2("VehicleCosmetics", "Vehicle cosmetics already applied for %1 [%2].", _vehicle, typeOf _vehicle);};
if (!(_vehicle call FUNC(isValidFaction))) exitWith {};

INFO_2("VehicleCosmetics", "Applying vehicle cosmetics to %1 [%2].", _vehicle, typeOf _vehicle);

private _vehicleType = _vehicle getVariable [QEGVAR(Vehicle,Type), typeOf _vehicle];

private _textureMed = "\z\cav\addons\textures\data\vehicles\label\special\reddiamond_s_ca.paa";

if (_vehicle isKindOf "I_APC_Wheeled_03_cannon_F") then {
    // Animate slat armor and camo nets
    _vehicle animateSource ["showCamonetHull",0, true];
    _vehicle animateSource ["showBags",0, true];
    _vehicle animateSource ["showBags2",1, true];
    _vehicle animateSource ["showTools",1, true];
    _vehicle animateSource ["showSLATHull",0, true];
};

    [{
        (_this select 0) animateSource ["Miles_Hide", 1, true];
        (_this select 0) animateSource ["IFF_Panels_Hide", 1, true];
    }, [_vehicle]] call CBA_fnc_execNextFrame;

_vehicle setPlateNumber "Ghost";

// Add eventHandlers to handle death and deletion.
_vehicle addEventHandler ["Killed", {
    params["_vehicle"];
    private _labels = _vehicle getVariable [QEGVAR(Vehicle,Labels), []];
    if (count _labels != 0) then {
        {deleteVehicle _x} forEach _labels;
    };
}];
_vehicle addEventHandler ["Deleted", {
    params["_vehicle"];
    private _labels = _vehicle getVariable [QEGVAR(Vehicle,Labels), []];
    if (count _labels != 0) then {
        {deleteVehicle _x} forEach _labels;
    };
}];

_vehicle setVariable [QEGVAR(VehicleFunc,Cosmetics), true, true];
