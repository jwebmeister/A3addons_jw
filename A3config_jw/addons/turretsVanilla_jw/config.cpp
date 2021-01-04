class CfgPatches {
    class turretsVanilla_jw {
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.00;
        requiredAddons[] = {
            "A3_Weapons_F",
            "A3_Weapons_F_Exp",
            "A3_Weapons_F_Tank"
        };
        version = "1.0";
        versionStr = "1.0";
        author = "JWebmeister";
        authorUrl = "http://steamcommunity.com/id/jwebmeister/myworkshopfiles/";
    };
};

class CfgBrains {
    class DefaultSoldierBrain {
        class Components {
            class AIBrainAimingErrorComponent {
                maxAngularErrorTurrets = 0.15;
            };
        };
    };
};

class CfgWeapons {
    class MGun;
    class LMG_RCWS : MGun {
        aiDispersionCoefX = 5;
        aiDispersionCoefY = 4;
        class manual : MGun {};
        class close : manual {
            aiBurstTerminable = 0;
            aiDispersionCoefX = 6.0;
            aiDispersionCoefY = 7.0;
        };
        class short : close {
            aiBurstTerminable = 0;
        };
        class medium : close {
            aiBurstTerminable = 0;
        };
        class far : close {
            aiBurstTerminable = 0;
        };
    };
    class HMG_127 : LMG_RCWS {
        class manual : MGun {};
        class close : manual {
            aiBurstTerminable = 0;
            aiDispersionCoefX = 6.0;
            aiDispersionCoefY = 7.0;
        };
        class short : close {
            aiBurstTerminable = 0;
        };      
        class medium : close {
            aiBurstTerminable = 0;
        }; 
        class far : close {
            aiBurstTerminable = 0;
        };
    };
    class LMG_coax : LMG_RCWS {
        class manual : MGun {};
        class close : manual {
            aiBurstTerminable = 0;
            aiDispersionCoefX = 6.0;
            aiDispersionCoefY = 7.0;
        };
        class short : close {
            aiBurstTerminable = 0;
        };     
        class medium : close {
            aiBurstTerminable = 0;
        }; 
        class far : close {
            aiBurstTerminable = 0;
        };
    };
    class cannonCore;
    class autocannon_Base_F: CannonCore {
        aiDispersionCoefX = 6;
        aiDispersionCoefY = 5;
    };
};
