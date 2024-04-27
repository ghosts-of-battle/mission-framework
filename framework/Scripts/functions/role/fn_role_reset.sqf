#include "..\script_component.hpp"

if (isDedicated) exitwith {};

if (hasinterface) then {
    player setVariable ["ghost_iscom", false, true];
    player setVariable["draWhitelisted", false, true];
    daoWhitelisted=false;
};
systemChat format ["%1! Skills Updated", name player];