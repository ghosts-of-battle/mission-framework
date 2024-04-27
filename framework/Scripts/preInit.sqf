#include "script_component.hpp";
/*
 * Author: CPL.Brostrom.A tinkered with by YonV
 * This is the rules set for the mission using the cba XEH. Each setting here is alterd via cbaSettings
 */

INFO(if (is3DEN) then {"EDEN"} else {"preInit"}, "Initializing CBA Settings...");

/* Check installed moduels ------------------------------------------------------------------------------------------ */
EGVAR(patches,usesACE)          = isClass (configFile >> "CfgPatches" >> "ace_main");
EGVAR(patches,usesACEArsenal)   = isClass (configFile >> "CfgPatches" >> "ace_arsenal");
EGVAR(patches,usesACETagging)   = isClass (configFile >> "CfgPatches" >> "ace_tagging");
EGVAR(patches,usesACEX)         = isClass (configFile >> "CfgPatches" >> "acex_main");
EGVAR(patches,usesKat)          = isClass (configFile >> "CfgPatches" >> "kat_main");
EGVAR(patches,usesACRE)         = isClass (configFile >> "CfgPatches" >> "acre_sys_core");
EGVAR(patches,usesTFAR)         = isClass (configFile >> "CfgPatches" >> "task_force_radio");
EGVAR(patches,usesAlive)        = isClass (configFile >> "CfgPatches" >> "ALiVE_main");
EGVAR(patches,usesZen)          = isClass (configFile >> "CfgPatches" >> "zen_main");

// Global Variables
EGVAR(Staging,ZoneStatus) = false;
EGVAR(Staging,showAllLoadouts) = false;
GVAR(isPlayer) = hasInterface || {isPlayer player};
GVAR(OneLife) = !isNil{(getArray (missionconfigfile >> "respawnTemplates") select 0) == "ace_spectator"};

// Make settings name
private _Ghostettings = "Ghost Mission Settings";

/* Mission ---------------------------------------------------------------------------------------------------------- */
[ // Mission Type
    QEGVAR(Settings,setMissionType),
    "LIST",
    ["Mission Type", "This will deside on what kind of startup hint you get on mission start."],
    [_Ghostettings, "Mission"],
    [[0,1,2,3], ["Custom", "Operation", "Training", "Public"], 1],
    true,
    {},
    true
] call CBA_fnc_addSetting;
[ // Ai setting
    QEGVAR(Settings,setAiSystemDifficulty),
    "LIST",
    ["AI Setting", "This adjustes the ai and make them less godlike and more arcade to play against."],
    [_Ghostettings, " Mission"],
    [[0,1,2], ["Arma Default", "Adjusted", "Faction Based"], 2],
    true,
    {},
    true
] call CBA_fnc_addSetting;
[ // Ai setting
    QEGVAR(Settings,AllowAILoadouts),
    "CHECKBOX",
    ["AI Loadouts (Experimental)", "Allow gear system to apply loadouts to AI units as well as player."],
    [_Ghostettings, " Mission"],
    false,
    true,
    {},
    true
] call CBA_fnc_addSetting;

/* Radios ----------------------------------------------------------------------------------------------------------- */
[ // Enable
    QEGVAR(Settings,enableRadios),
    "CHECKBOX",
    ["Enable","Allow Ghost to set up and handle radio distrubution"],
    [_Ghostettings, "Radios"],
    true,
    true,
    {},
    true
] call CBA_fnc_addSetting;
[ // Long Range Radio Channels
    QEGVAR(Settings,setRadioChannelNames),
    "EDITBOX",
    ["Long Range Radio Channels (ACRE)","Array of radio channels used for ACRE the index of the array translate to channel."],
    [_Ghostettings, "Radios"],
    '["UNUSED","AVIATION","VIKING","LANCER","BANSHEE","SABRE","BANDIT","MISFIT","HAVOC","IDF-1","IDF-2","CAS-1","CAS-2","GROUND-TO-AIR","ATLAS","FARP","CONVOY","ZEUS","CAG","COMMAND"]',
    true,
    {},
    true
] call CBA_fnc_addSetting;
[ // Squad Radio Channels
    QEGVAR(Settings,setRadio),
    "CHECKBOX",
    ["Squad Radio Channels (ACRE)","Allow radio channels to be changed based on player squadname."],
    [_Ghostettings, "Radios"],
    true,
    true,
    {},
    true
] call CBA_fnc_addSetting;

