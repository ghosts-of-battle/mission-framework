#include "\z\ghostf\addons\adminmenu\script_component.hpp"

disableSerialization;
params ["_display"];


private _control = (_display displayCtrl IDC_ghostf_ADMINMENU_RESP_FACTIONCATEGORY);
private _newIdx = (lbCurSel _control);
GVAR(currentFactionCategory) = _control lbData _newIdx;
GVAR(lastFactionSelection) set [0,_newIdx];

[_display] call FUNC(respawn_refreshFactionCategory);

