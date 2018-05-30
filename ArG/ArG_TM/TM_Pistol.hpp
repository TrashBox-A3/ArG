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

  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    class MuzzleSlot: MuzzleSlot
    {
      linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
      compatibleItems[]=
      {
        "ArG_Invisible_muzzle_Second"
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

  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    class MuzzleSlot: MuzzleSlot
    {
      linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
      compatibleItems[]=
      {
        "ArG_Invisible_muzzle_Second"
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
  model = "\rhsusf\addons\rhsusf_weapons2\m9_beretta\M9"; ///model = "\rhsusf\addons\rhsusf_weapons2\m9_beretta\M9";
  baseWeapon="ArG_TM_M92F";
  picture = "\rhsusf\addons\rhsusf_weapons2\m9_beretta\Data\UI\M9_ca.paa";
  UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
  descriptionShort = "GBB<br/>Tokyo MARUI";
  magazines[] = {

      "ArG_25Rnd_9mm"
  };

  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    class MuzzleSlot: MuzzleSlot
    {
      linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
      compatibleItems[]=
      {
        "ArG_Invisible_muzzle_Second"
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
