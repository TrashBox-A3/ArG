///script by Rodeostar42///

private ["_unit","_Hited"];
_unit = [_this,0,player,[objNull]] call BIS_fnc_param;


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

          player switchMove "Acts_JetsMarshallingRight_loop";
          player disableAI "ANIM";
     [] spawn
      {
	     sleep 2;
	     player playMoveNow "ApanPknlMstpSnonWnonDnon_G01";
      };

      allowFire = true;

player addAction ["", {
    playSound3D ['a3\sounds_f\weapons\Other\dry9.wss', _this select 0];
}, "", 0, false, true, "DefaultAction", "isNil 'allowFire'"];

KK_fnc_playerWeaponMulfunction = {
    _frame = diag_frameno;
    _wep = currentWeapon _this;
    _ammo = _this ammo _wep;
    if (_ammo > 0) then {
        allowFire = nil;
        _this setAmmo [_wep, 0];
        waitUntil {_frame < diag_frameno};
        _this setAmmo [_wep, _ammo];
        hint "Jammed!";
    };
};

NoFire = player addEventHandler ["Fired", {
    if (true) then {
        player spawn KK_fnc_playerWeaponMulfunction
    };
}];

player addEventHandler ["Take", {
    if (typeOf (_this select 1) select [0,6] == "Supply") then {
        hint "Un-Jammed!";
        allowFire = true;
    };
}];



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


{
 if ((isPlayer _x)&&(typeOf _x in _BGamer))then{
     titletext ["","BLACK IN",2];
     if(MarkerType "B_Safe" != "")then{
     player setPos (getMarkerPos "B_Safe");
     sleep 0.2;
     if ( (difficultyOption "thirdPersonView")isEqualTo 1) then
         {
           player switchCamera "INTERNAL";
         };
     player switchMove "";
     player allowDamage true;
     player setCaptive false;
     player setVariable ["_Hited",0,false];
     player removeEventHandler ["Fired", NoFire];
     [ player,SaftyID ] call BIS_fnc_holdActionRemove;
   };
};

 if ((isPlayer _x)&&(typeOf _x in _RGamer))then{
     titletext ["","BLACK IN",2];
     if(MarkerType "R_Safe" != "")then{
     player setPos (getMarkerPos "R_Safe");
     sleep 0.2;
     if ( (difficultyOption "thirdPersonView")isEqualTo 1) then
         {
           player switchCamera "INTERNAL";
         };
     player switchMove "";
     player allowDamage true;
     player setCaptive false;
     player setVariable ["_Hited",0,false];
     player removeEventHandler ["Fired", NoFire];
     [ player,SaftyID ] call BIS_fnc_holdActionRemove;
   };
};

}forEach allPlayers;

   },
 {}, [], 10, nil, true, false
 ] call BIS_fnc_holdActionAdd;
};

}];

};

} forEach allPlayers;
