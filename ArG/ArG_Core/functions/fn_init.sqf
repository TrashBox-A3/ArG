if (!isDedicated) then {waitUntil {!isNull player && isPlayer player};};

Ready = false;

STATE = false;

[]execVM "ArG_Core\functions\fn_Muzzle.sqf";
