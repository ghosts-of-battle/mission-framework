/*
 * Name: ghostf_common_fnc_sideTohexColor
 * Author: Snippers
 *
 * Arguments:
 * side
 *
 * Return:
 * array: color array
 *
 * Description:
 * Will return the color of the inputted side.
 */

//Cache vars for speed
if (isNil "ghostf_common_blufor_color") then {
    ghostf_common_blufor_color = [blufor] call bis_fnc_sideColor;
    ghostf_common_opfor_color = [opfor] call bis_fnc_sideColor;
    ghostf_common_indep_color = [independent] call bis_fnc_sideColor;
    ghostf_common_civ_color = [civilian] call bis_fnc_sideColor;
    ghostf_common_empty_color = [sideUnknown] call bis_fnc_sideColor;
};
if (isNil "ghostf_common_blufor_hex_color") then {
    ghostf_common_blufor_hex_color = ghostf_common_blufor_color call BIS_fnc_colorRGBtoHTML;
    ghostf_common_opfor_hex_color = ghostf_common_opfor_color call BIS_fnc_colorRGBtoHTML;
    ghostf_common_indep_hex_color = ghostf_common_indep_color call BIS_fnc_colorRGBtoHTML;
    ghostf_common_civ_hex_color = ghostf_common_civ_color call BIS_fnc_colorRGBtoHTML;
    ghostf_common_empty_hex_color = ghostf_common_empty_color call BIS_fnc_colorRGBtoHTML;
};
switch _this do {
    case blufor: {ghostf_common_blufor_hex_color};
    case opfor: {ghostf_common_opfor_hex_color};
    case independent: {ghostf_common_indep_hex_color};
    case civilian: {ghostf_common_civ_hex_color};
    default {ghostf_common_empty_hex_color};
};
