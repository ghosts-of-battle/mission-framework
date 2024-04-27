#include "..\script_component.hpp";
/*
 * Author: CPL.Brostrom.A tinkered with by YonV, with help from Commy2
 * This function make a given gate the ability to open and close automaticly whitout much fiddeling with triggers. 
 *
 * Arguments:
 * 0: Object <OBJECT>
 * 1: Side <STRING> (Optional) (Default; WEST)
 * 2: Distance <STRING> (Optional) (Default; 30)
 *
 * Return Value:
 * None
 *
 * Example:
 * ["gate"] call Ghost_fnc_gate
 * ["gate","WEST"] call Ghost_fnc_gate
 * ["gate","WEST", 30] call Ghost_fnc_gate
 *
 * Public: Yes
 */

params[
    ["_object", objNull, [objNull]],
    ["_triggerSide", "WEST", [""]],
    ["_distance", 30]
];

SHOW_WARNING_1("DEPRICATED", "Function 'Ghost_fnc_gate' on %1 is depricated (Ghost_fnc_gate => ghost_mission_fnc_gate)...", _object);
[_object, _triggerSide, _distance] call ghost_mission_fnc_gate;