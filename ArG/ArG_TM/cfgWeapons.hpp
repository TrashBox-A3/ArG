class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SAFE_PISTOL;
class CfgWeapons
{


    #include "UKP_Weapons.hpp"



    ///HK416D DEVGRU Castom///
    class rhs_weap_hk416d10;

    class ArG_TM_HK416_DEV: rhs_weap_hk416d10
    {
        author="Rodeostar42";

        scope=2;
        displayName="TM HK416D DEVGRU Castom";
        model = "\rhsusf\addons\rhsusf_weapons2\HK416\rhs_hk416d10.p3d";
        baseWeapon="ArG_TM_HK416_DEV";
        picture = "\rhsusf\addons\rhsusf_weapons2\icons\rhs_hk416d10_icon_ca.paa";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        descriptionShort = "HK416D DEVGRU Castom<br/>Tokyo MARUI";
        magazines[] = {

            "ArG_520Rnd_556x45_BB",
            "ArG_82Rnd_556x45_BB"
        };

        initSpeed = 250; // muzzle velocity
        maxRange = 100;
        flash = "";
        flashSize = 0;
        fireLightIntensity=0;
        reloadAction="GestureReloadMX";
        recoil="NextEGRecoil";
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
            drySound[] = {"ArG_TM\Sound\M4_SOPMOD.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_TM\Sound\M4_SOPMOD.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_TM\Sound\M4_SOPMOD.wss",3, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
        };
        class FullAuto: Mode_FullAuto
        {
            reloadTime=0.096000001;
            dispersion=0.00086999999;

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
            drySound[] = {"ArG_TM\Sound\M4_SOPMOD.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_TM\Sound\M4_SOPMOD.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_TM\Sound\M4_SOPMOD.wss",3, 1,15};
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
            drySound[] = {"ArG_TM\Sound\M4_SOPMOD.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_TM\Sound\M4_SOPMOD.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_TM\Sound\M4_SOPMOD.wss",3, 1,15};
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
            drySound[] = {"ArG_TM\Sound\M4_SOPMOD.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_TM\Sound\M4_SOPMOD.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_TM\Sound\M4_SOPMOD.wss",3, 1,15};
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
            drySound[] = {"ArG_TM\Sound\M4_SOPMOD.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_TM\Sound\M4_SOPMOD.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_TM\Sound\M4_SOPMOD.wss",3, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
        };



      };


      ///SCAR L (FDE)///
    class SMA_MK16;

    class ArG_TM_SCAR_L_TAN: SMA_MK16
    {
        author="Rodeostar42";

        scope=2;
        displayName="TM SCAR-L(DFE)";
        model = "\Scar_Arma3\mk16.p3d";
        baseWeapon="ArG_TM_SCAR_L_TAN";
        picture = "\Scar_Arma3\Data\Icon\SMAMK16_ca.paa";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        descriptionShort = "SCAR-L(DFE)<br/>Tokyo MARUI";
        magazines[] = {

            "ArG_520Rnd_556x45_BB",
            "ArG_82Rnd_556x45_BB"
        };

        initSpeed = 250; // muzzle velocity
        maxRange = 100;
        flash = "";
        flashSize = 0;
        fireLightIntensity=0;
        reloadAction="GestureReloadMX";
        recoil="NextEGRecoil";
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
            drySound[] = {"ArG_TM\Sound\SCAR_H.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_TM\Sound\SCAR_H.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_TM\Sound\SCAR_H.wss",3, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
        };
        class FullAuto: Mode_FullAuto
        {
            reloadTime=0.096000001;
            dispersion=0.00086999999;

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
            drySound[] = {"ArG_TM\Sound\SCAR_H.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_TM\Sound\SCAR_H.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_TM\Sound\SCAR_H.wss",3, 1,15};
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
            drySound[] = {"ArG_TM\Sound\SCAR_H.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_TM\Sound\SCAR_H.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_TM\Sound\SCAR_H.wss",3, 1,15};
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
            drySound[] = {"ArG_TM\Sound\SCAR_H.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_TM\Sound\SCAR_H.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_TM\Sound\SCAR_H.wss",3, 1,15};
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
            drySound[] = {"ArG_TM\Sound\SCAR_H.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_TM\Sound\SCAR_H.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_TM\Sound\SCAR_H.wss",3, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
        };



      };


