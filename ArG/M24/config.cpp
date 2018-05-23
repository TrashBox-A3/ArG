class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Optics;
class Mode_eye;
class SlotInfo;
class CowsSlot;

class CfgPatches
{
	class JSDF_W_R_M24
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgMagazines
{
	class JSDF_M_B_7_62x51 ;
	class JSDF_M_R_M24			: JSDF_M_B_7_62x51
	{
		displayName 			= 5R;
		descriptionshort 		= "Caliber: 7.62x51mm NATO<br/>Rounds: 4+1<br/>Used in: M24 Sniper Rifle<br/>no Tracers";
		ammo 				= JSDF_A_B_7_62x51_M80_M;
		count 				= 5;
		mass 				= 3;
//		model				="\jsdf_wep\B_7_62mm_M24\JSDF_M24R_mag.p3d";
		picture				="\jsdf_wep\B_7_62mm_M24\pic_m_R_M24_ca.paa";
	};
};
class CfgRecoils
{
	class recoil_default	;
	class JSDF_recoil_M24	: recoil_default
	{
		muzzleOuter[] 	= {0.2,1.0,0.2,0.3};
		kickBack[] 	= {0.03,0.06};
		temporary 	= 0.03;
	};
	JSDF_R_R_M24[] 				= {0.02, 0.03, 0.02,    0.10, 0.010, -0.02,   0.10, -0.01, 0.01,   0.05, 0, 0};
	JSDF_R_R_M24_Prone[] 			= {0.02, 0.03, 0.01,    0.10, 0.000,  0.01,   0.05, -0.01,-0.01,   0.05, 0, 0};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryUnderItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class JSDF_W_Bipod_BRM_S		: ItemCore
	{
		scope				= 2;
		displayName			= "Harris Bipod BRM-S";
		picture 			= "\jsdf_wep\B_7_62mm_M24\pic_w_I_BRM_S_ca.paa";
		model				= "\jsdf_wep\B_7_62mm_M24\JSDF_Bipod_BRM_S.p3d";
		inertia 			= 0.2;
		class ItemInfo			: InventoryUnderItem_Base_F
		{
			deployedPivot		="pos_bipod";
			hasBipod		= 1;
			mass 			= 10;
		};
	};
	class JSDF_W_Bipod_BRM_M		: ItemCore
	{
		scope				= 2;
		displayName			= "Harris Bipod BRM-M";
		picture 			= "\jsdf_wep\B_7_62mm_M24\pic_w_I_BRM_M_ca.paa";
		model				= "\jsdf_wep\B_7_62mm_M24\JSDF_Bipod_BRM_M.p3d";
		inertia 			= 0.2;
		class ItemInfo			: InventoryUnderItem_Base_F
		{
			deployedPivot		="pos_bipod";
			hasBipod		= 1;
			mass 			= 10;
		};
	};
	class JSDF_W_Scope_Mk4M3 		: ItemCore
	{
		scope 				= 2;
		displayName 			= "Scope Mk4 M3";
		picture 			= "\jsdf_wep\B_7_62mm_M24\pic_w_I_Mk4M3_ca.paa";
		model				= "\jsdf_wep\B_7_62mm_M24\JSDF_Scope_Mk4M3.p3d";
		descriptionShort 		= "$STR_A3_cfgWeapons_optic_Arco1";
		weaponInfoType 			= "RscWeaponZeroing";
		
		class ItemInfo 			: InventoryOpticsItem_Base_F
		{
			opticType 		= 1;
			mass 			= 4;
			RMBhint 		= "Advanced Rifle Combat Optics";
			optics 			= 1;
			modelOptics 		= "\jsdf_wep\B_7_62mm_M24\JSDF_M24R_opt_M3";

			class OpticsModes
			{
				class Mk4M3_Scope	: Mode_Optics
				{
					opticsZoomMin 			= 0.025;
					opticsZoomMax 			= 0.0875;
					opticsZoomInit 			= 0.0875;
					distanceZoomMin 		= 100;
					distanceZoomMax 		= 300;
					discreteDistance[] 		= {100, 200, 300, 400, 500, 600, 700, 800};
					discreteDistanceInitIndex 	= 2;
				};
				class eye				: Mode_eye{};
			};
		};

	};
	class JSDF_W_R_base;
	class JSDF_W_R_M24			: JSDF_W_R_base
	{
		scope 				= 2;
		displayName			= M24 Sniper Rifle;
		descriptionshort 		= "Sniper Rifle<br/>Cartridge: 7.62x51mm NATO<br/>Magazine: 4Rounds<br/>Mount: Leupold Mark4 M3 Scope";
		class Library {libTextDesc 	= Remington M24 Sniper Weapon System;};
		picture				= "\jsdf_wep\B_7_62mm_M24\pic_w_R_M24_x_ca.paa";
		model				= "\jsdf_wep\B_7_62mm_M24\JSDF_M24R";
		weaponInfoType 			= "RscWeaponZeroing";
		UiPicture			= "\A3\weapons_f\data\UI\icon_sniper_CA.paa";
		handAnim[] 			= {"OFP2_ManSkeleton", "\JSDF_Wep\B_7_62mm_M24\M24.rtm"};

