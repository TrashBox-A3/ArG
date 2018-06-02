///script by Rodeostar42///

private ["_unit","_Hited"];

_unit = player;

_unit setVariable ["_Hited",0,false];

_Gamer = [
"ArG_Gamer_1",
"ArG_Gamer_2",
"ArG_Gamer_3",
"ArG_Gamer_4",
"ArG_Gamer_5",
"ArG_Gamer_6",
"ArG_Gamer_7",
"ArG_Gamer_8",
"ArG_Gamer_9",
"ArG_Gamer_10",
"ArG_Gamer_11",
"ArG_Gamer_12"
];

 {

   if ((isPlayer _x)&&(typeOf _x in _Gamer)&&(_unit getvariable "_Hited" == 0)) then

   {
      _x addMPEventHandler ["MPHit", {

      _x allowDamage false;


          _x setCaptive true;

      _x setVariable ["_Hited",1,false];

      _x say3D "HitCall";
      if ( (difficultyOption "thirdPersonView")isEqualTo 1) then
      	  {
            _x switchCamera "EXTERNAL";
          };
      _x addEventHandler ["HandleDamage", {0}];
      _x disableAI "ANIM";
      _x switchMove "Acts_JetsMarshallingRight_loop";

     [] spawn
      {
	     sleep 2;
	     _x switchMove "ApanPknlMstpSnonWnonDnon_G01";
      };

  SaftyID = [_x, "Back to Safety zone",
  "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_forceRespawn_ca.paa",
  "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa",
  "true", "true",
 {},{},{

   switch (playerSide) do {

 case west: {
     titletext ["","BLACK IN",2];
     _Bmarker = getMarkerType "B_Safe";
     if(isnil (_Bmarker))then{
     player setPos (getMarkerPos "B_Safe");
     sleep 0.2;
     player switchMove "";
     player allowDamage true;
     player setCaptive false;
     player setVariable ["_Hited",0,false];
     [ player,SaftyID ] call BIS_fnc_holdActionRemove;
   };
 };
 case east: {
     titletext ["","BLACK IN",2];
     _Rmarker = getMarkerType "R_Safe";
     if(isnil (_Rmarker))then{
     player setPos (getMarkerPos "R_Safe");
     sleep 0.2;
     player switchMove "";
     player allowDamage true;
     player setCaptive false;
     player setVariable ["_Hited",0,false];
     [ player,SaftyID ] call BIS_fnc_holdActionRemove;
     };
 };

};
   },
 {}, [], 10, nil, true, false
 ] call BIS_fnc_holdActionAdd;


}];

};
} forEach _unit;
