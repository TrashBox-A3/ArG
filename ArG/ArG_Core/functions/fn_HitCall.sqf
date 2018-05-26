///script by Rodeostar42///
missionNamespace setVariable ["Hited",0,true];
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

   if ((isPlayer _x)&&(typeOf _x in _Gamer)) then
   {

player addEventHandler ["Hit", {{


  inGameUISetEventHandler ["Action", "if ((_this select 3 == 'BuzzerAction') or (_this select 3 == 'MoveToPilot')) then
                   {hint 'あなたはJet Pilotでは無いのでこの操作は無効です';true}"];

 player setCaptive true;

 missionNamespace setVariable ["Hited",1,true];

 player setDamage 0;

player say3D "HitCall";

 player switchCamera "EXTERNAL";

 player addEventHandler ["HandleDamage", {0}];


 player switchMove "Acts_JetsMarshallingRight_loop";


[] spawn
 {
	 sleep 2;
	 player switchMove "ApanPknlMstpSnonWnonDnon_G01";

 };

 onEachFrame {
     private "_private";
     _playerPos = getPosATL player;
     drawIcon3D [
         "",
         [153,0,0,0.5],
         [_playerPos select 0,_playerPos select 1,2.3],
         5,
         5,
         direction player,
         "HIT!",
         0,
         0.08,
         "TahomaB"
         ];
 };




 [player, "Move Safety zone", "", "", "true", "true",
 {},{},{player setPos (getPos BlueSafty)},
 { hint "Afraid of death?" }, [], 3, nil, true, false
 ] call BIS_fnc_holdActionAdd;
} remoteExec ["call", _this select 3]

 player removeAllEventHandlers "Hit";

}];


};
} forEach allUnits;
