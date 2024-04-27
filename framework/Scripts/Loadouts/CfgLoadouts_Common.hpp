#include "..\script_component.hpp"
class CommonBlufor {
    // regiment = "";       // Style value
    // company = "";        // Used for selector filter and arsenal loadout name

    // displayName = "";    // Selector display name shown in selectors and arsenal
    // icon = "";           // classname of icon
    // scope = 0;           // 0 private: not obtainable. 1 protected: can be used but not selected. 2 public: can be selected and used

    // category[] = {};     // Hardcoded category paths found in ".\cScripts\GhostFnc\functions\systems\fn_setupLoadoutCategories.sqf"
    // loadout = [[],[],[],[],[],[],"","",[],["","","","","",""]]; // loadout array none quoted wraped

    // role = "";           // Loadout role utalized by arsenal to figure out extended items [office, squadleader,  fireteamleader, medic]

    // abilityMedic = 0;    // 0 Nothing, 1 Medic, 2 Doctor
    // abilityEngineer = 0; // 0 Nothing, 1 Repair Specialists, 2 Engineer
    // abilityEOD = 0;      // 0 Nothing, 1 EOD Specialist

    // insignia = "";       // classname of a insignia

    // preLoadout = "";     // code that gets applied befor loadout and abilities are applied
    // postLoadout = "";    // code that gets applied after loadout and abilities are applied
};

class ghost_B_Base_F: CommonBlufor {
    regiment = "Ghost"; // Style value
    scope = 0; // 0 private: not obtainable. 1 protected: can be used but not selected. 2 public: can be selected and used

    category[] = {"Ghost_Loadout_Cat_Base"}; // Hardcoded category paths found in ".\cScripts\GhostFnc\functions\systems\fn_setupLoadoutCategories.sqf"
    company = "Ghost"; // Used for selector filter and arsenal loadout name
    preLoadout = "[player] call Ghost_fnc_player_setRank;";
    loadout = [[["arifle_MX_Black_F","ACE_muzzle_mzls_H","acc_pointer_IR","optic_ERCO_blk_F",["30Rnd_65x39_caseless_black_mag",30],[],""],[],["hgun_P07_blk_F","","","",["16Rnd_9x21_Mag",17],[],""],["U_B_CombatUniform_mcam",[["ACE_EarPlugs",1],["ACE_fieldDressing",4],["ACE_elasticBandage",2],["ACE_packingBandage",2],["ACE_quikclot",2],["ACE_tourniquet",4],["ACE_MapTools",1],["ACE_painkillers",1,10],["16Rnd_9x21_Mag",2,17]]],["V_PlateCarrier2_rgr",[["ACE_CableTie",4],["30Rnd_65x39_caseless_black_mag",8,30],["HandGrenade",2,1],["SmokeShellBlue",1,1],["SmokeShellYellow",1,1],["SmokeShell",1,1],["ACE_M14",1,1],["ACE_Chemlight_HiGreen",1,1],["ACE_Chemlight_HiBlue",1,1],["ACE_Chemlight_HiRed",1,1],["ACE_M84",1,1],["ACE_CTS9",1,1]]],["B_AssaultPack_rgr",[["ACE_SpraypaintBlack",1],["ACE_SpraypaintBlue",1],["ACE_SpraypaintGreen",1],["ACE_SpraypaintRed",1],["ACE_SpraypaintWhite",1],["ACE_SpraypaintYellow",1],["ace_marker_flags_red",3],["ACE_IR_Strobe_Item",1],["B_IR_Grenade",1,1]]],"H_HelmetSpecB","G_Tactical_Clear",["Binocular","","","",[],[],""],["ItemMap","ItemGPS","","ItemCompass","ACE_Altimeter","ACE_NVG_Wide_Black_WP"]],[]];
};
