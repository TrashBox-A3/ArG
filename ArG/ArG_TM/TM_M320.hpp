///M320///




class rhs_weap_M590_5RD;

class ArG_TM_M320 : rhs_weap_M590_5RD
{
  author="Rodeostar42";

  scope = 2;
  displayName= "ArG TM M320";
  model = "\rhsusf\addons\rhsusf_weapons\m320\M320standalone.p3d";
  baseWeapon="ArG_TM_M320";
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

  modes[] = {
    "this"

  };


  burst=60;
  multiplier=60;
  dispersion=0.3;
  weaponInfoType = "rhs_rscOptics_pistol";
  cameraDir = "gl_look";
  discreteDistance[] = {50, 100, 150, 200, 250, 300, 350};
  discreteDistanceCameraPoint[] = {"gl_eye_50m", "gl_eye_100m", "gl_eye_150m", "gl_eye_200m", "gl_eye_250m", "gl_eye_300m", "gl_eye_350m"};

};
