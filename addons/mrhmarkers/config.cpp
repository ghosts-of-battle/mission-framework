class CfgPatches {
	class MRHMarkers{
		units[] = {}; //
		weapons[] = {}; //
		requiredVersion = 0.1; //
		requiredAddons[] = {"MRHMilsimTools"}; //
	};
};

	class CfgMarkerClasses
	{
		class MRHMarkers
		{
		displayName = $STR_MRH_MK_EditorCat;
		};
	};

/////=========cfgNotifications=====
class cfgMarkers
{
#include"\mrhmarkers\cfgmarkers.hpp"
};
////=============fincfgNotifications
/* template pour inclure des textures de brosse
class cfgMarkerBrushes
{
#include"\mrhmarkers\cfgmarkerbrushes.hpp"	
};
*/


