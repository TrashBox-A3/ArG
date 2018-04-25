///script by Rodeostar42///

params ["_Gamer","_Hit"];

_Hit = _this select 0;
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



   if ((isPlayer _x)&&(typeOf _x in _Gamer)) then
   {

_Hit addMPEventHandler ["MPHit", {

 _Hit setCaptive true;

 _Hit setDamage 0;

_Hit say3D "HitCall";

 _Hit switchCamera "EXTERNAL";

 _Hit addEventHandler ["HandleDamage", {0}];


 _Hit switchMove "Acts_JetsMarshallingRight_loop";


[] spawn
 {
	 sleep 2;
	 _Hit switchMove "ApanPknlMstpSnonWnonDnon_G01";

 };


onEachFrame {
    private "_private";
    _playerPos = getPosATL _Hit;
    drawIcon3D [
        "",
        [153,0,0,0.5],
        [_playerPos select 0,_playerPos select 1,2.3],
        5,
        5,
        direction _Hit,
        "HIT!",
        0,
        0.08,
        "TahomaB"
        ];
};


_Hit removeMPEventHandler ["MPHit", 0];

}];


};
