class cfgMagazines
{


    class 30Rnd_556x45_Stanag;
    class VFC_30Rnd_556x45_M4_HK416_02: 30Rnd_556x45_Stanag
    {
    	author="Rodeostar42";
		displayName = "30Rnd 556x45 6mmBB 0.2g";
		scope = 2;
		ammo = ArG_6mm_BB_02; //eg
		count = 520;
		initSpeed = 100; // in case it is not in weapon
		tracersEvery=1;
		class ItemInfo
        	{
            		mass = 1;
        	};
		picture = "\A3\weapons_F\data\UI\m_30stanag_CA.paa";
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_mag";
		descriptionShort = "Caliber: 6mm BB<br/>Rounds: 30<br/>weight: 0.2g";
		displayNameMFDFormat = "6mmBB";

	};


  class VFC_30Rnd_556x45_M4_HK416_025: 30Rnd_556x45_Stanag
  {
    author="Rodeostar42";
  displayName = "30Rnd 556x45 6mmBB 0.25g";
  scope = 2;
  ammo = ArG_6mm_BB_025; //eg
  count = 520;
  initSpeed = 100; // in case it is not in weapon
  tracersEvery=1;
  class ItemInfo
        {
              mass = 1;
        };
  picture = "\A3\weapons_F\data\UI\m_30stanag_CA.paa";
  model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_mag";
  descriptionShort = "Caliber: 6mm BB<br/>Rounds: 30<br/>weight: 0.25g";
  displayNameMFDFormat = "6mmBB";

};

class rhsusf_mag_40Rnd_46x30_FMJ;
class VFC_40Rnd_46x30_02: rhsusf_mag_40Rnd_46x30_FMJ
{
  author="Rodeostar42";
displayName = "40Rnd 46x30 6mmBB 0.2g";
scope = 2;
ammo = ArG_6mm_BB_02; //eg
count = 520;
initSpeed = 100; // in case it is not in weapon
tracersEvery=1;
class ItemInfo
      {
            mass = 1;
      };
picture = "\rhsusf\addons\rhsusf_weapons\icons\mag_45acp_ca.paa";
model = "\A3\weapons_F\ammo\mag_univ.p3d";
descriptionShort = "Caliber: 6mm BB<br/>Rounds: 40<br/>weight: 0.2g";
displayNameMFDFormat = "6mmBB";

};


class VFC_40Rnd_46x30_025: 30Rnd_556x45_Stanag
{
author="Rodeostar42";
displayName = "40Rnd 46x30 6mmBB 0.25g";
scope = 2;
ammo = ArG_6mm_BB_025; //eg
count = 520;
initSpeed = 100; // in case it is not in weapon
tracersEvery=1;
class ItemInfo
    {
          mass = 1;
    };
picture = "\rhsusf\addons\rhsusf_weapons\icons\mag_45acp_ca.paa";
model = "\A3\weapons_F\ammo\mag_univ.p3d";
descriptionShort = "Caliber: 6mm BB<br/>Rounds: 40<br/>weight: 0.25g";
displayNameMFDFormat = "6mmBB";

};


};
