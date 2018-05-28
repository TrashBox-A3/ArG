///script by Rodeostar42///
private ["_unit","_Hited"];

_this setVariable ["_Hited",0,false];
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

   if ((isPlayer _x)&&(typeOf _x in _Gamer)&&(_this getvariable "_Hited" == 0)) then
   {
      _this addMPEventHandler ["MPHit", {{

      _this allowDamage false;

      _this setCaptive true;

      _this setVariable ["_Hited",1,false];

      _this say3D "HitCall";

      _this switchCamera "EXTERNAL";

      _this addEventHandler ["HandleDamage", {0}];

      _this switchMove "Acts_JetsMarshallingRight_loop";

     [] spawn
      {
	     sleep 2;
	     _this switchMove "ApanPknlMstpSnonWnonDnon_G01";
      };

  SaftyID = [_this, "Back to Safety zone",
  "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_forceRespawn_ca.paa",
  "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa",
  "true", "true",
 {},{},{

   switch (playerSide) do {

 case west: {
     titletext ["","BLACK IN",2];
     _Bmarker = getMarkerType "B_Safe";
     if(isnil (_Bmarker))then{
     _this setPos (getMarkerPos "B_Safe");
     sleep 0.2;
     _this switchMove "";
     _this allowDamage true;
     _this setCaptive false;
     _this setVariable ["_Hited",0,false];
     [ _this,SaftyID ] call BIS_fnc_holdActionRemove;
   };
 };
 case east: {
     titletext ["","BLACK IN",2];
     _Rmarker = getMarkerType "R_Safe";
     if(isnil (_Rmarker))then{
     _this setPos (getMarkerPos "R_Safe");
     sleep 0.2;
     _this switchMove "";
     _this allowDamage true;
     _this setCaptive false;
     _this setVariable ["_Hited",0,false];
     [ _this,SaftyID ] call BIS_fnc_holdActionRemove;
     };
 };
 case resistance: {
     titletext ["","BLACK IN",2];
     _Gmarker = getMarkerType "G_Safe";
     if(isnil (_Gmarker))then{
     _this setPos (getMarkerPos "G_Safe");
     sleep 0.2;
     _this switchMove "";
     _this allowDamage true;
     _this setCaptive false;
     _this setVariable ["_Hited",0,false];
     [ _this,SaftyID ] call BIS_fnc_holdActionRemove;
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
