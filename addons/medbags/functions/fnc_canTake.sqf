#include "..\script_component.hpp"
/*

 * \ghostf_medical\supplies\functions\fn_canUnpackFirstAid.sqf
 * by Ojemineh
 *
 * check if medical supplies can be unpacked
 *
 * Arguments:
 * 0: unit - <OBJECT>
 *
 * Return:
 * <BOOLEAN>
 *
 * Example:
 * [player] call ghostf_medical_supplies_fnc_canUnpackFirstAid;
 *
 */

// -------------------------------------------------------------------------------------------------

private ["_unit"];

_unit = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

// -------------------------------------------------------------------------------------------------

if (isNull _unit) exitWith {false};

// -------------------------------------------------------------------------------------------------

private _return = false;

_return = (
    ("ghostf_medbags_FirstAid" in items _unit) &&
    (_unit getVariable ["ace_isUnconscious", false]) &&
    (Not visibleMap)
);

_return;
