
class CfgFunctions
{

tag = "ArG";
class ArG
{

	class State
  {
	file = "\ArG_Core\functions";
	class init {postInit = 1;};

  };

	class Script
	{
		file = "\ArG_Core\functions";
		class HitCall {};
		class Ai_HitCall {postInit = 1};
		class Muzzle {};
		class BuzzerBox {};
		class Count {};
		class Starter {};
    class Revive {};
		class Remove_Weapons {};
		class initPlayerLocal {postInit = 1;};
	};

	};
};
