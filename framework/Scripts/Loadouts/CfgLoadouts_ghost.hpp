#include "..\script_component.hpp"
class ghost_weapons_F: ghost_B_Base_F {
    displayName = "Weapons"; // Selector display name shown in selectors and arsenal
    scope = 2; // 0 private: not obtainable. 1 protected: can be used but not selected. 2 public: can be selected and used
    role = "weapons"; // Loadout role utalized by arsenal to figure out extended items
    icon = "iconManAT"; // classname of icon
    preLoadout = "[player] call Ghost_fnc_player_setRank;"; // code that gets applied befor loadout and abilities are applied
    postLoadout = "call GHOST_fnc_role_wep; call GHOST_fnc_role_give;";
};
class ghost_medic_F: ghost_B_Base_F {
    displayName = "Medic"; // Selector display name shown in selectors and arsenal
    scope = 2; // 0 private: not obtainable. 1 protected: can be used but not selected. 2 public: can be selected and used
    role = "medic"; // Loadout role utalized by arsenal to figure out extended items
    icon = "iconManMedic"; // classname of icon
    abilityMedic = 2; // 0 Nothing, 1 Medic, 2 Doctor
    preLoadout = "[player] call Ghost_fnc_player_setRank;"; // code that gets applied befor loadout and abilities are applied
    postLoadout = "call GHOST_fnc_role_med; call GHOST_fnc_role_give;";
};

class ghost_engineer_F: ghost_B_Base_F {
    displayName = "Engineer"; // Selector display name shown in selectors and arsenal
    scope = 2; // 0 private: not obtainable. 1 protected: can be used but not selected. 2 public: can be selected and used
    role = "engineer"; // Loadout role utalized by arsenal to figure out extended items
    icon = "iconManEngineer"; // classname of icon
    abilityEngineer = 2; // 0 Nothing, 1 Repair Specialists, 2 Engineer
    abilityEOD = 1; // 0 Nothing, 1 EOD Specialist
    preLoadout = "[player] call Ghost_fnc_player_setRank;"; // code that gets applied befor loadout and abilities are applied
    postLoadout = "call GHOST_fnc_role_eng; call GHOST_fnc_role_give;";
};

class ghost_communications_F: ghost_B_Base_F {
    displayName = "Communications"; // Selector display name shown in selectors and arsenal
    scope = 2; // 0 private: not obtainable. 1 protected: can be used but not selected. 2 public: can be selected and used
    role = "communications"; // Loadout role utalized by arsenal to figure out extended items
    icon = "iconManLeader"; // classname of icon
    preLoadout = "[player] call Ghost_fnc_player_setRank;"; // code that gets applied befor loadout and abilities are applied
    postLoadout = "call GHOST_fnc_role_com; call GHOST_fnc_role_give;";
};