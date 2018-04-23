///script by Rodeostar42///

if (!isServer) then {

 {

_x addEventHandler ["HitPart", {

 _x setCaptive true;

_x say3D "HitCall";

 _x switchCamera "EXTERNAL";

 _x switchMove "Acts_JetsMarshallingRight_loop";


[] spawn
 {
	 sleep 2;
	 _x switchMove "ApanPknlMstpSnonWnonDnon_G01";

 };


onEachFrame {
    private "_private";
    _playerPos = getPosATL _x;
    drawIcon3D [
        "",
        [153,0,0,0.5],
        [_playerPos select 0,_playerPos select 1,2.3],
        5,
        5,
        direction _x,
        "HIT!",
        0,
        0.08,
        "TahomaB"
    ];
};



_x removeEventHandler ["HitPart", 0];

}];


} forEach allUnits;
};
