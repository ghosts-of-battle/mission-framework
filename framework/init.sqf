#include "Scripts\script_component.hpp"
/*
 * Author: CPL.Brostrom.A tinkered with by YonV
 * This is the mission init.sqf this is run witout exceptions on mission start.
 * Some sections in this script only run when your on a multiplayer enviroment to avoid errors and issues.
 * Read more about Initzialisation order here: https://community.bistudio.com/wiki/Initialization_Order
 */

if (!isMultiplayer) then {SHOW_CHAT_WARNING("", "Mission is running on singelplayer enviroment!");};
#ifdef DEBUG_MODE
    SHOW_INFO("init", "Initializing...");
    SHOW_CHAT_INFO_1("init", "Ghost Version %1 is running.", VERSION);
    SHOW_CHAT_WARNING("init", "Debug mode is currently active.");
    logEntities;
#endif

enableSaving [false, false];

// To Turns off or on ambient Wildelife, Ambient Sounds and wind sound strenght.
enableEnvironment [false, true, 1];
[{
    // Disable Ambient Animals
    [{time > 0}, {enableEnvironment [false, false];}] call CBA_fnc_waitUntilAndExecute;
}] call CBA_fnc_directCall;

ACE_maxWeightCarry = 7500;
ACE_maxWeightDrag = 10000;

if (isServer) then {
    ["ace_captiveStatusChanged", {
        params ["_unit", "_state", "_reason"];

        if ((getPos _unit) inArea prison_marker_or_trigger_name) then {
            _unit setVariable ["detained", true, true];
        };
    }] call CBA_fnc_addEventHandler;

    [{
        [getPos prison_marker_or_trigger_name, [side player], -10] call ALIVE_fnc_updateSectorHostility;
    }, 3600, []] call CBA_fnc_addPerFrameHandler;
};

if(isServer) then {
	// -------------------------------------------------------------------------------------------------------------
	// override default data 
	// see script/staticData.sqf
	["MISSION INIT - Waiting"] call ALIVE_fnc_dump;

	waitUntil {!isNil "ALiVE_STATIC_DATA_LOADED"};

	["MISSION INIT - Continue"] call ALIVE_fnc_dump;

	// override static data settings
	call compile (preprocessFileLineNumbers "alive\staticData.sqf");

	["MISSION INIT - Static data override loaded"] call ALIVE_fnc_dump;
	// -------------------------------------------------------------------------------------------------------------
};

[] spawn VCM_fnc_VcomInit;

INFO("init", "Initialization completed.");

/* APPLY STUFF ONLY BELOW THIS LINE */

