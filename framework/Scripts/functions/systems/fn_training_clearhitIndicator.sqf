#include "..\script_component.hpp";
/*
 * Author: CPL.Brostrom.A tinkered with by YonV, Ocean.M
 * This function clear a hitIndicator objects markers.
 *
 * Arguments:
 * 0: Object <OBJECT>
 *
 * Example:
 * [cursorTarget] call Ghost_fnc_training_clearhitIndicator;
 */

params [["_object", objNull, [objNull]]];

private _hitmarkers = _object getVariable [QEGVAR(training,hitMarkers), []];
if (count _hitmarkers != 0) then {
    {deleteVehicle _x} forEach _hitmarkers;
};