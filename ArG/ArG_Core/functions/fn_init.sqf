if (!isDedicated) then {waitUntil {!isNull player && isPlayer player};};

STATE = false;
missionNamespace setVariable ["Buzz",1,true];
[]execVM "ArG_Core\functions\fn_CountDown.sqf";
