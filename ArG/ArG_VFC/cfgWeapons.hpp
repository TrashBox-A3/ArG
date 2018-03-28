class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{


    ///VFC HK416A5 GBB BLK///
    class arifle_SPAR_01_blk_F;
        
    class ArG_VFC_HK416A5_GBB_BLK: arifle_SPAR_01_blk_F
    {
        author="Rodeostar42";
       
        scope=2;
        displayName="VFC HK416A5 GBB (BLK)";
        model = "\A3\Weapons_F_Exp\Rifles\SPAR_01\SPAR_01_F.p3d";
        baseWeapon="ArG_VFC_HK416A5_GBB_BLK";
        picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_blk_F_X_CA.paa";
        uiPicture = "";
        descriptionShort = "VFC HK416A5 GBB (BLK)<br/>VFC";
        magazines[] = {
            
            "VFC_30Rnd_556x45_M4_HK416_GBB"
        };

        initSpeed = 250; // muzzle velocity
        maxRange = 100;
        flash = "";
        flashSize = 0;
        fireLightIntensity=0;
        reloadAction="GestureReloadMX";
        recoil="GBRecoil";
        maxZeroing=200;
        discreteDistanceInitIndex=0;
        maxRecoilSway=0.0125;
        swayDecaySpeed=1.25;
        soundBullet[]={"emptySound",1};
        



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
            recoil="GBRecoil";
            recoilProne="GBRecoil";
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
            drySound[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",3, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };    
        };
        class FullAuto: Mode_FullAuto
        {
            reloadTime=0.096000001;
            dispersion=0.00086999999;
            recoil="GBRecoil";
            recoilProne="GBRecoil";
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
            drySound[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",3, 1,15};
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
            drySound[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",3, 1,15};
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
            drySound[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",3, 1,15};
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
            drySound[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",3, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };    
        };
        
        
        
      }; 



      ///VFC HK416A5 GBB SAND///
    class arifle_SPAR_01_snd_F;
        
    class ArG_VFC_HK416A5_GBB_SND: arifle_SPAR_01_snd_F
    {
        author="Rodeostar42";
       
        scope=2;
        displayName="VFC HK416A5 GBB (SAND)";
        model = "\A3\Weapons_F_Exp\Rifles\SPAR_01\SPAR_01_F.p3d";
        baseWeapon="ArG_VFC_HK416A5_GBB_SND";
        picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_snd_F_X_CA.paa";
        uiPicture = "";
        descriptionShort = "VFC HK416A5 GBB (SAND)<br/>VFC";
        magazines[] = {
            
            "VFC_30Rnd_556x45_M4_HK416_GBB"
        };

        initSpeed = 250; // muzzle velocity
        maxRange = 100;
        flash = "";
        flashSize = 0;
        fireLightIntensity=0;
        reloadAction="GestureReloadMX";
        recoil="GBRecoil";
        maxZeroing=200;
        discreteDistanceInitIndex=0;
        maxRecoilSway=0.0125;
        swayDecaySpeed=1.25;
        soundBullet[]={"emptySound",1};
        



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
            recoil="GBRecoil";
            recoilProne="GBRecoil";
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
            drySound[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",3, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };    
        };
        class FullAuto: Mode_FullAuto
        {
            reloadTime=0.096000001;
            dispersion=0.00086999999;
            recoil="GBRecoil";
            recoilProne="GBRecoil";
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
            drySound[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",3, 1,15};
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
            drySound[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",3, 1,15};
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
            drySound[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",3, 1,15};
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
            drySound[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",3, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };    
        };
        
        
        
      }; 
    
  };  
    