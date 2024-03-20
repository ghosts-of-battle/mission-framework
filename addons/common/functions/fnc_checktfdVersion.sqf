#include "\z\ghostf\addons\common\script_component.hpp"
/*
 * Name: ghostf_common_fnc_checkModVersion
 * Author: Snippers
 *
 * Arguments:
 *  Array - Version to check
 *
 * Return:
 * Boolean
 *
 * Description:
 * Checks if ghost Mission version is larger than the input version;
 */

params [
    ["_input",[0,0,0]]
];

private _ghostersion = getMissionConfigValue ["ghostf_version",[0,0,0]];

([_ghostersion,_input] call EFUNC(common,checkVersionArray));

