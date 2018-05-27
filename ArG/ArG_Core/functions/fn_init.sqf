if (!isDedicated) then {waitUntil {!isNull player && isPlayer player};};

STATE = false;
player setVariable ["Hited",0,true];
[]execVM "ArG_Core\functions\fn_CountDown.sqf";
