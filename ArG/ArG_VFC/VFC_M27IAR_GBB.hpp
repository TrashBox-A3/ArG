////////////VFC M27 IAR GBB////////
class rhs_weap_m27iar;
class ArG_VFC_M27IAR_GBB: rhs_weap_m27iar
{
	scope = 2;
	author="Rodeostar42";
	displayName="VFC M27 IAR GBB";

	picture = "\rhsusf\addons\rhsusf_weapons2\icons\rhs_m27iar_icon_ca.paa";
	model = "\rhsusf\addons\rhsusf_weapons2\M27\rhs_m27iar.p3d";
	descriptionShort = "VFC M27 IAR GBB <br/>VFC";
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m16a4_stock.rtm"};

	magazines[] = {

			"VFC_30Rnd_556x45_M4_HK416_GBB"
	};


	reloadTime = 0.070;

	recoil="GBRecoil";

	inertia = 0.4;
	dexterity = 1.6;
	initSpeed = 250; // muzzle velocity

	discreteDistance[]={200,300,400,500,600};
	discreteDistanceCameraPoint[]=
	{
		"eye",
		"eye_300",
		"eye_400",
		"eye_500",
		"eye_600"
	};
	discreteDistanceInitIndex=0;

	class WeaponSlotsInfo
	{
		mass = 79.2;
		allowedSlots[] = {901};
		class UnderBarrelSlot: rhs_western_rifle_underbarrel_slot {};
		class CowsSlot: rhs_western_rifle_scopes_slot_long {};
		class PointerSlot: rhs_western_rifle_laser_slot_top {};
		class MuzzleSlot: rhs_western_rifle_muzzle_slot {};
		class GripodSlot: rhs_western_rifle_gripod_slot {};
	};
	modes[] =
	{
		"Single",
		"Single_AI",
		"FullAuto",
		"single_medium_optics1",
		"single_far_optics2"
	};

	class FullAuto : FullAuto
	{
		reloadTime = 0.075;
		dispersion=0.0018;
		minRange = 2;
		minRangeProbab = 0.9;
		midRange = 30;
		midRangeProbab = 0.7;
		maxRange = 100;
		maxRangeProbab = 0.3;
		aiRateOfFire= 1e-006;
	};

	rhs_grip1_change = "rhs_weap_m27iar_grip1";
	rhs_grip2_change = "rhs_weap_m27iar_grip2";
	rhs_grip3_change = "rhs_weap_m27iar_grip3";
	rhsusf_acc_anpeq15 = 1; // 0 - for M4, 1 - for M27IAR/HK with higher top rail

	baseWeapon="ArG_VFC_M27IAR_GBB";
};
