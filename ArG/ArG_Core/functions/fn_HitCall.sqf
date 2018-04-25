///script by Rodeostar42///
if (!isServer) exitWith {};

private ["_Hited","_Gamer"];

_Hited = _this select 0;
_Gamer = _this select 1;

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

_Hited addMPEventHandler ["MPHit", {

 _Hited setCaptive true;

 _Hited setDamage 0;

_Hited say3D "HitCall";

 _Hited switchCamera "EXTERNAL";

 _Hited addEventHandler ["HandleDamage", {0}];


 _Hited switchMove "Acts_JetsMarshallingRight_loop";


[] spawn
 {
	 sleep 2;
	 _Hited switchMove "ApanPknlMstpSnonWnonDnon_G01";

 };


onEachFrame {
    private "_private";
    _playerPos = getPosATL _Hited;
    drawIcon3D [
        "",
        [153,0,0,0.5],
        [_playerPos select 0,_playerPos select 1,2.3],
        5,
        5,
        direction _Hited,
        "HIT!",
        0,
        0.08,
        "TahomaB"
        ];
};


_Hited removeMPEventHandler ["MPHit", 0];

}];


};
} forEach _Gamer;
