


SaftyID = [player, "Back to Safety zone",
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
   _this setPos (getMarkerPos "R_Safe");
   sleep 0.2;
   player switchMove "";
   player allowDamage true;
   player setCaptive false;
   player setVariable ["_Hited",0,false];
   [ player,SaftyID ] call BIS_fnc_holdActionRemove;
   };
};
case resistance: {
   titletext ["","BLACK IN",2];
   _Gmarker = getMarkerType "G_Safe";
   if(isnil (_Gmarker))then{
   player setPos (getMarkerPos "G_Safe");
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
