class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class manual;
class close;
class Mode_Optics;
class Mode_eye;
class far_optic1;
class far_optic2;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class WeaponSlotsInfo;
class LinkedItems;
class UnderBarrelSlot;
class GripodSlot;
class CfgWeapons
{

  class ItemCore;
      class InventoryItem_Base_F;
      class InventoryMuzzleItem_Base_F;
      class InventoryUnderItem_Base_F;
      class InventoryOpticsItem_Base_F;
      class InventoryFlashLightItem_Base_F;
      class Zasleh2: ItemCore
      {
          scope=2;
          model="A3\weapons_f\data\zaslehsdl_proxy.p3d";
      };

    ///GHK AKM///
    class rhs_weap_akm;
    class ArG_GHK_AKM: rhs_weap_akm
    {
        author="Ukedachi";

        scope=2;
        displayName="GHK AKM";
        model = "\rhsafrf\addons\rhs_weapons\AKM\rhs_akm.p3d";
        baseWeapon="ArG_GHK_AKM";
        picture = "\rhsafrf\addons\rhs_weapons\icons\rhs_weap_akm_ca.paa";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        descriptionShort = "AKM <br/>GHK";
        magazines[] = {

            "ArG_40Rnd_762x39_BB"
        };

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
          class MuzzleSlot: MuzzleSlot
          {
            linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
            compatibleItems[]=
            {
              "muzzle_snds_h",
              "ArG_muzzle_snds_H"
            };
            iconPosition[]={0,0.44999999};
            iconScale=0.2;
          };
          
        };

        initSpeed = 250; // muzzle velocity
        maxRange = 100;
        flash = "";
        flashSize = 0;
        fireLightIntensity=0;
        reloadAction="RHS_GestureReloadAK_1hand";
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
            drySound[] = {"ArG_GHK\Sound\AKGAS.wss",5, 1,30};
            class StandardSound
        {
            begin1[] = {"ArG_GHK\Sound\AKGAS.wss",5, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_GHK\Sound\AKGAS.wss",4, 1,15};
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
            drySound[] = {"ArG_GHK\Sound\AKGAS.wss",5, 1,30};
            class StandardSound
        {
            begin1[] = {"ArG_GHK\Sound\AKGAS.wss",5, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_GHK\Sound\AKGAS.wss",4, 1,15};
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
            drySound[] = {"ArG_GHK\Sound\AKGAS.wss",5, 1,30};
            class StandardSound
        {
            begin1[] = {"ArG_GHK\Sound\AKGAS.wss",5, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_GHK\Sound\AKGAS.wss",4, 1,15};
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
            drySound[] = {"ArG_GHK\Sound\AKGAS.wss",5, 1,30};
            class StandardSound
        {
            begin1[] = {"ArG_GHK\Sound\AKGAS.wss",5, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_GHK\Sound\AKGAS.wss",4, 1,15};
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
            drySound[] = {"ArG_GHK\Sound\AKGAS.wss",5, 1,30};
            class StandardSound
        {
            begin1[] = {"ArG_GHK\Sound\AKGAS.wss",5, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
            class SilencedSound
        {
            begin1[] = {"ArG_GHK\Sound\AKGAS.wss",4, 1,15};
            soundBegin[] = {"begin1",1};
            weaponSoundEffect = "DefaultRifle";
        };
        };



      };


  };
