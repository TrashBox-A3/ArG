///script by Rodeostar42///

private ["_unit","_Hited"];

_unit = player;

player setVariable ["_Hited",0,false];

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

_BGamer = [
"ArG_Gamer_1",
"ArG_Gamer_2",
"ArG_Gamer_3",
"ArG_Gamer_4"
];

_RGamer = [
"ArG_Gamer_5",
"ArG_Gamer_6",
"ArG_Gamer_7",
"ArG_Gamer_8"
];

 {

   if ((isPlayer _x)&&(typeOf _x in _Gamer)&&(player getvariable "_Hited" == 0)) then

   {
      player addMPEventHandler ["MPHit", {

      player allowDamage false;


          player setCaptive true;

      player setVariable ["_Hited",1,false];

      player say3D "HitCall";
      if ( (difficultyOption "thirdPersonView")isEqualTo 1) then
      	  {
            player switchCamera "EXTERNAL";
          };
      player addEventHandler ["HandleDamage", {0}];
      player disableAI "ANIM";
      player switchMove "Acts_JetsMarshallingRight_loop";

     [] spawn
      {
	     sleep 2;
	     player switchMove "ApanPknlMstpSnonWnonDnon_G01";
      };

  SaftyID = [player, "Back to Safety zone",
  "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_forceRespawn_ca.paa",
  "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa",
  "true", "true",
 {},{},{

   switch ((isPlayer _x)&&(typeOf _x in _Gamer)) do {

 case west: {
   if ((isPlayer _x)&&(typeOf _x in _BGamer))then{
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
 };
 case east: {
   if ((isPlayer _x)&&(typeOf _x in _RGamer))then{
     titletext ["","BLACK IN",2];
     _Rmarker = getMarkerType "R_Safe";
     if(isnil (_Rmarker))then{
     _this setPos (getMarkerPos "R_Safe");
     sleep 0.2;
     player switchMove "";
     player allowDamage true;
     player setCaptive false;
     player setVariable ["_Hited",0,false];
     [ player,SaftyID ] call BIS_fnc_holdActionRemove;
    };
   };
 };

};
   },
 {}, [], 10, nil, true, false
 ] call BIS_fnc_holdActionAdd;


}];

};
} forEach allUnits;
