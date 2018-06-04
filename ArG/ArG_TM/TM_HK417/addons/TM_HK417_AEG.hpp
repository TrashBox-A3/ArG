class CfgPatches
{
	class ArG_HK417
	{
		requiredaddons[]=
		{
			"SMA_Weapons"
		};
		requiredversion=0.1;
		units[]={};
		weapons[]=
		{
			"ArG_TM417",
			"SMA_TMvfg",
			"SMA_TM417_16in"
		};
		author="Rodeostar42";
	};
};
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
	class ArG_AssaultBase: mk20_base_f
	{
		class WeaponSlotsInfo;
	};
	class ArG_556_RIFLEBASE: SMA_AssaultBase
	{
		class Single;
		class FullAuto;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot;
		};
	};
	class ArG_762_RIFLEBASE: SMA_AssaultBase
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
	class ArG_TM417: SMA_762_RIFLEBASE
	{
		scope=2;
		dlc="SMA";
		inertia=0.80000001;
		dexterity=1.6;
		recoil="recoil_dmr_06";
		displayName="HK417 Assaulter 12in";
		author="Specialist Military Arms";
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
					"sma_gemtech_one_blk"
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
			scope=2;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class SilencedSound
			{
				soundSet="";
				soundSetShot[]=
				{
					"SMA_HK417_SilencerShot_Soundset",
					"TRG20_silencerTail_SoundSet",
					"TRG20_silencerInteriorTail_SoundSet"
				};
			};
			class StandardSound
			{
				soundSet="";
				soundSetShot[]=
				{
					"SMA_HK417_Shot_Soundset",
					"TRG20_Tail_SoundSet",
					"TRG20_InteriorTail_SoundSet"
				};
			};
		};
		class FullAuto: FullAuto
		{
			reloadTime=0.101;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class SilencedSound
			{
				soundSet="";
				soundSetShot[]=
				{
					"SMA_HK417_SilencerShot_Soundset",
					"TRG20_silencerTail_SoundSet",
					"TRG20_silencerInteriorTail_SoundSet"
				};
			};
			class StandardSound
			{
				soundSet="";
				soundSetShot[]=
				{
					"SMA_HK417_Shot_Soundset",
					"TRG20_Tail_SoundSet",
					"TRG20_InteriorTail_SoundSet"
				};
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
	class ArG_HK417vfg: SMA_HK417
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=83.199997;
			class PointerSlot: PointerSlot
			{
				compatibleItems[]=
				{
					"SMA_ANPEQ15_TOP_417TAN",
					"SMA_ANPEQ15_TOP_417BLK",
					"SMA_SFPEQ_HK417TOP_TAN",
					"SMA_SFPEQ_HK417TOP_TAN_LIGHT",
					"SMA_SFPEQ_HK417TOP_BLK",
					"SMA_SFPEQ_HK417TOP_BLK_LIGHT"
				};
			};
			class asdg_Underbarrel
			{
				access=0;
				iconPicture="\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinpoint="Bottom";
				iconPosition[]={0,0};
				iconScale=0;
				linkProxy="\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
				scope=0;
				class CompatibleItems
				{
					SMA_Gripod_01=1;
				};
			};
		};
		scope=2;
		displayName="HK417 Assaulter 12in(vfg)";
		author="Specialist Military Arms";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"SMA_HK417\Data\Anim\HK416vfg.rtm"
		};
		model="\SMA_HK417\HK417vfg.p3d";
		picture="\SMA_HK417\ui\SMAHK417_ca.paa";
		descriptionShort="7.62mm Battle Rifle";
		reloadaction="GestureReloadSMG_02";
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
	};
	class ArG_HK417_16in: SMA_HK417
	{
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
		};
		scope=2;
		inertia=0.81999999;
		recoil="recoil_dmr_06";
		displayName="HK417 Recce 16in ";
		author="Specialist Military Arms";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"SMA_HK417\Data\Anim\HK416agf.rtm"
		};
		model="\SMA_HK417\HK417_16in.p3d";
		picture="\SMA_HK417\ui\SMAHK41716in_ca.paa";
		descriptionShort="7.62mm Battle Rifle";
		reloadaction="GestureReloadSMG_02";
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
			dispersion=0.00028581001;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.00028581001;
		};
	};
};
