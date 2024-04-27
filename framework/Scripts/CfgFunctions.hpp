class Ghost {
    class init {
        file = "Scripts\functions\init";
        class init_aceArsenal {};
        class init_aceItemReplace {};

        class init_skillAdjustment {};
        class init_vehicle {};
        class init_staging {};

        class init_logistics {};

        class init_diary {};
        class init_message {};
        class init_chatCommands {};

        class init_eventHandlers {};

        class init_zenModuels {};
    };
    class documents {
        file = "Scripts\functions\documents";
        class Doc_Info {};
        class Doc_Radio {};

        class DocRadio_Med {};
        class DocRadio_CAS {};
        class DocChklist {};
    };
    class logistics {
        file = "Scripts\functions\logistics";
        class addCargo {};
        class setCargoAttributes {};
        class checkItemValidity {};
        class createCargoCrate {};

        class doStarterCrateSupplies {};
        class doFieldHospital {};
        class doSupplyCrate {};

        class doEmptyCrate {};

        class logistics_getContainer {};
        class logistics_getAllContainerItems {};
    };
    class players {
        file = "Scripts\functions\players";

        class profile_saveInsignia {};
        class profile_loadInsignia {};

        class player_hasClanTag {};
        class player_getClanTag {};

        class player_getRank {};
        class player_setRank {};
        class player_getRole {};

        class player_isCurator {};
        
        class unit_getName {};
        class unit_getSquadName {};


        class getRadioChannel {};
        class setRadioChannel {};
        class setActiveRadio {};

        class player_getCompany {};
        class player_setCompany {};

        // Other Functions
        class unit_getVariables {};
    };
    class mission {
        file = "Scripts\functions\mission";
        class gate {};
        class teleport {};
        class addLoadoutAction {};

        class addGetOutHelo {};
        class addEscapeWreck {};

        class addLineJump {};
        class addHaloJump {};

        class setVehicleLable {};
        
        class addBaseCrate {};
        class addStagingZone {};

        class doStarterCrate {};

        class makeAgent {};
    };
    class systems {
        file = "Scripts\functions\systems";
        class allowLoadout {};
        class setupLoadoutSelection {};
        class setupLoadoutCategories {};
        class addLoadoutSelection {};

        // Arsenal releated
        class getArsenalWhitelist {};
        class addDefaultArsenalLoadout {};
        class addDefaultArsenalLoadouts {};
        class clearDefaultArsenalLoadouts {};

        class checkStagingZone {};

        class deleteDroppedObjects {};

        // Training scripts
        class training_addHitIndicator {};
        class training_clearhitIndicator {};

       // Plane jump
        class para_lineJump {};
        class para_haloJump {};
        class para_equipment {};
        class para_backpack {};

        // Buttons and options
        class addReGear {};
        class addHeal {};
        class addArsenal {};
        
        class createActionCategory {};

        class doGetOutHeloSide {};

        class addObjectToCurator {};

        class getChannelName {};
        class clearRadioIds {};
        class filterUnitLoadout {};
        class getRadioBase {};

        class isValidFaction {};

        class renameObject {};
        class getIcon {};
        
        class getAttendance {};
        class getServerMetrics {};
    };
    class vehicle {
        file = "Scripts\functions\vehicle";
        class vehicle_addInventory {};
        class vehicle_addFunctions {};
        class vehicle_addFunctionsGlobal {};
        class vehicle_addCosmetics {};
        class vehicle_addRadio {};
        class vehicle_setRadio {};

        class vehicle_applyTextures {};

        // Staging
        class vehicle_addStagingActions {};

        class vehicle_addRegearAction {};
        class vehicle_addRepairAction {};

        class vehicle_addCosmeticSelection {};
        class vehicle_addPylonSelection {};
        class vehicle_setupPylonCategories {};

        class vehicle_applyLoadout {};
        class vehicle_addDefaultLoadout {};
        class vehicle_getPylon {};

        // Other
        class vehicle_reset {};
        class vehicle_addFlagAction {};
    };
    class civ {
        file = "Scripts\functions\civ";
        class civ_init {};
        class civ_checkProjectile {};
        class civ_damage {};
    };
    class modules {
        file = "Scripts\functions\modules";
        class zenModule_EnableUnitSimulation {};

        class zenModule_CreateStarterCrate {};
        class zenModule_CreateSupplyCrate {};

        class zenModule_applyLoadout {};
        class zenModule_RegearTrooper {};
        // class zenModule_RekitVehicle {};
        class zenModule_ResetPlayerRadio {};

        class zenModule_stagingZones {};

        class zenModule_CallEndex {};
    };
    class gear {
        file = "Scripts\functions\gear";
        class gear_preInit { preInit = 1; };
        class gear_postInitProxy { postInit = 1; };
        class gear_postInit {};

        class gear_applyLoadout {};
        class gear_applyCosmetics {};
        class gear_applyAbilities {};
        class gear_applyFunctions {};
        class gear_selectLoadout {};
        class gear_getSideConfig {};

        class gear_setupRadios {};

        // Save and Load
        class gear_saveLoadout {};
        class gear_loadLoadout {};
        class gear_removeLoadout {};
        class gear_hasSavedLoadout {};

        // other
        class gear_getLoadoutRole {};
        class gear_getLoadoutName {};
    };
    class diag {
        file = "Scripts\functions\diag";
        class error {};
        class info {};
        class log {};
        class warning {};
    };
    class testing {
        file = "Scripts\functions\testing";
        class testing_loadoutArrays {};
        class testing_equipmentUsed {};
    };
    class role {
        file = "Scripts\functions\role";
        class role_drongo {};
        class role_fix {};
        class role_com {};
        class role_eng {};
        class role_med {};
        class role_wep {};
        class role_pick {};
        class role_give {};
        class role_reset {};
    };
};


