class XtdGearModels {
    class CfgWeapons {
        class aegisivas {
            options[] = {"color"};
            label = "IVAS";
            class color {
                values[] = { "grn", "blk", "tan" };
                label = "Color";
                class grn {
                  label = "Green";
                  image = "z\aceax\addons\gearinfo\data\camo\rgr.paa";
                };
                class tan {
                  label = "Tan";
                  image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class blk {
                    label = "Black";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
            };
        };
    };
};

class XtdGearInfos {
    class CfgWeapons {
        class Aegis_NVG_IVAS_01_blk_F {
            model = "aegisivas";
            color = "blk";
        };
        class Aegis_NVG_IVAS_01_grn_F {
            model = "aegisivas";
            color = "grn";
        };
        class Aegis_NVG_IVAS01_tan_F {
            model = "aegis_ivas";
            color = "tan";
        };
    };
};
