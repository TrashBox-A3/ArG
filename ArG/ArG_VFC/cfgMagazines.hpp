class cfgMagazines
{


    class 30Rnd_556x45_Stanag;
    class VFC_30Rnd_556x45_M4_HK416_GBB: 30Rnd_556x45_Stanag
    {
    	author="Rodeostar42";
		displayName = "30Rnd 556x45 6mmBB";
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
		descriptionShort = "Caliber: 6mm BB<br/>Rounds: 520<br/>weight: 0.2g";
		displayNameMFDFormat = "6mmBB";

	};


};
