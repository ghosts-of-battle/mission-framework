#include "script_component.hpp"

class CfgPatches
{
	class ghostf_Civilians
	{
		name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			"A3_UI_F",
			"A3_UI_F_Curator",
            "A3_Functions_F_Curator",
            "A3_Modules_F",
            "A3_Modules_F_Curator",
            "A3_Modules_F_Bootcamp_Misc",
			"cba_main",
			"cba_xeh"
		};
		authorUrl = "https://www.ghostsofbattle.com/";
        author = QAUTHOR;
        VERSION_CONFIG;
		authors[] = {"MitchJC", "Mokka"};

	};
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
