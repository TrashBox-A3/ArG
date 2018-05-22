///MK200///

class JSDF_M24R;
class ArG_M24: JSDF_M24R
{
  author="Rodeostar42";

  baseWeapon="ArG_M24";
  scope=2;
  magazines[] = {

      "ArG_30Rnd_556x45_BB_02",
      "ArG_30Rnd_556x45_BB_025"
  };

  initSpeed = 250; // muzzle velocity
  maxRange = 100;
  flash = "";
  flashSize = 0;
  fireLightIntensity=0;
  discreteDistanceInitIndex=0;
  maxRecoilSway=0.0125;
  swayDecaySpeed=1.25;
  soundBullet[]={"emptySound",1};
  reloadAction="GestureReloadM200";
  recoil="EGRecoil";
  maxZeroing=200;
  handAnim[]=
  {
    "OFP2_ManSkeleton",
    "\A3\weapons_f\Machineguns\M200\data\Anim\M200.rtm"
  };

  model="\ArG_Core\Data\Weapon\M24\JSDF_M24R.p3d";
  displayName="ArG M24";

  picture="\A3\weapons_F\Machineguns\M200\Data\UI\gear_m200_X_CA.paa";
  UiPicture="\A3\weapons_f\data\UI\icon_mg_CA.paa";

  descriptionShort="Replace MK200 to Airsoft Gun";

  hiddenSelections[]=
  {
    "camo",
    "camo1",
    "camo2"
  };
  hiddenSelectionsTextures[]=
  {
    "\A3\Weapons_F\Machineguns\M200\data\1st_person_co",
    "\ArG_Core\Data\Weapon\M24\m24_00_co",
    "\A3\Weapons_F\Machineguns\M200\data\grip_co"
  };

  modes[]=
  {
    "manual",
    "close",
    "short",
    "medium",
    "far_optic1",
    "far_optic2"
  };
  class manual: Mode_FullAuto
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
  class close: manual
  {
      reloadTime=0.096000001;
      dispersion=0.001;

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
  class short: close
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
  class medium: close
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
  class far_optic1: medium
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

  class far_optic2: far_optic1
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
