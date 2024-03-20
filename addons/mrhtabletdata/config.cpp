
class CfgPatches {
	class MRHTabletData{
		units[] = {}; //
		weapons[] = {}; //
		requiredVersion = 0.1; //
		requiredAddons[] = {"MRHMilsimTools"}; //
	};
};
#include "\mrhtabletdata\MRH_components.hpp"
class MRH_SoldierTabData
{
	#include "\mrhtabletdata\tabletData.hpp"
};
class MRH_SoldierTabIntelPictures
{
	#include "\mrhtabletdata\tabletPictures.hpp"
};