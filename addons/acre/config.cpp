#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
                requiredAddons[] = {
                    "ghostf_common",
                    "ghostf_main", 
                    "acre_sys_core", 
                    "acre_api", 
                    "acre_sys_signal", 
                    "acre_sys_prc117f", 
                    "acre_sys_prc148", 
                    "acre_sys_prc152"
                    };
        author = QAUTHOR;
        authors[] = {"3Mydlo3", "veteran29"};
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1;
    };
};

#include "CfgEventHandlers.hpp"
#include "RadioDialog.hpp"
#include "CfgVehicles.hpp"