if (!isServer) exitWith {};
waitUntil {!isNil "ALiVE_STATIC_DATA_LOADED"};

ALIVE_autoGeneratedTasks = ["Assassination","DestroyInfantry","SabotageBuilding","InsurgencyPatrol","InsurgencyDestroyAssets","Rescue","CSAR","DestroyInfantry","SabotageBuilding","InsurgencyPatrol","InsurgencyDestroyAssets","DestroyInfantry","SabotageBuilding","InsurgencyPatrol","InsurgencyDestroyAssets"];


ALiVE_PLACEMENT_CUSTOM_VEHICLEBLACKLIST = ["O_Taliban_M1A1_01"];
ALiVE_PLACEMENT_CUSTOM_GROUPBLACKLIST = ["O_Taliban_M1A1_01"];
ALiVE_PLACEMENT_CUSTOM_UNITBLACKLIST = ["O_Taliban_M1A1_01"];
ALiVE_MIL_CQB_CUSTOM_UNITBLACKLIST = [];


/*
 * Mil logistics convoy transport vehicles per faction
 */

[ALIVE_factionDefaultTransport, "O_Taliban", ["O_Taliban_URAL_4320_Open_01","O_Taliban_URAL_4320_Closed_01"]] call ALIVE_fnc_hashSet;
[ALIVE_factionDefaultTransport, "UK3CB_TKM_I", ["UK3CB_TKM_I_V3S_Closed","UK3CB_TKM_I_V3S_Open"]] call ALIVE_fnc_hashSet;




/*
 * Mil logistics air transport vehicles per faction
 */

[ALIVE_factionDefaultAirTransport, "O_Taliban", ["O_Taliban_Mi_8Transport_01"]] call ALIVE_fnc_hashSet;
[ALIVE_factionDefaultAirTransport, "CIV_F", []] call ALIVE_fnc_hashSet;