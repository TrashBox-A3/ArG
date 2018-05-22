///MK200///

class Rifle_Long_Base_F;
class JSDF_M24R: Rifle_Long_Base_F
{
  author="Rodeostar42";

  baseWeapon="JSDF_M24R";
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


  model="\ArG_Core\Data\Weapon\M24\JSDF_M24R.p3d";
  displayName="ArG M24";



  descriptionShort="Replace MK200 to Airsoft Gun";




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
