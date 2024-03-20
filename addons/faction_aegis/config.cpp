#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghostf_main",
            "A3_Characters_F",
            "A3_Aegis_Characters_F_Aegis",
            "A3_Iransf_Characters_F_Iransf",
            "A3_Static_F",
            "A3_Air_F",
            "A3_Air_F_Beta",
            "A3_Aegis_Air_F_Aegis",
            "A3_Atlas_Characters_F_Atlas",
            "A3_Aegis_Data_F_Aegis"
        };
        authorUrl = "https://www.ghostsofbattle.com/";
        author = QAUTHOR;
        authors[] = {""};
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgGroups.hpp"