/* Player ----------------------------------------------------------------------------------------------------------- */
[ // Documents
    QEGVAR(Settings,showDiaryRecords),
    "CHECKBOX",
    ["Documents","Allow the mission to write diary help documents."],
    [_Ghostettings, "Player"],
    true,
    true,
    {},
    true
] call CBA_fnc_addSetting;
[ // Rank
    QEGVAR(Settings,setPlayerRank),
    "CHECKBOX",
    ["Rank","Allow mission to apply arma rank based on name rank prefixes."],
    [_Ghostettings, "Player"],
    true,
    true,
    {},
    true
] call CBA_fnc_addSetting;
[ // Apply Earplugs
    QEGVAR(Settings,addEarplugs),
    "CHECKBOX",
    ["Apply Earplugs","Automaticly apply earplugs to players on spawn and respawn."],
    [_Ghostettings, "Player"],
    true,
    true,
    {},
    true
] call CBA_fnc_addSetting;


/* Staging ---------------------------------------------------------------------------------------------------------- */
[ // Enable
    QEGVAR(Settings,enableStagingSystem),
    "CHECKBOX",
    ["Enable","Enables the staging system."],
    [_Ghostettings, "Staging"],
    true,
    true,
    {},
    false
] call CBA_fnc_addSetting;
[ // Show all loadouts
    QEGVAR(Settings,showAllLoadouts),
    "CHECKBOX",
    ["Show all loadouts","Allow the selection of any loadouts from the personal selection menu."],
    [_Ghostettings, "Staging"],
    false,
    true,
    {
        params ["_value"];
        { EGVAR(Staging,showAllLoadouts) = _value; } remoteExecCall ["call"];
    },
    false
] call CBA_fnc_addSetting;

/* Vehicle ---------------------------------------------------------------------------------------------------------- */
[ // Enable
    QEGVAR(Settings,enableVehicleSystem),
    "CHECKBOX",
    ["Enable", "Enables scripted settings and functions to apply to vehicles."],
    [_Ghostettings, "Vehicle"],
    true,
    true,
    {},
    true
] call CBA_fnc_addSetting;
[ // Pylon
    QEGVAR(Settings,enableVehiclePylon),
    "CHECKBOX",
    ["Pylon", "Enables scripted loadouts or pylon to be applied to vehicles based on faction"],
    [_Ghostettings, "Vehicle"],
    true,
    true,
    {},
    true
] call CBA_fnc_addSetting;
[ // Loadouts
    QEGVAR(Settings,enableVehicleInventory),
    "CHECKBOX",
    ["Inventory", "Enables scripted inventory to be applied to vehicles based on faction"],
    [_Ghostettings, "Vehicle"],
    true,
    true,
    {},
    true
] call CBA_fnc_addSetting;
[ // Radio
    QEGVAR(Settings,enableVehicleRadios),
    "CHECKBOX",
    ["Radio", "Enables vehicles radio to be enabled and set on vehicles"],
    [_Ghostettings, "Vehicle"],
    false,
    true,
    {},
    true
] call CBA_fnc_addSetting;
[ // Factions
    QEGVAR(Settings,vehicleFactions),
    "EDITBOX",
    ["Factions","Array of factions allowing system loadout and pylon changes"],
    [_Ghostettings, "Vehicle"],
    '["BLU_F", "BLU_CTRG_F", "BLU_T_F", "BLU_USA_Ghost_F", "rhs_faction_usaf", "rhs_faction_usarmy", "rhs_faction_usarmy_d", "rhs_faction_usarmy_wd", "rhs_faction_usmc", "rhs_faction_usmc_d", "rhs_faction_usmc_wd", "rhs_faction_usn","rhs_faction_socom","USAF"]',
    true,
    {},
    true
] call CBA_fnc_addSetting;