		modes[] 			= {"Single"};
		class Single			: Mode_SemiAuto
		{
			sounds[] 			= {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect 	= "DefaultRifle";
				closure1[] 		= {"A3\sounds_f\weapons\closure\closure_rifle_6",0.70794576,1,10};
				closure2[] 		= {"A3\sounds_f\weapons\closure\closure_rifle_7",0.70794576,1,10};
				soundClosure[] 		= {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound : BaseSoundModeType
			{
				begin1[] 		= {"jsdf_wep\B_7_62mm_M24\M24R.wss",1.0,1,1200};
				begin2[] 		= {"jsdf_wep\B_7_62mm_M24\M24R.wss",1.0,1,1200};
				soundBegin[] 		= {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound : BaseSoundModeType
			{
				begin1[] 		= {"A3\sounds_f\weapons\silenced\silent-18",0.7943282,1,100};
				begin2[] 		= {"A3\sounds_f\weapons\silenced\silent-19",0.7943282,1,100};
				begin3[] 		= {"A3\sounds_f\weapons\silenced\silent-11",0.7943282,1,100};
				soundBegin[] 		= {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadTime 			= 2;
			recoil				= JSDF_R_R_M24;
			recoilProne			= JSDF_R_R_M24_Prone;
		};
		recoil 				= "JSDF_recoil_M24";
		hasBipod			= 1;

		soundContinuous 		= 0;
		reloadSound[] 			= {"\jsdf_wep\B_7_62mm_M24\M24R_rel.wss",1.0, 1};
		reloadMagazineSound[]		= {"\jsdf_wep\B_7_62mm_M24\M24R_mag.wss",0.1, 1, 20};
		backgroundReload 		= 1;
		magazines[] 			= {"JSDF_M_R_M24"};

		dexterity 			= 1.35;
		dispersion 			= 0.00012;
		value 				= 1000;

		class OpticsModes
		{
			class Scope				: Mode_Optics
			{
				optics 				= 1;
				opticsFlare 			= 1;
				opticsDisablePeripherialVision 	= 1;
				opticsZoomMin 			= 0.214;
				opticsZoomMax 			= 0.075;
				opticsZoomInit 			= 0.075;
				distanceZoomMin 		= 100;
				distanceZoomMax 		= 300;
				discreteDistance[] 		= {100, 200, 300, 400, 500, 600, 700, 800};
				discreteDistanceInitIndex 	= 2;
			};
			class eye				: Mode_eye{};
		};
		class WeaponSlotsInfo
		{
			class BipodSlot 	: SlotInfo
			{
				linkProxy		= "\jsdf_wep\B_7_62mm_M24\JSDF_Bipod_BRM_S";
				compatibleItems[] 	= {"JSDF_W_Bipod_BRM_S","JSDF_W_Bipod_BRM_M"};
			};
			class ScopeSlot 	: CowsSlot
			{
				linkProxy 		= "\JSDF_Wep\B_7_62mm_M24\JSDF_Scope_Mk4M3";
				compatibleItems[] 	= {"JSDF_W_Scope_Mk4M3"};
			};	
		};

		minRange =    0; minRangeProbab = 0.1;
		midRange =  500; midRangeProbab = 0.7;
		maxRange = 1000; maxRangeProbab = 0.05;
		aiRateOfFire 			= 8.0;
		aiRateOfFireDistance 		= 1000;
	};
	class JSDF_W_R_M24SWS			: JSDF_W_R_M24
	{
		scope 				= 2;
		class LinkedItems
		{
			class LinkedItemsUnder	{slot = "BipodSlot";	item = "JSDF_W_Bipod_BRM_S";		};
			class LinkedItemsAcc 	{slot = "PointerSlot";	item = "JSDF_W_Scope_Mk4M3";		};
		};
	};
};