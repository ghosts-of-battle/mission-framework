[
    QGVAR(enabled),
    "CHECKBOX",
    [ELSTRING(common,Enabled), ELSTRING(common,Enabled_Description)],
    COMPONENT_NAME,
    false,
    1,
    {},
    true
] call CBA_fnc_addSetting;

[
    QGVAR(babel),
    "CHECKBOX",
    [LSTRING(Babel), LSTRING(Babel_Description)],
    COMPONENT_NAME,
    false,
    1,
    {},
    true
] call CBA_fnc_addSetting;

[
    QGVAR(startBppVolume),
    "LIST",
    [LSTRING(StartBppVolume), LSTRING(StartBppVolume_Description)],
    COMPONENT_NAME,
    [
        [0, 1, 2, 3, 4],
        [LSTRING(Whisper), LSTRING(Quiet), LSTRING(Normal), LSTRING(Loud), LSTRING(Shout)],
        DEFAULT_BPP_VOLUME
    ],
    1
] call CBA_fnc_addSetting;

[
    QGVAR(startLeaderVolume),
    "LIST",
    [LSTRING(StartLeaderVolume), LSTRING(StartLeaderVolume_Description)],
    COMPONENT_NAME,
    [
        [0, 1, 2, 3, 4],
        [LSTRING(Whisper), LSTRING(Quiet), LSTRING(Normal), LSTRING(Loud), LSTRING(Shout)],
        DEFAULT_LEADER_VOLUME
    ],
    1
] call CBA_fnc_addSetting;

[
    QGVAR(perSideRadios),
    "CHECKBOX",
    [LSTRING(PerSideRadios), LSTRING(PerSideRadios_Description)],
    COMPONENT_NAME,
    false,
    1,
    {},
    true
] call CBA_fnc_addSetting;

[
    QGVAR(perSideChannelNames),
    "CHECKBOX",
    [LSTRING(PerSideChannelNames), LSTRING(PerSideChannelNames_Description)],
    COMPONENT_NAME,
    false,
    1,
    {},
    true
] call CBA_fnc_addSetting;

// [
//     QGVAR(Personal_radio),
//     "EDITBOX",
//     ["Personal Radios", "Radios for everyever"],
//     COMPONENT_NAME,
//     [],
//     1
// ] call CBA_fnc_addSetting;

// [
//     QGVAR(command_radio), 
//     "EDITBOX", 
//     ["Command Radios", "Radios for the silly folks who think they are in charge"], 
//     COMPONENT_NAME,
//     [], 
//     1
// ] call CBA_fnc_addSetting;

if (EGVAR(common,aceArsenal)) then {
    [
        QGVAR(addArsenalCategory),
        "CHECKBOX",
        LLSTRING(AddArsenalCategory),
        COMPONENT_NAME,
        true,
        false,
        {},
        true
    ] call CBA_fnc_addSetting;
};

#include "initSettingsChannelNames.inc.sqf"