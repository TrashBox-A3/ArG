///VSR10 Gspec///
class rhs_weap_m24sws_blk;

class ArG_TM_VSR10_G: rhs_weap_m24sws_blk
{
  author="Rodeostar42";

  scope=2;
  displayName="ArG TM VSR10 Gspec";
  model = "\rhsusf\addons\rhsusf_weapons2\M24\M24_Base.p3d";
  baseWeapon="ArG_TM_VSR10_G";
  picture = "\rhsusf\addons\rhsusf_weapons2\icons\rhs_m24swsblk_icon_ca.paa";
  UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
  descriptionShort = "VSR10 Gspec<br/>Tokyo MARUI";
  magazines[] = {

      "ArG_30Rnd_VSR_BB_02",
      "ArG_30Rnd_VSR_BB_025"
  };

  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    class MuzzleSlot: MuzzleSlot
    {
      linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
      compatibleItems[]=
      {
        "rhsusf_acc_M2010S",
        "rhsusf_acc_M2010S_d",
        "rhsusf_acc_M2010S_sa",
        "rhsusf_acc_M2010S_wd",
        "ArG_muzzle_snds_H"
      };
      iconPosition[]={0,0.44999999};
      iconScale=0.2;
    };
    class CowsSlot: CowsSlot
    {
      iconPosition[]={0.5,0.34999999};
      iconScale=0.2;
    };
    class PointerSlot: PointerSlot
    {
      iconPosition[]={0.2,0.44999999};
      iconScale=0.25;
    };
  };

  initSpeed = 250; // muzzle velocity
  maxRange = 100;
  flash = "";
  flashSize = 0;
  fireLightIntensity=0;
  reloadAction = "RHS_GestureReloadM2010";
  recoil="NoRecoil";
  maxZeroing=200;
  discreteDistanceInitIndex=0;
  maxRecoilSway=0.0125;
  swayDecaySpeed=1.25;
  soundBullet[]={"emptySound",1};

  modes[]=
  {
      "Single",
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

  muzzles[]={"this","SAFE"};
	
	class Eventhandlers: Eventhandlers
	{
		class RHS_BoltAction {
			fired = "[_this select 0,_this select 1,_this select 1] call rhs_fnc_boltAction;";
		};
	};
	rhs_boltActionSound[] ={"rhsusf\addons\rhsusf_sounds\m2010\bolt.wss", 1.42, 1, 20};
	rhs_boltActionAnim = "RHS_GestureRechamberM2010";


  };






};
