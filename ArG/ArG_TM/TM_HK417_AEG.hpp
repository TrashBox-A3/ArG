class SMA_HK417_16in: SMA_HK417
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
