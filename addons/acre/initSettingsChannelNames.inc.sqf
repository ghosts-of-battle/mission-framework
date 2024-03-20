{
    for "_pchannelNumber" from 1 to 15 step 1 do {
        private _pvariableName = [_x, _pchannelNumber] call FUNC(getSideChannelNumberVariableNamePrivate);
        private _psettingName = format [LLSTRING(PChannelName), _pchannelNumber];
        private _psettingDescription = format [LLSTRING(PChannelName_Description), _pchannelNumber];
        private _pcategoryName = format [LLSTRING(PSideChannelNames), _x];
        [
            _pvariableName,
            "EDITBOX",
            [_psettingName, _psettingDescription],
            [COMPONENT_NAME, _pcategoryName],
            _psettingName,
            1,
            {},
            true
        ] call CBA_fnc_addSetting;
    };
} forEach [WEST, EAST, INDEPENDENT, CIVILIAN];

{
    for "_cchannelNumber" from 1 to 8 step 1 do {
        private _cvariableName = [_x, _cchannelNumber] call FUNC(getSideChannelNumberVariableNameCommand);
        private _csettingName = format [LLSTRING(CChannelName), _cchannelNumber];
        private _csettingDescription = format [LLSTRING(CChannelName_Description), _cchannelNumber];
        private _ccategoryName = format [LLSTRING(CSideChannelNames), _x];
        [
            _cvariableName,
            "EDITBOX",
            [_csettingName, _csettingDescription],
            [COMPONENT_NAME, _ccategoryName],
            _csettingName,
            1,
            {},
            true
        ] call CBA_fnc_addSetting;
    };
} forEach [WEST, EAST, INDEPENDENT, CIVILIAN];