      ///SCAR H (FDE)///
    class SMA_Mk17_16;

    class ArG_TM_SCAR_H_TAN: SMA_Mk17_16
    {
        author="Rodeostar42";

        scope=2;
        displayName="TM SCAR-H(DFE)";
        model = "\Scar_Arma3\mk1716.p3d";
        baseWeapon="ArG_TM_SCAR_H_TAN";
        picture = "\Scar_Arma3\Data\Icon\SMAMk1716_ca.paa";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        descriptionShort = "SCAR-H(DFE)<br/>Tokyo MARUI";
        magazines[] = {

            "ArG_90Rnd_762x51_BB",
            "ArG_540Rnd_762x51_BB"
        };

        initSpeed = 250; // muzzle velocity
        maxRange = 100;
        flash = "gunfire";
        flashSize = 0;
        fireLightIntensity=0;
        reloadAction="GestureReloadMX";
        recoil="NextEGRecoil";
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
            drySound[] = {"ArG_TM\Sound\SCAR_H.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_TM\Sound\SCAR_H.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_TM\Sound\SCAR_H.wss",3, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
        };
        class FullAuto: Mode_FullAuto
        {
            reloadTime=0.096000001;
            dispersion=0.00086999999;

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
            drySound[] = {"ArG_TM\Sound\SCAR_H.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_TM\Sound\SCAR_H.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_TM\Sound\SCAR_H.wss",3, 1,15};
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
            drySound[] = {"ArG_TM\Sound\SCAR_H.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_TM\Sound\SCAR_H.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_TM\Sound\SCAR_H.wss",3, 1,15};
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
            drySound[] = {"ArG_TM\Sound\SCAR_H.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_TM\Sound\SCAR_H.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_TM\Sound\SCAR_H.wss",3, 1,15};
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
            drySound[] = {"ArG_TM\Sound\SCAR_H.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_TM\Sound\SCAR_H.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_TM\Sound\SCAR_H.wss",3, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
        };



      };

      ///M4A1///
    class rhs_weap_m4a1_carryhandle;

    class ArG_TM_M4A1: rhs_weap_m4a1_carryhandle
    {
        author="Rodeostar42";

        scope=2;
        displayName="TM M4A1(Next Generation)";
        model = "\rhsusf\addons\rhsusf_weapons\M4\m4_ris_carryhandle.p3d";
        baseWeapon="ArG_TM_M4A1";
        picture = "\rhsusf\addons\rhsusf_weapons\icons\w_m4ris_ca.paa";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        descriptionShort = "M4A1(NG)<br/>Tokyo MARUI";
        magazines[] = {

            "ArG_520Rnd_556x45_BB",
            "ArG_82Rnd_556x45_BB"
        };

        initSpeed = 250; // muzzle velocity
        maxRange = 100;
        flash = "";
        flashSize = 0;
        fireLightIntensity=0;
        reloadAction="GestureReloadMX";
        recoil="NextEGRecoil";
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
            drySound[] = {"ArG_TM\Sound\M4_SOPMOD.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_TM\Sound\M4_SOPMOD.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_TM\Sound\M4_SOPMOD.wss",3, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
        };
        class FullAuto: Mode_FullAuto
        {
            reloadTime=0.096000001;
            dispersion=0.00086999999;

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
            drySound[] = {"ArG_TM\Sound\M4_SOPMOD.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_TM\Sound\M4_SOPMOD.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_TM\Sound\M4_SOPMOD.wss",3, 1,15};
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
            drySound[] = {"ArG_TM\Sound\M4_SOPMOD.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_TM\Sound\M4_SOPMOD.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_TM\Sound\M4_SOPMOD.wss",3, 1,15};
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
            drySound[] = {"ArG_TM\Sound\M4_SOPMOD.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_TM\Sound\M4_SOPMOD.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_TM\Sound\M4_SOPMOD.wss",3, 1,15};
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
            drySound[] = {"ArG_TM\Sound\M4_SOPMOD.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_TM\Sound\M4_SOPMOD.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_TM\Sound\M4_SOPMOD.wss",3, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
        };



      };

