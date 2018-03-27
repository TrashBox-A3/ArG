class cfgMagazines
{
    
    
    class 30Rnd_65x39_caseless_mag;
    class ArG_30Rnd_65x39_BB: 30Rnd_65x39_caseless_mag
    {
    	author="Rodeostar42";
		displayName = "30Rnd 65x39 6mmBB";
		scope = 2;
		ammo = ArG_6mm_BB_02; //eg
		count = 30;
		initSpeed = 100; // in case it is not in weapon
		tracersEvery=1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\A3\weapons_f\data\ui\m_30stanag_caseless_CA.paa";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		descriptionShort = "Caliber: 6mm BB<br/>Rounds: 30<br/>weight: 2.0g";
		displayNameMFDFormat = "6mmBB";
		
	};

	
};