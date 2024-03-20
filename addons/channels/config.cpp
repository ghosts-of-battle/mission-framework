#include "script_component.hpp"

class CfgPatches {
    class ghostFundamentals_channels {

        author = QAUTHOR;
        name = COMPONENT_NAME;
        url = URL;
        units[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_UI_F","cba_main","cba_xeh"};
        VERSION_CONFIG;
        authors[] = {"MitchJC"};
        weapons[] = {};
    };
};

class Extended_PreInit_EventHandlers {
    class ghostFundamentals_channels_Event {
        init = "call compile preprocessFileLineNumbers 'z\ghostf\addons\channels\XEH_preInit.sqf'";
    };
};

class Extended_PostInit_EventHandlers {
    class ghostf_AI_Event {
        init = "call compile preprocessFileLineNumbers 'z\ghostf\addons\channels\XEH_postInit.sqf'";
    };
};