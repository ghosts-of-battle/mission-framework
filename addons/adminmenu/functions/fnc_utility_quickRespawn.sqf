#include "\z\ghostf\addons\adminmenu\script_component.hpp"

systemChat "[Ghosts of Battle Admin Menu] Quick Respawn:";
private _str = "";
{
    _str = _str + format ["[%1: %2]", name _x, str ((_x getVariable [QEGVAR(spectator,unitData), false]) isEqualType [])];

    [QGVAR(quickRespawn), 0, _x] call CBA_fnc_targetEvent;
} forEach GVAR(utilityData);
systemChat _str;

[["%1 Quick Respawned %2",profileName,_str],false,"[Ghosts of Battle Admin Menu] "];
