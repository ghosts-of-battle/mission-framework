#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ghostf_main"};
        author = "";
        authors[] = {""};
        VERSION_CONFIG;
    };
};


#include "CfgAmmo.hpp"
