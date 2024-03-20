#include "\z\ghostf\addons\adminmenu\script_component.hpp"

disableSerialization;
params ["_utilityFunction", "_utilityName", ["_args", 0]];

if (isNil _utilityFunction) exitWith {
    systemChat format ["[Ghosts of Battle Admin Menu] Modal utility with name '%1' requires undefined function '%2'", _utilityName, _utilityFunction];
};

GVAR(utilityData) = [];
private _exit = false;

if ((missionNamespace getVariable [QGVAR(selectedTab), -1]) isEqualTo IDC_ghostf_ADMINMENU_G_PMAN) then {
    GVAR(utilityData) = GVAR(playerManagement_selected) apply {_x call BIS_fnc_objectFromNetId};

    _exit = count GVAR(utilityData) == 0;
    if (!_exit && _args isEqualTo true) then {
        GVAR(utilityData) = GVAR(utilityData) select {alive _x && _x isKindOf "CAManBase"};
        _exit = count GVAR(utilityData) == 0;
    };
};

if (_exit) exitWith {
    systemChat "[Ghosts of Battle Admin Menu] No valid player(s) selected for the action!";
};

GVAR(modalDetails) = [_utilityFunction, _utilityName, _args];
createDialog QGVAR(modal);
