class CfgPatches {
    class rpgCUP_jw {
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.00;
        requiredAddons[] = {
            "CUP_Weapons_RPG7",
            "CUP_Weapons_Ammunition"
        };
        version = "1.0";
        versionStr = "1.0";
        author = "JWebmeister";
        authorUrl = "http://steamcommunity.com/id/jwebmeister/myworkshopfiles/";
    };
};

class Mode_SemiAuto;

class CfgWeapons {
    class Launcher_Base_F;
    class CUP_launch_RPG7V : Launcher_Base_F 
    {
        class Single : Mode_SemiAuto 
        {
            aiRateOfFire = 7;
            aiRateOfFireDistance = 250;
            aiRateOfFireDispersion = 7;
            minRange = 5; 
            minRangeProbab = 0.56;
            midRange = 250;
            midRangeProbab = 0.9;
            maxRange = 400;
            maxRangeProbab = 0.4;
        };
    };
};

class CfgAmmo {
    class RocketBase;
    class CUP_R_OG7_AT : RocketBase 
    {
        aiAmmoUsageFlags = "64 + 128 + 256 + 512";
        airLock = 1; 
        allowAgainstInfantry = 1;
        cost = 30;
    };
    class CUP_R_PG7V_AT : RocketBase 
    {
        aiAmmoUsageFlags = "64 + 128 + 256 + 512";
        airLock = 1; 
        allowAgainstInfantry = 1;
        cost = 30;
    };
    class CUP_R_PG7VL_AT : RocketBase 
    {
        aiAmmoUsageFlags = "64 + 128 + 256 + 512";
        airLock = 1; 
        allowAgainstInfantry = 1;
        cost = 30;
    };
    class CUP_R_PG7VM_AT : RocketBase 
    {
        aiAmmoUsageFlags = "64 + 128 + 256 + 512";
        airLock = 1; 
        allowAgainstInfantry = 1;
        cost = 30;
    };
    class CUP_R_PG7VR_AT : RocketBase 
    {
        aiAmmoUsageFlags = "64 + 128 + 256 + 512";
        airLock = 1; 
        allowAgainstInfantry = 1;
        cost = 30;
    };
    class CUP_R_TBG7V_AT : RocketBase 
    {
        aiAmmoUsageFlags = "64 + 128 + 256 + 512";
        airLock = 1; 
        allowAgainstInfantry = 1;
        cost = 30;
    };
};
