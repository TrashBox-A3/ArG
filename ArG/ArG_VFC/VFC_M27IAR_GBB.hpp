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

	magazines[] = {

			"VFC_30Rnd_556x45_M4_HK416_GBB"
	};


	reloadTime = 0.070;

	recoil="GBRecoil";

	inertia = 0.4;
	dexterity = 1.6;
	initSpeed = 250; // muzzle velocity
	baseWeapon="ArG_VFC_M27IAR_GBB";
};
