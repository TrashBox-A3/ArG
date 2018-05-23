///MK200///

class JSDF_M24R;
class ArG_VSR10_G: JSDF_M24R
{
  author="Rodeostar42";

  baseWeapon="ArG_VSR10_G";
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

  recoil="EGRecoil";
  maxZeroing=200;


  model="\ArG_Core\Data\Weapon\M24\JSDF_M24R.p3d";
  displayName="ArG VSR10 G";



  descriptionShort="Tokyo Marui VSR10 Gspec";




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
