



titletext ["","BLACK IN",2];

if ( (difficultyOption "thirdPersonView")isEqualTo 1) then
    {
      player switchCamera "INTERNAL";
    };
player switchMove "";
player allowDamage true;
player setCaptive false;
player setVariable ["_Hited",0,false];
