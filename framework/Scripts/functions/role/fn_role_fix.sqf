#include "..\script_component.hpp"

if (isDedicated) exitWith {};

private _ghostFIX = [
    "ghostfix",
    "FIX Perms",
    "", {
        player call FUNC(rank);
        player call FUNC(role);
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _ghostFIX] call ACE_interact_menu_fnc_addActionToObject;

//////