      ///M4 MWS///

    class rhs_weap_m4a1_blockII_KAC_bk;
    class ArG_TM_M4A1_NWS: rhs_weap_m4a1_blockII_KAC_bk
    {
        author="Rodeostar42";

        scope=2;
        displayName="TM M4A1 MWS";
        model = "\rhsusf\addons\rhsusf_weapons3\M4BII\m4a1_blockII_KACSTOCK.p3d";
        baseWeapon="ArG_TM_M4A1_NWS";
        picture = "\rhsusf\addons\rhsusf_weapons3\icons\rhs_m4bii_lmt_b_icon_ca.paa";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        descriptionShort = "GBB<br/>Tokyo MARUI";
        magazines[] = {

            "ArG_35Rnd_556x45_NWS"
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
            drySound[] = {"ArG_TM\Sound\M4A1_MWS.wss",5, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_TM\Sound\M4A1_MWS.wss",5, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_TM\Sound\M4A1_MWS.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
        };
        class FullAuto: Mode_FullAuto
        {
            reloadTime=0.096000001;
            dispersion=0.00086999999;

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
            drySound[] = {"ArG_TM\Sound\M4A1_MWS.wss",5, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_TM\Sound\M4A1_MWS.wss",5, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_TM\Sound\M4A1_MWS.wss",4, 1,15};
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
            drySound[] = {"ArG_TM\Sound\M4A1_MWS.wss",5, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_TM\Sound\M4A1_MWS.wss",5, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_TM\Sound\M4A1_MWS.wss",4, 1,15};
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
            drySound[] = {"ArG_TM\Sound\M4A1_MWS.wss",5, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_TM\Sound\M4A1_MWS.wss",5, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_TM\Sound\M4A1_MWS.wss",4, 1,15};
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
            drySound[] = {"ArG_TM\Sound\M4A1_MWS.wss",5, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_TM\Sound\M4A1_MWS.wss",5, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_TM\Sound\M4A1_MWS.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
        };



      };

      ///Glock 17///

    class rhsusf_weap_glock17g4;
    class ArG_TM_Glock17: rhsusf_weap_glock17g4
    {
        author="Rodeostar42";

        scope=2;
        displayName="TM Glock 17";
        model = "\rhsusf\addons\rhsusf_weapons2\glock17g4\rhs_glock17g4";
        baseWeapon="ArG_TM_Glock17";
        picture = "\rhsusf\addons\rhsusf_weapons2\glock17g4\data\rhs_p_glock17g4_ca.paa";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        descriptionShort = "GBB<br/>Tokyo MARUI";
        magazines[] = {

            "ArG_25Rnd_9mm"
        };

        initSpeed = 220; // muzzle velocity
        maxRange = 60;
        flash = "";
        flashSize = 0;
        fireLightIntensity=0;
        recoil="HGRecoil";
        maxZeroing=200;
        discreteDistanceInitIndex=0;
        maxRecoilSway=0.0125;
        swayDecaySpeed=1.25;
        soundBullet[]={"emptySound",1};
        reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07",1,1,10};




        modes[]=
        {
            "Single"
        };
        class Single: Mode_SemiAuto
        {
            reloadTime=0.096000001;

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
            drySound[] = {"ArG_TM\Sound\Marui_Glock17gen3.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_TM\Sound\Marui_Glock17gen3.wss",4, 1,15};
            soundBegin[] = {"begin1",1};

        };
            class SilencedSound
        {
            begin1[] = {"ArG_TM\Sound\Marui_Glock17gen3.wss",3, 1,15};
            soundBegin[] = {"begin1",1};

        };
        };




      };

      ///P226R///

    class hlc_pistol_P226R;
    class ArG_TM_P226R: hlc_pistol_P226R
    {
        author="Rodeostar42";

        scope=2;
        displayName="TM P226R";
        model = "\hlc_wp_p226\mesh\wpn\226_9\226R.p3d";
        baseWeapon="ArG_TM_P226R";
        picture = "\hlc_wp_p226\tex\ui\gear_226R_ca";
        UiPicture = "";
        descriptionShort = "GBB<br/>Tokyo MARUI";
        magazines[] = {

            "ArG_25Rnd_9mm"
        };

