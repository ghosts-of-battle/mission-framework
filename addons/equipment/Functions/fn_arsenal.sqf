#include "\z\ghostf\addons\equipment\script_component.hpp"
/*
Arguments:
0: items only misc items <ARRAY of STRING>
1: tooltip <STRING> (Optional)
2: picture path <STRING> (Optional)
3: override a spezific button (0-9) <NUMBER> (Optional)

Return Value:
successful: number of the slot; error: -1 <NUMBER>

Example:

call ghostf_fnc_arsenal;
Public: Yes

[
    ["ACE_Flashlight_XL50"],
    "better flashlight",
    "\path\to\a\pictureWithAFlashlight.paa",
    _buttonId
] call ace_arsenal_fnc_addRightPanelButton
*/

// [
//     ["ALIVE_Tablet","ItemcTabMisc","MRH_SoldierTab"],
//     "Tablets",
//     "\a3\ui_f\data\GUI\Cfg\CommunicationMenu\call_ca.paa"
// ] call ACEFUNC(arsenal,addRightPanelButton);

// [
//     ["ghostf_VPN","ghostf_defib_AED","ghostf_fentanyl","ghostf_epinephrine","ghostf_ketamine","ghostf_morphine","ghostf_naloxone","ghostf_Apap","ghostf_tetra","ACE_adenosine","ACE_bloodIV_250","ACE_bloodIV_500","ACE_bloodIV","ACE_bodyBag","ACE_elasticBandage","ACE_epinephrine","ACE_fieldDressing","ACE_morphine","ACE_packingBandage","ACE_personalAidKit","ACE_plasmaIV_250","ACE_plasmaIV_500","ACE_plasmaIV","ACE_quikclot","ACE_salineIV_250","ACE_salineIV_500","ACE_salineIV","ACE_splint","ACE_surgicalKit","ACE_tourniquet","FirstAidKit","ghostf_Apap","ghostf_defib_AED","ghostf_epinephrine","ghostf_fentanyl","ghostf_ketamine","ghostf_medbags_DrugKit","ghostf_medbags_FirstAid","ghostf_medbags_MedicKit","ghostf_medbags_Trauma","ghostf_medbags_Fluid"],
//     "Ghost Medical",
//     "\z\ace\addons\medical_gui\data\categories\medication.paa"
// ] call ACEFUNC(arsenal,addRightPanelButton);

[
    ["ACE_SpraypaintYellow","ACE_SpraypaintWhite","ghostf_vs17_vs17","ace_marker_flags_black","ace_marker_flags_blue","ace_marker_flags_green","ace_marker_flags_orange","ace_marker_flags_purple","ace_marker_flags_red","ace_marker_flags_white","ace_marker_flags_yellow","ACE_IR_Strobe_Item","ACE_Chemlight_Shield","KNB_PanelGreen","KNB_PanelRed","KNB_PanelYellow","ACE_SpraypaintBlack","ACE_SpraypaintBlue","ACE_SpraypaintGreen","ACE_SpraypaintRed","taro_vs17_panel"],
    "Marking",
    "\z\ace\addons\arsenal\data\iconCustom.paa"
] call ACEFUNC(arsenal,addRightPanelButton);

// [
//     ["ALiVE_Humrat","ALiVE_Waterbottle","ACE_WaterBottle_Half","ACE_WaterBottle_Empty","ACE_WaterBottle","ACE_Cellphone","ACE_Humanitarian_Ration","plp_bo_w_AfterSun","ACE_Banana","plp_bo_w_BeachBat","plp_bo_w_BocceBalls","plp_bo_w_BottleBitters","plp_bo_w_BottleBlueCorazol","plp_bo_w_BottleLiqCream","plp_bo_w_BottleGin","plp_bo_w_BottleLiqOrange","plp_bo_w_BottleTequila","plp_bo_w_CigarCutter","plp_bo_w_Cigar","plp_bo_w_CigarFine","plp_bo_w_GlassAperitif","plp_bo_w_GlassCocktail","plp_bo_w_GlassDrink","plp_bo_w_Lifebelt","plp_bo_w_LifeguardFloat","plp_bo_w_CigarBoxSealed","plp_bo_w_SunMilk","plp_bo_w_SunBlocker","CAF_Axe","ACE_Can_Franta","ACE_Can_RedGull","ACE_Can_Spirit","ACE_Canteen","ACE_Canteen_Empty","ACE_Canteen_Half","ACE_MRE_SteakVegetables","ACE_MRE_CreamTomatoSoup","ACE_MRE_CreamChickenSoup","ACE_MRE_ChickenHerbDumplings","ACE_MRE_ChickenTikkaMasala","ACE_MRE_BeefStew","ACE_MRE_LambCurry","ACE_MRE_MeatballsPasta"],
//     "Stuff",
//     "\a3\ui_f\data\Map\MapControl\tourism_CA.paa"
// ] call ACEFUNC(arsenal,addRightPanelButton);

// [
//     ["MineDetector","tsp_lockpick","tsp_paperclip","AMP_Door_Wedge","ACE_Sandbag_empty","ACE_DefusalKit","ACE_DeadManSwitch","ACE_wirecutter","ToolKit","MineDetector","ACE_Clacker","ACE_M26_Clacker","ACE_EntrenchingTool","ACE_Fortify"],
//     "Engineering",
//     "\z\ace\addons\minedetector\ui\icon_mineDetector.paa"
// ] call ACEFUNC(arsenal,addRightPanelButton);
