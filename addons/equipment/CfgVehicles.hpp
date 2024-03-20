class CBA_Extended_EventHandlers_base;
class CfgVehicles {
    //fpgp
    class B_AssaultPack_rgr;
    class FPGP_Hydration1_Tan_1_Backpanel: B_AssaultPack_rgr {
        maximumLoad = 180;
    };
    class FPGP_Hydration2_Tan_1_Backpanel: B_AssaultPack_rgr {
        maximumLoad = 180;
    };
    // Box
    class NATO_Box_Base;
    class GVAR(arsenal): NATO_Box_Base {
        scope = 2;
        scopeCurator = 2;
        author = QAUTHOR;
        displayName = "[GHOST] Arsenal";
        model="A3\Weapons_F\Ammoboxes\AmmoVeh_F";
        icon="iconCrateVeh";
        ace_cargo_canLoad = 0;  // Enables the object to be loaded (1-yes, 0-no)
        ace_cargo_noRename = 1;  // Blocks renaming object (1-blocked, 0-allowed)
        ace_cargo_blockUnloadCarry = 1; // Blocks object from being automatically picked up by player on unload
        ace_dragging_canDrag = 0;
        ace_dragging_canCarry = 0;
        slingLoadCargoMemoryPoints[]= {
            "SlingLoadCargo1",
            "SlingLoadCargo2",
            "SlingLoadCargo3",
            "SlingLoadCargo4"
        };
        editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_AmmoVeh_F.jpg";
        _generalMacro="Box_NATO_AmmoVeh_F";
        hiddenSelectionsTextures[]= {
            "z\ghostf\addons\Equipment\data\ammobox_signs_caA.paa",
            "z\ghostf\addons\Equipment\data\ammo_ghostf_co.paa"
        };
        class TransportMagazines {
        };
        class TransportWeapons {
        };
        class TransportItems {
        };
        transportAmmo=30000;
        supplyRadius=10;
    };
    class GVAR(arsenalW): NATO_Box_Base {
        scope = 2;
        scopeCurator = 2;
        author = QAUTHOR;
        displayName = "[GHOST] Arsenal Winter";
        model="A3\Weapons_F\Ammoboxes\AmmoVeh_F";
        icon="iconCrateVeh";
        ace_cargo_canLoad = 0;  // Enables the object to be loaded (1-yes, 0-no)
        ace_cargo_noRename = 1;  // Blocks renaming object (1-blocked, 0-allowed)
        ace_cargo_blockUnloadCarry = 1; // Blocks object from being automatically picked up by player on unload
        ace_dragging_canDrag = 0;
        ace_dragging_canCarry = 0;
        slingLoadCargoMemoryPoints[]= {
            "SlingLoadCargo1",
            "SlingLoadCargo2",
            "SlingLoadCargo3",
            "SlingLoadCargo4"
        };
        editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_AmmoVeh_F.jpg";
        _generalMacro="Box_NATO_AmmoVeh_F";
        hiddenSelectionsTextures[]= {
            "z\ghostf\addons\Equipment\data\ammobox_signs_caA.paa",
            "z\ghostf\addons\Equipment\data\ammo_ghostf_W_co.paa"
        };
        class TransportMagazines {
        };
        class TransportWeapons {
        };
        class TransportItems {
        };
        transportAmmo=30000;
        supplyRadius=10;
    };
    class GVAR(arsenalD): NATO_Box_Base {
        scope = 2;
        scopeCurator = 2;
        author = QAUTHOR;
        displayName = "[GHOST] Arsenal Desert";
        model="A3\Weapons_F\Ammoboxes\AmmoVeh_F";
        icon="iconCrateVeh";
        ace_cargo_canLoad = 0;  // Enables the object to be loaded (1-yes, 0-no)
        ace_cargo_noRename = 1;  // Blocks renaming object (1-blocked, 0-allowed)
        ace_cargo_blockUnloadCarry = 1; // Blocks object from being automatically picked up by player on unload
        ace_dragging_canDrag = 0;
        ace_dragging_canCarry = 0;
        slingLoadCargoMemoryPoints[]= {
            "SlingLoadCargo1",
            "SlingLoadCargo2",
            "SlingLoadCargo3",
            "SlingLoadCargo4"
        };
        editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_AmmoVeh_F.jpg";
        _generalMacro="Box_NATO_AmmoVeh_F";
        hiddenSelectionsTextures[]= {
            "z\ghostf\addons\Equipment\data\ammobox_signs_caA.paa",
            "z\ghostf\addons\Equipment\data\ammoghostf_D_co.paa"
        };
        class TransportMagazines {
        };
        class TransportWeapons {
        };
        class TransportItems {
        };
        transportAmmo=30000;
        supplyRadius=10;
    };
    class GVAR(arsenalT): NATO_Box_Base {
        scope = 2;
        scopeCurator = 2;
        author = QAUTHOR;
        displayName = "[GHOST] Arsenal Tropical";
        model="A3\Weapons_F\Ammoboxes\AmmoVeh_F";
        icon="iconCrateVeh";
        ace_cargo_canLoad = 0;  // Enables the object to be loaded (1-yes, 0-no)
        ace_cargo_noRename = 1;  // Blocks renaming object (1-blocked, 0-allowed)
        ace_cargo_blockUnloadCarry = 1; // Blocks object from being automatically picked up by player on unload
        ace_dragging_canDrag = 0;
        ace_dragging_canCarry = 0;
        slingLoadCargoMemoryPoints[]= {
            "SlingLoadCargo1",
            "SlingLoadCargo2",
            "SlingLoadCargo3",
            "SlingLoadCargo4"
        };
        editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_AmmoVeh_F.jpg";
        _generalMacro="Box_NATO_AmmoVeh_F";
        hiddenSelectionsTextures[]= {
            "z\ghostf\addons\Equipment\data\ammobox_signs_caA.paa",
            "z\ghostf\addons\Equipment\data\ammoghostf_T_co.paa"
        };
        class TransportMagazines {
        };
        class TransportWeapons {
        };
        class TransportItems {
        };
        transportAmmo=30000;
        supplyRadius=10;
    };
    class GVAR(arsenalC): NATO_Box_Base {
        scope = 2;
        scopeCurator = 2;
        author = QAUTHOR;
        displayName = "[GHOST] Arsenal Civllian";
        model="A3\Weapons_F\Ammoboxes\AmmoVeh_F";
        icon="iconCrateVeh";
        ace_cargo_canLoad = 0;  // Enables the object to be loaded (1-yes, 0-no)
        ace_cargo_noRename = 1;  // Blocks renaming object (1-blocked, 0-allowed)
        ace_cargo_blockUnloadCarry = 1; // Blocks object from being automatically picked up by player on unload
        ace_dragging_canDrag = 0;
        ace_dragging_canCarry = 0;
        slingLoadCargoMemoryPoints[]= {
            "SlingLoadCargo1",
            "SlingLoadCargo2",
            "SlingLoadCargo3",
            "SlingLoadCargo4"
        };
        editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_AmmoVeh_F.jpg";
        _generalMacro="Box_NATO_AmmoVeh_F";
        hiddenSelectionsTextures[]= {
            "z\ghostf\addons\Equipment\data\ammobox_signs_caA.paa",
            "z\ghostf\addons\Equipment\data\ammoghostf_co_c_.paa"
        };
        class TransportMagazines {
        };
        class TransportWeapons {
        };
        class TransportItems {
        };
        transportAmmo=30000;
        supplyRadius=10;
    };
    class GVAR(resupply): NATO_Box_Base {
        scope = 2;
        scopeCurator = 2;
        author = QAUTHOR;
        displayName = "[GHOST] Arsenal Resupply";
        model="A3\Weapons_F\Ammoboxes\AmmoVeh_F";
        icon="iconCrateVeh";
        ace_cargo_noRename = 1;  // Blocks renaming object (1-blocked, 0-allowed)
        ace_dragging_canDrag = 0;
        ace_dragging_canCarry = 0;
        slingLoadCargoMemoryPoints[]= {
            "SlingLoadCargo1",
            "SlingLoadCargo2",
            "SlingLoadCargo3",
            "SlingLoadCargo4"
        };
        editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_AmmoVeh_F.jpg";
        _generalMacro="Box_NATO_AmmoVeh_F";
        hiddenSelectionsTextures[]= {
            "z\ghostf\addons\Equipment\data\ammobox_signs_caA.paa",
            "z\ghostf\addons\Equipment\data\resupplyghost.paa"
        };
        class TransportMagazines {
        };
        class TransportWeapons {
        };
        class TransportItems {
        };
        transportAmmo=30000;
        supplyRadius=10;
    };

