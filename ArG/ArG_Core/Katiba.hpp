
class arifle_Katiba_F;

class ArG_Katiba_F: arifle_Katiba_F
{
  author="$STR_A3_Bohemia_Interactive";
  _generalMacro="arifle_Katiba_F";
  baseWeapon="arifle_Katiba_F";
  scope=2;
  displayName="$STR_A3_CfgWeapons_arifle_Katiba_F0";
  descriptionShort="Replace Katiba to Airsoft Gun";
  baseWeapon="ArG_Katiba_F";

  model="\A3\Weapons_F\Rifles\Khaybar\Khaybar_F.p3d";
  picture="\A3\weapons_F\Rifles\Khaybar\Data\UI\gear_Khaybar_X_CA.paa";
  UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";

  magazines[] = {

      "ArG_30Rnd_556x45_BB_02",
      "ArG_30Rnd_556x45_BB_025"
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
  alternativeFire="Zasleh2";

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
