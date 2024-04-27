#include "..\script_component.hpp";
/*
 * Author: SGT.Brostrom.A
 * This function apply functions to local vehicles.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * nothing
 *
 * Example:
 * [_vehicle] call Ghost_fnc_vehicle_addFunctions;
 *
 * Public: No
 */

params [["_vehicle", objNull, [objNull]]];

if (!isNil{_vehicle getVariable QEGVAR(VehicleFunc,Functions)}) exitWith {SHOW_WARNING_1("VehicleFunctions", "Vehicle functions already applied for %1 [%2].", _vehicle, typeOf _vehicle);};

INFO_2("VehicleFunctions", "Applying vehicle functions to %1 (%2)", _vehicle, typeOf _vehicle);

private _vehicleType = _vehicle getVariable [QEGVAR(Vehicle,Type), typeOf _vehicle];

_vehicle setVariable [QEGVAR(VehicleFunc,Functions), true];


// Jump and get out systems universal for all airframes and non nato factions.
if (_vehicle iskindOf "Heli_Transport_01_base_F") then {
    [_vehicle] call FUNC(addGetOutHelo);
    [_vehicle] call FUNC(addEscapeWreck);
};

if (_vehicle iskindOf "Heli_Transport_02_base_F") then {
    [_vehicle] call FUNC(addLineJump);
    [_vehicle] call FUNC(addEscapeWreck);
};