        initSpeed = 220; // muzzle velocity
        maxRange = 60;
        flash = "";
        flashSize = 0;
        fireLightIntensity=0;
        recoil="HGRecoil";
        maxZeroing=200;
        discreteDistanceInitIndex=0;
        maxRecoilSway=0.0125;
        swayDecaySpeed=1.25;
        soundBullet[]={"emptySound",1};
        reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07",1,1,10};




        modes[]=
        {
            "Single"
        };
        class Single: Mode_SemiAuto
        {
            reloadTime=0.096000001;

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
            drySound[] = {"ArG_TM\Sound\Marui_P226R.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_TM\Sound\Marui_P226R.wss",4, 1,15};
            soundBegin[] = {"begin1",1};

        };
            class SilencedSound
        {
            begin1[] = {"ArG_TM\Sound\Marui_P226R.wss",3, 1,15};
            soundBegin[] = {"begin1",1};

        };
        };




      };

       ///M92F///

    class rhsusf_weap_m9;
    class ArG_TM_M92F: rhsusf_weap_m9
    {
        author="Rodeostar42";

        scope=2;
        displayName="TM M92F";
        model = "\rhsusf\addons\rhsusf_weapons2\m9_beretta\M9";
        baseWeapon="ArG_TM_M92F";
        picture = "\rhsusf\addons\rhsusf_weapons2\m9_beretta\Data\UI\M9_ca.paa";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        descriptionShort = "GBB<br/>Tokyo MARUI";
        magazines[] = {

            "ArG_25Rnd_9mm"
        };

        initSpeed = 220; // muzzle velocity
        maxRange = 60;
        flash = "";
        flashSize = 0;
        fireLightIntensity=0;
        recoil="HGRecoil";
        maxZeroing=200;
        discreteDistanceInitIndex=0;
        maxRecoilSway=0.0125;
        swayDecaySpeed=1.25;
        soundBullet[]={"emptySound",1};
        reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07",1,1,10};




        modes[]=
        {
            "Single"
        };
        class Single: Mode_SemiAuto
        {
            reloadTime=0.096000001;

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
            drySound[] = {"ArG_TM\Sound\Marui_M92F.wss",4, 1,15};
            class StandardSound
        {
            begin1[] = {"ArG_TM\Sound\Marui_M92F.wss",4, 1,15};
            soundBegin[] = {"begin1",1};

        };
            class SilencedSound
        {
            begin1[] = {"ArG_TM\Sound\Marui_M92F.wss",3, 1,15};
            soundBegin[] = {"begin1",1};

        };
        };




      };

      ///M320///
      class rhs_weap_M320;

      class ArG_M320 : rhs_weap_M320
      {
        author="Rodeostar42";

      	scope = 2;
      	displayName= "ArG M320";
      	model = "\rhsusf\addons\rhsusf_weapons\m320\M320standalone.p3d";
        baseWeapon="ArG_M320";
      	picture = "\rhsusf\addons\rhsusf_weapons\icons\m320standalone_ca.paa";
      	UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";

        magazines[] = {

            "ArG_HE_Grenade_shell"
        };

        initSpeed = 220; // muzzle velocity
        maxRange = 30;
        flash = "";
        flashSize = 0;
        fireLightIntensity=0;
        recoil="HGRecoil";
        maxZeroing=350;
        discreteDistanceInitIndex=0;
        maxRecoilSway=0.0125;
        swayDecaySpeed=1.25;
        soundBullet[]={"emptySound",1};

      	modes[] = {"this"};
        multiplier=60

      	weaponInfoType = "rhs_rscOptics_pistol";
      	cameraDir = "gl_look";
      	discreteDistance[] = {50, 100, 150, 200, 250, 300, 350};
      	discreteDistanceCameraPoint[] = {"gl_eye_50m", "gl_eye_100m", "gl_eye_150m", "gl_eye_200m", "gl_eye_250m", "gl_eye_300m", "gl_eye_350m"};





      };


  };
