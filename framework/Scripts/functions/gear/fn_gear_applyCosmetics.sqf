#include "..\script_component.hpp";
/*
 * Author: SGT.Brostrom.A
 * This function apply cosmetician attributes to a unit.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [player] call Ghost_fnc_gear_applyCosmetics
 *
 */

params [["_unit", objNull, [objNull]]];


// Player Name without rank prefix
if (!isNil{GETVAR(_unit,EGVAR(Unit,Name),nil)}) then {
    private _name = [_unit] call EFUNC(unit,getName);
    SETVAR(_unit,EGVAR(Unit,Name),_name);
};


// Player Rank to ingame rank
if (EGVAR(Settings,setPlayerRank)) then {
    if (!isNil{GETVAR(_unit,EGVAR(Unit,Rank),nil)}) then {
        private _rank = [_unit] call EFUNC(player,getRank);
        SETVAR(_unit,EGVAR(Unit,Rank),_rank);
    };
};