        // Rebreather
    class Vest_V_RebreatherB;
    class GVAR(Item_vest_rebreather): Vest_V_RebreatherB {
        scope = 2;
        scopeCurator = 2;
        author = QAUTHOR;
        displayName = "[GHOST] Rebreather";
        class TransportItems {
            class GVAR(rebreather) {
                name = QGVAR(rebreather);
                count = 1;
            };
        };
    };
    class Item_U_B_Wetsuit;
    class GVAR(Item_Wetsuit): Item_U_B_Wetsuit {
        author = QAUTHOR;
        displayName = "[GHOST] Wetsuit";
        class TransportItems {
            class GVAR(Wetsuit) {
                name = QGVAR(Wetsuit);
                count = 1;
            };
        };
    };
    class ACE_Item_Vector;
    class GVAR(Item_Vector_Designator): ACE_Item_Vector {
        author = "NemessisRE";
        displayName = "[GHOST] ACE Vector Designator (NVG/TI)";
        class TransportItems {
            class GVAR(Vector_Designator) {
                name=QGVAR(Vector_Designator);
                count=1;
            };
        };
    };
    class GVAR(Item_Vector_Designator_NVG): GVAR(Item_Vector_Designator) {
        displayName = "[GHOST] ACE Vector Designator (NVG)";
        class TransportItems {
            class GVAR(Vector_Designator) {
                name=QGVAR(Vector_Designator);
                count=1;
            };
        };
    };
    class Item_optic_Nightstalker;
    class GVAR(Item_optic_Nightstalker): Item_optic_Nightstalker {
        displayName="[GHOST] Nightstalker";
        author="NemesisRE";
        vehicleClass="WeaponAccessories";
        class TransportItems {
            class GVAR(optic_Nightstalker) {
                name=QGVAR(optic_Nightstalker);
                count=1;
            };
        };
    };
    class Item_optic_AMS;
    class GVAR(Item_optic_AMS): Item_optic_AMS {
        displayName="[GHOST] AMS (Black)";
        author="NemesisRE";
        class TransportItems {
            class GVAR(optic_AMS) {
                name=QGVAR(optic_AMS);
                count=1;
            };
        };
    };
    class GVAR(Item_optic_AMS_khk): GVAR(Item_optic_AMS) {
        displayName="[GHOST] AMS (Khaki)";
        class TransportItems {
            class GVAR(optic_AMS_khk) {
                name=QGVAR(optic_AMS_khk);
                count=1;
            };
        };
    };
    class GVAR(Item_optic_AMS_snd): GVAR(Item_optic_AMS) {
        displayName="[GHOST] AMS (Sand)";
        class TransportItems {
            class GVAR(optic_AMS_snd) {
                name=QGVAR(optic_AMS_snd);
                count=1;
            };
        };
    };
    class GVAR(Item_optic_AMSTI): Item_optic_AMS {
        displayName="[GHOST] AMS-TI (Black)";
        author="NemesisRE";
        class TransportItems {
            class GVAR(optic_AMS) {
                name=QGVAR(optic_AMS);
                count=1;
            };
        };
    };
    class GVAR(Item_optic_AMSTI_khk): GVAR(Item_optic_AMSTI) {
        displayName="[GHOST] AMS-TI (Khaki)";
        class TransportItems {
            class GVAR(optic_AMS_khk) {
                name=QGVAR(optic_AMS_khk) ;
                count=1;
            };
        };
    };
    class GVAR(Item_optic_AMSTI_snd): GVAR(Item_optic_AMSTI) {
        displayName="[GHOST] AMS-TI (Sand)";
        class TransportItems {
            class GVAR(optic_AMS_snd) {
                name=QGVAR(optic_AMS_snd);
                count=1;
            };
        };
    };
    class Box_NATO_Support_F;
    class ACE_Box_Misc: Box_NATO_Support_F {
        class TransportItems {
            class GVAR(Vector_Designator) {
                name=QGVAR(Vector_Designator);
                count=3;
            };
        };
    };
};
