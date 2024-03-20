#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghostf_main",
            "ALIVE_splashscreen"
        };
        authorUrl = "https://www.ghostsofbattle.com/";
        skipWhenMissingDependencies = 1;
        author = QAUTHOR;
        authors[] = {""};
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"