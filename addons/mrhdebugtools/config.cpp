
class CfgPatches {
	class MRHDebugTools{
		units[] = {}; //
		weapons[] = {}; //
		requiredVersion = 0.1; //
		requiredAddons[] = {"MRHMilsimTools"}; //
	};
};



//----------addon dialogs
//#include "mrhdebugtools\Dialogs\.hpp"

//---------- addon cfgs
class cfgFunctions
{
#include "\mrhdebugtools\Functions\cfgFunctions.hpp"
};

class RscTitles
{
	#include "\mrhdebugtools\Dialogs\debugHintBox.hpp"	
};
#include "\mrhdebugtools\Dialogs\logViewer.hpp"
#include "\mrhdebugtools\Dialogs\inputDistDial.hpp"
/*
class cfgSounds
{
	#include "mrhdebugtools\Sounds\cfgsounds.hpp"
};
*/

class cfgVehicles
{
	#include "\mrhdebugtools\cfghpp\cfgvehicles.hpp"
};
#include "\mrhdebugtools\Dialogs\3DENAddonsDisplay.hpp"
class display3DEN
{
	class Controls
	{
		class MenuStrip: ctrlMenuStrip
		{
			class Items
			{
				class Tools
				{
					items[] += {"MRH_listMods"}; // += must be used; you want to expand the array, not override it!
				};
				class MRH_listMods
				{
					text = $STR_MRH_MRHDebugTools_listModsMenuTitle; // Item text
					picture = "\mrhmilsimtools\milsimtoolsIco.paa"; // Item picture toDo
					action = "call MRH_fnc_MilsimTools_DebugTools_showAddons";// Expression called upon clicking; ideally, it should call your custom function
                    opensNewWindow = 1;// Adds ... to the name of the menu entry, indicating the user that a new window will be opened.
				};
			};
		};
	};
};