/* Item Replacement system ------------------------------------------------------------------------------------------ */
[ // Enable
    QEGVAR(Settings,allowReplaceItem),
    "CHECKBOX",
    ["Enable","Allow objects to be replaced with streamlined gear for consistency."],
    [_Ghostettings, "Item Replacement"],
    true,
    true,
    {},
    true
] call CBA_fnc_addSetting;
[ // Medical Items
    QEGVAR(Settings,replaceMedical),
    "LIST",
    ["Medical Items","Allow medical items to be replaced with our custom ones.\nNote: this system will not be disabled if the ace medical convert items is enabled."],
    [_Ghostettings, "Item Replacement"],
    [[0,1], ["Disabled", "Convert medical equipment"], 1],
    true,
    {},
    true
] call CBA_fnc_addSetting;
[ // Magazines
    QEGVAR(Settings,replaceMagazines),
    "LIST",
    ["Magazines","Force specific usage of sertain objects"],
    [_Ghostettings, "Item Replacement"],
    [[0,1,2], ["Disabled", "Use RHS then ACE magazines", "Use ACE then RHS magazines"], 0],
    true,
    {},
    true
] call CBA_fnc_addSetting;
[ // M67 Fragmentation Grenade
    QEGVAR(Settings,replaceHandGrenades),
    "LIST",
    ["M67 Fragmentation Grenade","Force specific usage of sertain objects"],
    [_Ghostettings, "Item Replacement"],
    [[0,1,2], ["Disabled", "Use ACE M67", "Use RHS M67"], 1],
    true,
    {},
    true
] call CBA_fnc_addSetting;
[ // M84 Stun Grenade
    QEGVAR(Settings,replaceStunGrenades),
    "LIST",
    ["M84 Stun Grenade","Force specific usage of sertain objects"],
    [_Ghostettings, "Item Replacement"],
    [[0,1,2], ["Disabled", "Use ACE M84", "Use RHS M84"], 1],
    true,
    {},
    true
] call CBA_fnc_addSetting;
[ // Smoke Grenade
    QEGVAR(Settings,replaceSmokeGrenades),
    "LIST",
    ["Smoke Grenade","Force specific usage of sertain objects"],
    [_Ghostettings, "Item Replacement"],
    [[0,1,2], ["Disabled", "Use ACE Smokes", "Use RHS Smokes"], 1],
    true,
    {},
    true
] call CBA_fnc_addSetting;

/* Combat Jump Simulation ------------------------------------------------------------------------------------------- */
[ // Simulation Type
    QEGVAR(Settings,jumpSimulation),
    "LIST",
    ["Simulation Type","Combat jump simulation is a system that checks for lose equiped gear in the form of;\nnight vision googles, hats or glasses and make you lose the on a combat jump.\n    None: No simulation is done.\n    Basic: Lose gear unassigned.\n    Advanced: Lose gear is removed."],
    [_Ghostettings, "Combat Jump Simulation"],
    [[0,1,2], ["None", "Basic", "Advanced"], 2],
    true,
    {},
    true
] call CBA_fnc_addSetting;
[ // Include Night Vision Googles
    QEGVAR(Settings,jumpSimulationNVG),
    "CHECKBOX",
    ["Include Night Vision Googles","Include equiped Night Vison Googles in the simulation."],
    [_Ghostettings, "Combat Jump Simulation"],
    true,
    true,
    {},
    true
] call CBA_fnc_addSetting;
[ // Include Non-combat Googles
    QEGVAR(Settings,jumpSimulationGlasses),
    "CHECKBOX",
    ["Include Non-combat Googles","Include Non-combat Googles in the simulation. This refere to sunshades and simular non-safety googles."],
    [_Ghostettings, "Combat Jump Simulation"],
    true,
    true,
    {},
    true
] call CBA_fnc_addSetting;
[ // Include Non-combat Headgear
    QEGVAR(Settings,jumpSimulationHat),
    "CHECKBOX",
    ["Include Non-combat Headgear","Include Non-combat Headgear in the simulation. This refere to hats bandanas and baretes."],
    [_Ghostettings, "Combat Jump Simulation"],
    true,
    true,
    {},
    true
] call CBA_fnc_addSetting;


