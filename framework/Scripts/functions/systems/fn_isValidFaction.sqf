#include "..\script_component.hpp"
/*
 * Author: CPL.Brostrom.A tinkered with by YonV
 * Checks if the given object is in the faction array and there for return true or false
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * True or False <BOOLEAN>
 *
 * Example:
 * [player] call Ghost_fnc_isValidFaction
 * [_vehicle] call Ghost_fnc_isValidFaction
 *
 */

params[["_unit", objNull, [objNull]]];

private _factionArray = parseSimpleArray EGVAR(Settings,vehicleFactions);

if !(_factionArray isEqualType []) exitWith {
    SHOW_CHAT_ERROR("FactionArray", "Faction array have not been setup correctly.");
    false
};

faction _unit in _factionArray;
