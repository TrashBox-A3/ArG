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



 {

   if ((isPlayer _x)&&(typeOf _x in _Gamer)&&(player getvariable "_Hited" == 0)) then{



      player addMPEventHandler ["MPHit", {

          player allowDamage false;
          player setCaptive true;
          player setVariable ["_Hited",1,false];
          [ player,Rodeo ] call BIS_fnc_holdActionRemove;
          player say3D "HitCall";
      if ( (difficultyOption "thirdPersonView")isEqualTo 1) then
      	  {
            player switchCamera "EXTERNAL";
          };
          player addEventHandler ["HandleDamage", {0}];
<<<<<<< HEAD

=======
          player disableAI "ANIM";
>>>>>>> parent of 74a63ab... dwdwdwdw
          player switchMove "Acts_JetsMarshallingRight_loop";
          player disableAI "ANIM";
     [] spawn
      {
	     sleep 2;
	     player playMoveNow "ApanPknlMstpSnonWnonDnon_G01";
      };



      if((MarkerType "B_Safe" != "")or(MarkerType "R_Safe" != ""))then{

  SaftyID = [player, "Back to Safety zone",
  "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_forceRespawn_ca.paa",
  "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa",
  "true", "true",
 {},{},{

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

   switch (true) do {
{
 case ((isPlayer _x)&&(typeOf _x in _BGamer)):
     titletext ["","BLACK IN",2];
     if(MarkerType "B_Safe" != "")then{
     player setPos (getMarkerPos "B_Safe");
     sleep 0.2;
     player switchMove "";
     player allowDamage true;
     player setCaptive false;
     player setVariable ["_Hited",0,false];
     [ player,SaftyID ] call BIS_fnc_holdActionRemove;
   };


 case ((isPlayer _x)&&(typeOf _x in _RGamer)):
     titletext ["","BLACK IN",2];
     if(MarkerType "R_Safe" != "")then{
     player setPos (getMarkerPos "R_Safe");
     sleep 0.2;
     player switchMove "";
     player allowDamage true;
     player setCaptive false;
     player setVariable ["_Hited",0,false];
     [ player,SaftyID ] call BIS_fnc_holdActionRemove;
   };


}forEach allPlayers;
};
   },
 {}, [], 2, nil, true, false
 ] call BIS_fnc_holdActionAdd;
};

}];

};

} forEach allPlayers;