/* Zeus ------------------------------------------------------------------------------------------------------------- */
[ // Enable Custom Zeus Moduels
    QEGVAR(Settings,enableGhostZeusModules),
    "CHECKBOX",
    ["Enable Custom Zeus Moduels","Allow mission to add Ghost moduels using the Achilles or ZEN framework."],
    [_Ghostettings, "Zeus"],
    true,
    true,
    {},
    true
] call CBA_fnc_addSetting;

// Other
[ // Primary Clan Tag
    QEGVAR(Settings,primaryClanTag),
    "EDITBOX",
    ["Primary Clantag","Primary clan tag to to check for"],
    [_Ghostettings, "Other"],
    'GHOST',
    true,
    {},
    true
] call CBA_fnc_addSetting;

/* ranks ------------------------------------------------------------------------------------------------------------ */
private _Missionranks = "Mission Ranks";
private _rank_hint = "list of steam user ID's";
[
    QEGVAR(Settings,ranks_corporal), 
    "EDITBOX",
    ["Corporal", _rank_hint], 
    _Missionranks,
    [], 
    1 
] call CBA_fnc_addSetting;

[
    QEGVAR(Settings,ranks_sergeant), 
    "EDITBOX",
    ["Sergeant", _rank_hint], 
    _Missionranks,
    [], 
    1 
] call CBA_fnc_addSetting;

[
    QEGVAR(Settings,ranks_lieutenant), 
    "EDITBOX",
    ["Lieutenant", _rank_hint], 
    _Missionranks,
    [], 
    1 
] call CBA_fnc_addSetting;

[
    QEGVAR(Settings,ranks_captain),
    "EDITBOX",
    ["Captain", _rank_hint],
    _Missionranks,
    [], 
    1 
] call CBA_fnc_addSetting;

[
    QEGVAR(Settings,ranks_major),
    "EDITBOX",
    ["Major", _rank_hint], 
    _Missionranks,
    [], 
    1 
] call CBA_fnc_addSetting;

[
    QEGVAR(Settings,ranks_colonel),
    "EDITBOX",
    ["Colonel", _rank_hint], 
    _Missionranks,
    [], 
    1 
] call CBA_fnc_addSetting;

/* Roles ------------------------------------------------------------------------------------------------------------ */
private _Missionroles = "Mission Roles";
private _role_hint = "list of steam user ID's";
[
    QEGVAR(Settings,roles_medic),
    "EDITBOX",
    ["Medic", _role_hint], 
    _Missionroles,
    [], 
    1 
] call CBA_fnc_addSetting;

[
    QEGVAR(Settings,roles_eng),
    "EDITBOX",
    ["Engineer", _role_hint], 
    _Missionroles,
    [], 
    1 
] call CBA_fnc_addSetting;

[
    QEGVAR(Settings,roles_com),
    "EDITBOX",
    ["Communications", _role_hint], 
    _Missionroles,
    [], 
    1 
] call CBA_fnc_addSetting;

[
    QEGVAR(Settings,roles_s3),
    "EDITBOX",
    ["S3", _role_hint], 
    _Missionroles,
    [], 
    1 
] call CBA_fnc_addSetting;

INFO(if (is3DEN) then {"EDEN"} else {"preInit"}, "Initialization of CBA Settings completed...");

// Ace Arsenal
call EFUNC(init,aceArsenal);

// Load preInit mission settings
if (is3DEN) exitWith {};
INFO("preInit", "Initializing...");

// Logistical Database
EGVAR(DATABASE,DONE) = false;
GVAR(DATABASE) = call EFUNC(init,logistics);
EGVAR(DATABASE,DONE) = true;

call EFUNC(init,chatCommands);

call EFUNC(init,zenModuels);

if (EGVAR(Settings,setAiSystemDifficulty) >= 1 ) then {
    call EFUNC(init,skillAdjustment);
};

call EFUNC(init,eventHandlers);

INFO("preInit", "Initialization completed.");
