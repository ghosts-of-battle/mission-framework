#include "..\script_component.hpp";
/*
 * Author: CPL.Brostrom.A tinkered with by YonV
 * This function return players clan tag or empty if none.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * ClanTag or Empty <STRING>
 *
 * Example:
 * call Ghost_fnc_player_getClanTag
 *
 */

if (!GVAR(isPlayer)) exitWith {""};

if !(isNil {squadParams player select 0 select 0}) exitWith {
    private _clanTag = squadParams player select 0 select 0;
    _clanTag = toUpper(_clanTag);
    _clanTag
};

""