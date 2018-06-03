
{
if ((isPlayer _x)&&(typeOf _x in _BGamer))then{
      titletext ["","BLACK IN",2];
  if ( (difficultyOption "thirdPersonView")isEqualTo 1) then
     {
       player switchCamera "INTERNAL";
     };
     player switchMove "";
     player allowDamage true;
     player setCaptive false;
     player setVariable ["_Hited",0,false];
      if(MarkerType "B_Safe" != "")then{
         [player,SaftyID] call BIS_fnc_holdActionRemove;
        };
       };

  if ((isPlayer _x)&&(typeOf _x in _RGamer))then{
        titletext ["","BLACK IN",2];
     if ( (difficultyOption "thirdPersonView")isEqualTo 1) then
         {
           player switchCamera "INTERNAL";
         };
        player switchMove "";
        player allowDamage true;
        player setCaptive false;
        player setVariable ["_Hited",0,false];
         if(MarkerType "R_Safe" != "")then{
            [ player,SaftyID ] call BIS_fnc_holdActionRemove;
          };
         };

      }forEach allPlayers;
