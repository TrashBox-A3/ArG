///script by Rodeostar42///

private ["_unit","_Hited"];
player setVariable ["_Hited",0,false];

_Gamer = [
"ArG_Gamer_1",
"ArG_Gamer_2",
"ArG_Gamer_3",
"ArG_Gamer_4",
"ArG_Gamer_5",
"ArG_Gamer_6",
"ArG_Gamer_7",
"ArG_Gamer_8"
];



 {

   if ((isPlayer _x)&&(typeOf _x in _Gamer)&&(player getvariable "_Hited" == 0)) then{



      player addEventHandler ["Hit", {
             params ["_unit", "_source", "_damage", "_instigator"];
          player addEventHandler ["HandleDamage", {0}];

          if((side (_this select 3) == west)or(side (_this select 3) == east))then{
          _unit allowDamage false;
          _unit setCaptive true;
          _unit setVariable ["_Hited",1,false];
          [ _unit,Rodeo ] call BIS_fnc_holdActionRemove;
          [_unit, "HitCall", 10] call CBA_fnc_globalSay3d;
      if ( (difficultyOption "thirdPersonView")isEqualTo 1) then
      	  {
            _unit switchCamera "EXTERNAL";
          };

          _unit switchMove "Acts_JetsMarshallingRight_loop";
          _unit disableAI "ANIM";
     [] spawn
      {
	     sleep 2;
	     player playMoveNow "ApanPknlMstpSnonWnonDnon_G01";
      };
      while{((weaponState player select 3 != ""))}do{
       systemChat "Magazin Loop";
       player removePrimaryWeaponItem (currentMagazine player);

      sleep 0.2;
      waituntil{((weaponState player select 3 != ""))};
    };

      if((MarkerType "B_Safe" != "")or(MarkerType "R_Safe" != ""))then{

  SaftyID = [_unit, "Back to Safety zone",
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


{
 if ((isPlayer _x)&&(typeOf _x in _BGamer))then{
     titletext ["","BLACK IN",2];
     if(MarkerType "B_Safe" != "")then{
     _unit setPos (getMarkerPos "B_Safe");
     sleep 0.2;
     if ( (difficultyOption "thirdPersonView")isEqualTo 1) then
         {
           _unit switchCamera "INTERNAL";
         };
     _unit switchMove "";
     _unit allowDamage true;
     _unit setCaptive false;
     _unit setVariable ["_Hited",0,false];

     [ _unit,SaftyID ] call BIS_fnc_holdActionRemove;
   };
};

 if ((isPlayer _x)&&(typeOf _x in _RGamer))then{
     titletext ["","BLACK IN",2];
     if(MarkerType "R_Safe" != "")then{
     _unit setPos (getMarkerPos "R_Safe");
     sleep 0.2;
     if ( (difficultyOption "thirdPersonView")isEqualTo 1) then
         {
           _unit switchCamera "INTERNAL";
         };
     _unit switchMove "";
     _unit allowDamage true;
     _unit setCaptive false;
     _unit setVariable ["_Hited",0,false];

     [ _unit,SaftyID ] call BIS_fnc_holdActionRemove;
   };
};

}forEach allPlayers;

   },
 {}, [], 10, nil, true, false
 ] call BIS_fnc_holdActionAdd;
};
};
}];

};

} forEach allUnits;
