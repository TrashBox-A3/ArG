
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
		class Remove_Weapons {postInit = 2};
		class HitCall {postInit = 3};
		class Ai_HitCall {postInit = 4};
		class Muzzle {postInit = 5};
		class BuzzerBox {};
		class Count {};
		class Starter {};
    class Revive {};

	};

	};
};
