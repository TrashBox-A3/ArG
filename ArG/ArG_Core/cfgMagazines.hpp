class cfgMagazines
{


    class 30Rnd_65x39_caseless_mag;
    class ArG_30Rnd_65x39_BB_02: 30Rnd_65x39_caseless_mag
    {
    	author="Rodeostar42";
		displayName = "30Rnd 65x39 6mmBB 0.2g";
		scope = 2;
		ammo = ArG_20mm_Test; //eg
		count = 30;
		initSpeed = 100; // in case it is not in weapon
		tracersEvery=1;
		class ItemInfo
        	{
            		mass = 1;
        	};
		picture = "\A3\weapons_f\data\ui\m_30stanag_caseless_CA.paa";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		descriptionShort = "Caliber: 6mm BB<br/>Rounds: 30<br/>weight: 0.2g";
		displayNameMFDFormat = "6mmBB";

	};

  class ArG_30Rnd_65x39_BB_025: 30Rnd_65x39_caseless_mag
  {
    author="Rodeostar42";
  displayName = "30Rnd 65x39 6mmBB 0.25g";
  scope = 2;
  ammo = ArG_6mm_BB_025; //eg
  count = 30;
  initSpeed = 100; // in case it is not in weapon
  tracersEvery=1;
  class ItemInfo
        {
              mass = 1;
        };
  picture = "\A3\weapons_f\data\ui\m_30stanag_caseless_CA.paa";
  model = "\A3\weapons_F\ammo\mag_univ.p3d";
  descriptionShort = "Caliber: 6mm BB<br/>Rounds: 30<br/>weight: 0.25g";
  displayNameMFDFormat = "6mmBB";

};

  class 1Rnd_HE_Grenade_shell;
  class ArG_HE_Grenade_shell: 1Rnd_HE_Grenade_shell
    {
    	author="Rodeostar42";
		displayName = "ArG 40mm MOSKART Shell";
		scope = 2;
		ammo = ArG_6mm_BB_02_GL; //eg
		count = 60;
		initSpeed = 80; // in case it is not in weapon
		tracersEvery=1;

		class ItemInfo
        	{
            		mass = 2;
        	};
		picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		descriptionShort = "Caliber: 6mm BB<br/>Rounds: 60<br/>weight: 2.0g";
		displayNameMFDFormat = "6mmBB";

	};


  class 30Rnd_556x45_Stanag;
  class ArG_30Rnd_556x45_BB_02: 30Rnd_556x45_Stanag
  {
    author="Rodeostar42";
  displayName = "30Rnd 556x45 6mmBB 0.2g";
  scope = 2;
  ammo = ArG_6mm_BB_02; //eg
  count = 300;
  initSpeed = 100; // in case it is not in weapon
  tracersEvery=1;
  class ItemInfo
        {
              mass = 1;
        };
  picture = "\A3\weapons_F\data\UI\m_30stanag_CA.paa";
  model = "\A3\weapons_F\ammo\mag_univ.p3d";
  descriptionShort = "Caliber: 6mm BB<br/>Rounds: 300<br/>weight: 0.2g";
  displayNameMFDFormat = "6mmBB";

};

class ArG_30Rnd_556x45_BB_025: 30Rnd_556x45_Stanag
  {
    author="Rodeostar42";
  displayName = "30Rnd 556x45 6mmBB 0.25g";
  scope = 2;
  ammo = ArG_6mm_BB_025; //eg
  count = 30;
  initSpeed = 100; // in case it is not in weapon
  tracersEvery=1;
  class ItemInfo
        {
              mass = 1;
        };
  picture = "\A3\weapons_F\data\UI\m_30stanag_CA.paa";
  model = "\A3\weapons_F\ammo\mag_univ.p3d";
  descriptionShort = "Caliber: 6mm BB<br/>Rounds: 30<br/>weight: 0.25g";
  displayNameMFDFormat = "6mmBB";

};


class 20Rnd_762x51_Mag;
class ArG_20Rnd_762x51_BB_02: 20Rnd_762x51_Mag
  {
    author="Rodeostar42";
  displayName = "20Rnd 762x51 6mmBB 0.2g";
  scope = 2;
  ammo = ArG_6mm_BB_02; //eg
  count = 20;
  initSpeed = 100; // in case it is not in weapon
  tracersEvery=1;
  class ItemInfo
        {
              mass = 1;
        };
  model = "\A3\weapons_F\ammo\mag_univ.p3d";
  picture = "\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
  descriptionShort = "Caliber: 6mm BB<br/>Rounds: 20<br/>weight: 0.2g";
  displayNameMFDFormat = "6mmBB";

};

class ArG_20Rnd_762x51_BB_025: 20Rnd_762x51_Mag
  {
    author="Rodeostar42";
  displayName = "20Rnd 762x51 6mmBB 0.25g";
  scope = 2;
  ammo = ArG_6mm_BB_025; //eg
  count = 20;
  initSpeed = 100; // in case it is not in weapon
  tracersEvery=1;
  class ItemInfo
        {
              mass = 1;
        };
  model = "\A3\weapons_F\ammo\mag_univ.p3d";
  picture = "\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
  descriptionShort = "Caliber: 6mm BB<br/>Rounds: 20<br/>weight: 0.25g";
  displayNameMFDFormat = "6mmBB";

};

class ArG_90Rnd_762x51_BB: 20Rnd_762x51_Mag
  {
    author="Rodeostar42";
  displayName = "90Rnd 762x51 6mmBB 0.2g";
  scope = 2;
  ammo = ArG_6mm_BB_02; //eg
  count = 90;
  initSpeed = 100; // in case it is not in weapon
  tracersEvery=1;
  class ItemInfo
        {
              mass = 1;
        };
  model = "\A3\weapons_F\ammo\mag_univ.p3d";
  picture = "\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
  descriptionShort = "Caliber: 6mm BB<br/>Rounds: 90<br/>weight: 0.2g";
  displayNameMFDFormat = "6mmBB";

};

class ArG_540Rnd_762x51_BB: 20Rnd_762x51_Mag
  {
    author="Rodeostar42";
  displayName = "540Rnd 762x51 6mmBB 0.2g";
  scope = 2;
  ammo = ArG_6mm_BB_02; //eg
  count = 540;
  initSpeed = 100; // in case it is not in weapon
  tracersEvery=1;
  class ItemInfo
        {
              mass = 1;
        };
        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        picture = "\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
  descriptionShort = "Caliber: 6mm BB<br/>Rounds: 540<br/>weight: 2.0g";
  displayNameMFDFormat = "6mmBB";

};


class 200Rnd_65x39_cased_Box;
class ArG_200Rnd_65x39_cased_Box_BB_02: 200Rnd_65x39_cased_Box
  {
    author="Rodeostar42";
  displayName = "200Rnd 65x39 6mmBB 0.2g";
  scope = 2;
  ammo = ArG_6mm_BB_02; //eg
  count = 200;
  initSpeed = 100; // in case it is not in weapon
  tracersEvery=1;
  class ItemInfo
        {
              mass = 1;
        };
  model = "\A3\weapons_F\ammo\mag_univ.p3d";
  picture = "\A3\Weapons_F\Data\UI\M_200Rnd_65x39_CA.paa";
  descriptionShort = "Caliber: 6mm BB<br/>Rounds: 200<br/>weight: 0.2g";
  displayNameMFDFormat = "6mmBB";

};

class ArG_200Rnd_65x39_cased_Box_BB_025: 200Rnd_65x39_cased_Box
  {
    author="Rodeostar42";
  displayName = "200Rnd 65x39 6mmBB 0.25g";
  scope = 2;
  ammo = ArG_6mm_BB_025; //eg
  count = 200;
  initSpeed = 100; // in case it is not in weapon
  tracersEvery=1;
  class ItemInfo
        {
              mass = 1;
        };
        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        picture = "\A3\Weapons_F\Data\UI\M_200Rnd_65x39_CA.paa";
  descriptionShort = "Caliber: 6mm BB<br/>Rounds: 200<br/>weight: 0.25g";
  displayNameMFDFormat = "6mmBB";

};


};
