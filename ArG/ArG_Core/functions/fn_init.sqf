if (!isDedicated) then {waitUntil {!isNull player && isPlayer player};};

STATE = false;

[]execVM "ArG_Core\functions\fn_CountDown.sqf";
