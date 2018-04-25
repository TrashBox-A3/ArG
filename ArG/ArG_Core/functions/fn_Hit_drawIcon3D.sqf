params ["_position"];

_position = _this select 0;

_position say3D "HitCall";

_position = _this select 0;

_position setCaptive true;

_position addEventHandler ["HandleDamage", {0}];

_position switchMove "Acts_JetsMarshallingRight_loop";

_position playMoveNow "ApanPknlMstpSnonWnonDnon_G01";
