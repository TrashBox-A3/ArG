///script by Rodeostar42///
player setVariable ["Hited",0,true];
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

   if ((isPlayer _x)&&(typeOf _x in _Gamer)&&(player getvariable "Hited" == 0)) then
   {
      player addMPEventHandler ["MPHit", {{

      player allowDamage false;

      player setCaptive true;

      player setVariable ["Hited",1,true];

      player say3D "HitCall";

      player switchCamera "EXTERNAL";

      player addEventHandler ["HandleDamage", {0}];

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

   switch (playerSide) do {

 case west: {
   if(!isnil "B_Safe")then{
     titletext ["","BLACK IN",2];
     if(!isnil "B_Safe")then{
     player setPos (getMarkerPos "B_Safe");
     sleep 0.2;
     player switchMove "";
     player allowDamage true;
     player setCaptive false;
     player setVariable ["Hited",0,true];
     [ player,SaftyID ] call BIS_fnc_holdActionRemove;
   };
 };
 case east: {

   if(!isnil "R_Safe")then{
     titletext ["","BLACK IN",2];
     player setPos (getMarkerPos "R_Safe");
     sleep 0.2;
     player switchMove "";
     player allowDamage true;
     player setCaptive false;
     player setVariable ["Hited",0,true];
     [ player,SaftyID ] call BIS_fnc_holdActionRemove;
     };
 };
 case resistance: {
   if(!isnil "G_Safe")then{
     titletext ["","BLACK IN",2];
     player setPos (getMarkerPos "G_Safe");
     sleep 0.2;
     player switchMove "";
     player allowDamage true;
     player setCaptive false;
     player setVariable ["Hited",0,true];
     [ player,SaftyID ] call BIS_fnc_holdActionRemove;
     };
};
};
   },
 {}, [], 5, nil, true, false
 ] call BIS_fnc_holdActionAdd;
} remoteExec ["call", _this select 3]

}];

};
} forEach allUnits;
