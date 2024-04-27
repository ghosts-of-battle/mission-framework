#include "..\script_component.hpp";
/*
 * Author: CPL.Brostrom.A tinkered with by YonV
 * This teleports a target to a given marker or any other kind of object.
 * Z will always be 0 for MARKER, LOCATION and TASK.
 *
 * Arguments:
 * 0: Object <OBJECT>
 * 1: Label text <STRING>
 * 2: Destination <MARKER/OBJECT/LOCATION/GROUP/TASK>
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [this,"Teleport - Airfield", Airstrip] call Ghost_fnc_teleport
 * [this,"Teleport - Base", MyBase] call Ghost_fnc_teleport
 * [this,"Teleport - Talon", "FOB_Talon"] call Ghost_fnc_teleport
 * [this,"Teleport - Base", "respawn_west"] call Ghost_fnc_teleport
 *
 * Public: Yes
 */

params [
    ["_object", objNull, [objNull]],
    ["_action", "Teleport"],
    ["_dest", nil, [objNull, grpNull, "", locationNull, taskNull, []]]
];

SHOW_WARNING_1("DEPRICATED", "Function 'Ghost_fnc_teleport' on %1 is depricated (Ghost_fnc_teleport => ghost_mission_fnc_teleport)...", _object);
[_object, _action, _dest] call ghost_mission_fnc_teleport;