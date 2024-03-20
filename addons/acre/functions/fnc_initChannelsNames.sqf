#include "script_component.hpp"
/*
 * Author: 3Mydlo3
 * Retrieves channel names for given side from settings
 * and sets them as channel names for given sides.
 *
 * Arguments:
 * 0: Gets channel names for this side <SIDE>
 * 1: Set loaded channel names for all sides <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * Set WEST channel names for WEST side:
 * [WEST] call ghostf_acre_fnc_initNameChannelsModule;
 * Set CIVILIAN channel names for all sides
 * [CIVILIAN, true] call ghostf_acre_fnc_initNameChannelsModule; //
 *
 * Public: No
 */

#define WEST_PRESET_NAME "default3"
#define EAST_PRESET_NAME "default2"
#define IND_PRESET_NAME "default4"
#define CIV_PRESET_NAME "default"
#define DEFAULT_PRESET_NAME "default"

params [["_sourceSide", CIVILIAN], ["_setForAll", false]];

private _targetSide = [[_sourceSide], [WEST, EAST, INDEPENDENT, CIVILIAN]] select _setForAll;

{
    private _presetName = switch (_x) do {
        case WEST: {WEST_PRESET_NAME};
        case EAST: {EAST_PRESET_NAME};
        case INDEPENDENT: {IND_PRESET_NAME};
        case CIVILIAN: {CIV_PRESET_NAME};
        default {DEFAULT_PRESET_NAME};
    };

    for "_pchannelNumber" from 1 to 15 step 1 do {
        // Retrieve channel name from settings
        private _pvariableName = [_sourceSide, _pchannelNumber] call FUNC(getSideChannelNumberVariableNamePrivate);
        private _pchannelName = missionNamespace getVariable [_pvariableName, ""];
        // If not empty, set
        if (_pchannelName isNotEqualTo "") then {
            TRACE_4("Setting %4 label for radio %1 preset %2 channel number %3",_x,DEFAULT_PRESET_NAME,_pchannelNumber,_pchannelName);
            {
                [_x, _presetName, _pchannelNumber, "label", _pchannelName] call acre_api_fnc_setPresetChannelField;
            } forEach ["ACRE_PRC148"];
        };
    };

    for "_cchannelNumber" from 1 to 8 step 1 do {
        // Retrieve channel name from settings
        private _cvariableName = [_sourceSide, _cchannelNumber] call FUNC(getSideChannelNumberVariableNameCommand);
        private _cchannelName = missionNamespace getVariable [_cvariableName, ""];
        // If not empty, set
        if (_cchannelName isNotEqualTo "") then {
            TRACE_4("Setting %4 label for radio %1 preset %2 channel number %3",_x,DEFAULT_PRESET_NAME,_cchannelNumber,_cchannelName);
            {
                [_x, _presetName, _cchannelNumber, "label", _cchannelName] call acre_api_fnc_setPresetChannelField;
            } forEach ["ACRE_PRC152","ACRE_PRC117F"];
        };
    };

} forEach _targetSide;

INFO_1("Initialized %1 channel names.", str _targetSide);

nil
