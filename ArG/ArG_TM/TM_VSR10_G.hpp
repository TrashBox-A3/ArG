///VSR10 Gspec///
class rhs_weap_m24sws;

class ArG_TM_VSR10_G: rhs_weap_m24sws
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

      "ArG_20Rnd_762x51_BB_02",
      "ArG_20Rnd_762x51_BB_025"
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
