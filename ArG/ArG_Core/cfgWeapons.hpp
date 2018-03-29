class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{



    ///MX///
    class arifle_MX_F;
        
    class ArG_MX_F: arifle_MX_F
    {
        author="Rodeostar42";
       
        scope=2;
        displayName="ArG MX";
        model = "\A3\Weapons_F\Rifles\MX\MX_F.p3d";
        baseWeapon="ArG_MX_F";
        picture = "\A3\weapons_F\Rifles\MX\data\UI\gear_mx_rifle_X_CA.paa";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        descriptionShort = "Replace MX Rifle to Airsoft Gun";
        magazines[] = {
            
            "ArG_30Rnd_65x39_BB"
        };

        initSpeed = 250; // muzzle velocity
        maxRange = 100;
        flash = "";
        flashSize = 0;
        fireLightIntensity=0;
        reloadAction="GestureReloadMX";
        recoil="EGRecoil";
        maxZeroing=200;
        discreteDistanceInitIndex=0;
        maxRecoilSway=0.0125;
        swayDecaySpeed=1.25;
        soundBullet[]={"emptySound",1};
        muzzleEnd="zaslehPoint";
        alternativeFire="Zasleh2";
        



        modes[]=
        {
            "Single",
            "FullAuto",
            "fullauto_medium",
            "single_medium_optics1",
            "single_far_optics2"
        };
        class Single: Mode_SemiAuto
        {
            reloadTime=0.096000001;
            recoil="EGRecoil";
            recoilProne="EGRecoil";
            flash = "";
            flashSize = 0;
            fireLightIntensity=0;
            dispersion=0.00086999999;
            minRange=2;
            minRangeProbab=0.5;
            midRange=200;
            midRangeProbab=0.69999999;
            maxRange=400;
            maxRangeProbab=0.30000001;
            drySound[] = {"ArG_Core\Sound\den_tan01.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_Core\Sound\den_tan01.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_Core\Sound\den_tan01.wss",3, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };    
        };
        class FullAuto: Mode_FullAuto
        {
            reloadTime=0.096000001;
            dispersion=0.00086999999;
            recoil="EGRecoil";
            recoilProne="EGRecoil";
            flash = "";
            flashSize = 0;
            fireLightIntensity=0;
            minRange=0;
            minRangeProbab=0.89999998;
            midRange=15;
            midRangeProbab=0.69999999;
            maxRange=30;
            maxRangeProbab=0.1;
            aiRateOfFire=1e-006;
            drySound[] = {"ArG_Core\Sound\den_tan01.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_Core\Sound\den_tan01.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_Core\Sound\den_tan01.wss",3, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };    
        };
        class fullauto_medium: FullAuto
        {
            showToPlayer=0;
            burst=3;
            aiBurstTerminable=1;
            minRange=2;
            minRangeProbab=0.5;
            midRange=75;
            midRangeProbab=0.69999999;
            maxRange=150;
            maxRangeProbab=0.050000001;
            aiRateOfFire=2;
            aiRateOfFireDistance=200;
            flash = "";
            flashSize = 0;
            fireLightIntensity=0;
            drySound[] = {"ArG_Core\Sound\den_tan01.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_Core\Sound\den_tan01.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_Core\Sound\den_tan01.wss",3, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };    
        };
        class single_medium_optics1: Single
        {
            requiredOpticType=1;
            showToPlayer=0;
            minRange=2;
            minRangeProbab=0.2;
            midRange=450;
            midRangeProbab=0.69999999;
            maxRange=600;
            maxRangeProbab=0.2;
            aiRateOfFire=6;
            aiRateOfFireDistance=600;
            flash = "";
            flashSize = 0;
            fireLightIntensity=0;
            drySound[] = {"ArG_Core\Sound\den_tan01.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_Core\Sound\den_tan01.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_Core\Sound\den_tan01.wss",3, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };    
        };
        class single_far_optics2: single_medium_optics1
        {
            requiredOpticType=2;
            showToPlayer=0;
            minRange=100;
            minRangeProbab=0.1;
            midRange=500;
            midRangeProbab=0.60000002;
            maxRange=700;
            maxRangeProbab=0.050000001;
            aiRateOfFire=8;
            aiRateOfFireDistance=700;
            flash = "";
            flashSize = 0;
            fireLightIntensity=0;
            drySound[] = {"ArG_Core\Sound\den_tan01.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_Core\Sound\den_tan01.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_Core\Sound\den_tan01.wss",3, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };    
        };      
    };


    class InventoryMuzzleItem_Base_F;
    class ArG_Disable_muzzleFlash: ItemCore
    {
        author="$STR_A3_Bohemia_Interactive";
        _generalMacro="muzzle_snds_H";
        htMin=1;
        htMax=600;
        afMax=0;
        mfMax=0;
        mFact=1;
        tBody=100;
        scope=2;
        displayName="ArG Disable muzzleFlash";
        picture="\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
        model="\A3\weapons_f\acc\acca_snds_h_F";
        class ItemInfo: InventoryMuzzleItem_Base_F
        {
            mass=10;
            class MagazineCoef
            {
                initSpeed=1.05;
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.30000001;
                audibleFire=0.039999999;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            soundTypeIndex=1;
            muzzleEnd="zaslehPoint";
            alternativeFire="Zasleh2";
            class MuzzleCoef
            {
                dispersionCoef="0.8f";
                artilleryDispersionCoef="1.0f";
                fireLightCoef="0.1f";
                recoilCoef="1.0f";
                recoilProneCoef="1.0f";
                minRangeCoef="1.0f";
                minRangeProbabCoef="1.0f";
                midRangeCoef="1.0f";
                midRangeProbabCoef="1.0f";
                maxRangeCoef="1.0f";
                maxRangeProbabCoef="1.0f";
            };
        };
        inertia=0.2;
    }; 

};
      
    
    
    