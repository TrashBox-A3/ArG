////////////VFC MP7A2 GBB////////
class rhsusf_weap_MP7A2;
class ArG_VFC_MP7A1_GBB: rhsusf_weap_MP7A2
{
	scope = 2;
	author="Rodeostar42";
	displayName="VFC MP7A1 GBB";

	picture = "\rhsusf\addons\rhsusf_weapons2\icons\rhs_mp7_0_icon_ca.paa";
	model = "\rhsusf\addons\rhsusf_weapons2\MP7\mp7a2";
	descriptionShort = "VFC MP7A1 GBB <br/>VFC";

	magazines[] = {

			"VFC_40Rnd_46x30_02",
			"VFC_40Rnd_46x30_025"
	};

	class WeaponSlotsInfo: WeaponSlotsInfo
  {
    class MuzzleSlot: MuzzleSlot
    {
      linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
      compatibleItems[]=
      {
        "muzzle_snds_h",
        "ArG_muzzle_snds_H"
      };
      iconPosition[]={0,0.44999999};
      iconScale=0.2;
    };
    
  };


	reloadTime = 0.070;

	recoil="GBRecoil";

	inertia = 0.4;
	dexterity = 1.6;
	initSpeed = 250; // muzzle velocity
	baseWeapon="ArG_VFC_MP7A1_GBB";

	modes[]=
	{
			"Single",
			"FullAuto",
			"fullauto_medium",
			"single_medium_optics1",
			"single_far_optics2"
	};
	class Single: Mode_SemiAuto
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
			drySound[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",4, 1,15};
			class StandardSound
	{
			begin1[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",4, 1,15};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
	};
			class SilencedSound
	{
			begin1[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",3, 1,15};
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
			drySound[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",4, 1,15};
			class StandardSound
	{
			begin1[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",4, 1,15};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
	};
			class SilencedSound
	{
			begin1[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",3, 1,15};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
	};
	};
	class fullauto_medium: FullAuto
	{
			showToPlayer=0;
			burst=3;
			aiBurstTerminable=1;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
			flash = "";
			flashSize = 0;
			fireLightIntensity=0;
			drySound[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",4, 1,15};
			class StandardSound
	{
			begin1[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",4, 1,15};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
	};
			class SilencedSound
	{
			begin1[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",3, 1,15};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
	};
	};
	class single_medium_optics1: Single
	{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
			flash = "";
			flashSize = 0;
			fireLightIntensity=0;
			drySound[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",4, 1,15};
			class StandardSound
	{
			begin1[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",4, 1,15};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
	};
			class SilencedSound
	{
			begin1[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",3, 1,15};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
	};
	};
	class single_far_optics2: single_medium_optics1
	{
			requiredOpticType=2;
			showToPlayer=0;
			minRange=100;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.60000002;
			maxRange=700;
			maxRangeProbab=0.050000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=700;
			flash = "";
			flashSize = 0;
			fireLightIntensity=0;
			drySound[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",4, 1,15};
			class StandardSound
	{
			begin1[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",4, 1,15};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
	};
			class SilencedSound
	{
			begin1[] = {"ArG_VFC\Sound\VFC_HK416A5_GBB.wss",3, 1,15};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
	};
	};
};
