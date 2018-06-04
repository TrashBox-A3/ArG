class asdg_OpticRail1913;
class asdg_FrontSideRail
{
	class compatibleItems;
};
class asdg_UnderSlot;
class CfgWeapons
{
	class Rifle;
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class GrenadeLauncher;
	class UGL_F: GrenadeLauncher
	{
		class Single;
	};
	class mk20_base_f;
	class SMA_AssaultBase: mk20_base_f
	{
		class WeaponSlotsInfo;
	};
	class SMA_556_RIFLEBASE: SMA_AssaultBase
	{
		class Single;
		class FullAuto;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot;
		};
	};
	class SMA_762_RIFLEBASE: SMA_AssaultBase
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot;
			class CowsSlot;
			class PointerSlot;
		};
		class Single;
		class FullAuto;
	};
	class ArG_TM_HK417_AEG: SMA_762_RIFLEBASE
	{
		scope=2;

		inertia=0.80000001;
		dexterity=1.6;
		recoil="recoil_dmr_06";
		displayName="HK417 ArG";
		author="Rodeostar42";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"SMA_HK417\Data\Anim\HK416agf.rtm"
		};
		model="\SMA_HK417\HK417.p3d";
		picture="\SMA_HK417\ui\SMAHK417_ca.paa";
		descriptionShort="7.62mm Battle Rifle";
		reloadaction="GestureReloadSMG_02";
		drysound[]=
		{
			"SMA_SOUND\data\HK417\Mainempty1",
			1.5,
			1,
			10
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
		discreteDistance[]={100,200,300,400,500};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=83.199997;
			allowedSlots[]={901};
			class asdg_OpticRail_SMAAssault: asdg_OpticRail1913
			{
			};
			class asdg_FrontSideRail_SMAAssault: asdg_FrontSideRail
			{
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
			class PointerSlot: PointerSlot
			{
				compatibleItems[]+=
				{
					"SMA_ANPEQ15_TOP_417TAN",
					"SMA_ANPEQ15_TOP_417BLK",
					"SMA_SFPEQ_HK417TOP_TAN",
					"SMA_SFPEQ_HK417TOP_TAN_LIGHT",
					"SMA_SFPEQ_HK417TOP_BLK",
					"SMA_SFPEQ_HK417TOP_BLK_LIGHT"
				};
			};
		};
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
		class GunParticles
		{
			class MuzzelEffect
			{
				directionname="Konec hlavne";
				effectname="RifleAssaultCloud";
				positionname="Usti hlavne";
			};
			class EjectionEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
	};

};
