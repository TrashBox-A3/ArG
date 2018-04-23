///script by Rodeostar42///



 {

   if (isPlayer _x ) then
   {

player addMPEventHandler ["MPHit", {

 player setCaptive true;

 player setDamage 0;

player say3D "HitCall";

 player switchCamera "EXTERNAL";

 if((damage player)>0.1)then{

player setDamage 0;

};

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





}];

player addEventHandler ["HandleDamage", {0}];

};
} forEach allUnits;
