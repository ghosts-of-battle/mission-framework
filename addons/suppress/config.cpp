#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ghostf_main"};
        author = QAUTHOR;
        authors[] = {"SzwedzikPL"};
        authorUrl = "https://ghostsofbattle.com";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "overlay.hpp"
