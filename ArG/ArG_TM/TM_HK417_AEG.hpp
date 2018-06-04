SMA_HK417:
class ArG_TM_HK417_AEG: SMA_HK417
	{

    author="Rodeostar42";

  scope=2;
  displayName="ArG TM HK417 EARLY VARIANT";
  model = "\SMA_HK417\HK417_16in.p3d";
  baseWeapon="ArG_TM_HK417_AEG";
  picture = "\SMA_HK417\ui\SMAHK41716in_ca.paa";

  descriptionShort = "HK417 EARLY VARIANT<br/>Tokyo MARUI";
  magazines[] = {

      "ArG_70Rnd_HK417_BB_02",
      "ArG_70Rnd_HK417_BB_025",
      "ArG_600Rnd_HK417_BB_02",
      "ArG_600Rnd_HK417_BB_025"
  };
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class asdg_UnderSlot_SMAAssault: asdg_UnderSlot
			{
			};
			mass=88;
			class asdg_FrontSideRail_SMAAssault: asdg_FrontSideRail
			{
				class compatibleItems: compatibleItems
				{
					SMA_ANPEQ15_TOP_417TAN=1;
					SMA_ANPEQ15_TOP_417BLK=1;
					SMA_SFPEQ_HK417TOP_TAN=1;
					SMA_SFPEQ_HK417TOP_TAN_LIGHT=1;
					SMA_SFPEQ_HK417TOP_BLK=1;
					SMA_SFPEQ_HK417TOP_BLK_LIGHT=1;
				};
			};

      class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"SMA_supptan_762",
					"SMA_supp_762",
					"sma_gemtech_one_blk",
          "ArG_muzzle_snds_H"
				};
			};
		};
		scope=2;
		inertia=0.81999999;
    initSpeed = 250; // muzzle velocity
  maxRange = 100;
  flash = "gunfire";
  flashSize = 0;
  fireLightIntensity=0;
  reloadaction = "GestureReloadSMG_02";
  recoil="NextEGRecoil";
  maxZeroing=200;
  discreteDistanceInitIndex=0;
  maxRecoilSway=0.0125;
  swayDecaySpeed=1.25;
  soundBullet[]={"emptySound",1};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"SMA_HK417\Data\Anim\HK416agf.rtm"
		};


		reloadmagazinesound[]=
		{
			"SMA_SOUND\data\HK417\ARRL762.ogg",
			1,
			1,
			35
		};
		changeFiremodeSound[]=
		{
			"SMA_SOUND\data\HK417\AR1",
			0.25118899,
			1,
			20
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		opticsZoomMin=0.375;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		discreteDistance[]={100,200,300,400,500,600,700,1000};
		class Single: Single
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
		class FullAuto: FullAuto
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
	};
