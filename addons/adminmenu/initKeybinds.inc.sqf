[COMPONENT_NAME, QGVAR(openKey), ["Open Admin Menu", "Only available for admins and in singleplayer"], FUNC(keyPressed), {false}, [59, [true, false, false]], false, 0] call CBA_fnc_addKeybind; // Shift + F1
// [COMPONENT_NAME, QGVAR(spectatorRemoteControl), ["Control Focused Spectator Unit", "Only available in Ghosts of Battle Spectator, and only for admins and in singleplayer"], FUNC(keyPressed), {false}, [0, [false, false, false]], false, 0] call CBA_fnc_addKeybind; // No default bind


// [QEGVAR(spectator,keyDown), {
//     params ["", "_args"];
//     _args call FUNC(keyPressed);
// }] call CBA_fnc_addEventHandler;



// Parameters
// _addon	Name of the registering mod + optional sub-category <STRING, ARRAY>
// _action	Id of the key action.  STRING
// _title	Pretty name, or an array of pretty name and tooltip STRING
// _downCode	Code for down event, empty string for no code.  <CODE>
// _upCode	Code for up event, empty string for no code.  <CODE>

// Optional
// _defaultKeybind	The keybinding data in the format [DIK, [shift, ctrl, alt]] ARRAY
// _holdKey	Will the key fire every frame while down <BOOLEAN>
// _holdDelay	How long after keydown will the key event fire, in seconds.  <NUMBER>
// _overwrite	Overwrite any previously stored default keybind <BOOLEAN>