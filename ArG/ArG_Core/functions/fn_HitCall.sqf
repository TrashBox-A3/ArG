///script by Rodeostar42///

 {

player addEventHandler ["HitPart", {

 player setCaptive true;

player say3D "HitCall";

 player switchCamera "EXTERNAL";

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
        "HIT",
        0,
        0.08,
        "TahomaB"
    ];
};



player removeEventHandler ["HitPart", 0];

}];


} forEach allUnits;


{
  if if(!isPlayer _x ) then
  {
      _x addEventHandler ["Hit", {[_this select 0, _this select 3] execVM "ArG_Core\functions\fn_hit.sqf";}];

   _x setUnitPos "UP";
  };
} forEach allUnits-switchableUnits-playableUnits;
