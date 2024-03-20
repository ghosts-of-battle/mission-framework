#include "script_component.hpp"

#ifndef ghostf_LEAN_RHS_CUP_HLC

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ghostf_common"};
        author = QAUTHOR;
        authors[] = {"PabstMirror"};
        authorUrl = "https://ghostsofbattle.com";
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"

#endif
