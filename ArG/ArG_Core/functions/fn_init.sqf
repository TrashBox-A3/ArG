if (!isDedicated) then {waitUntil {!isNull player && isPlayer player};};

START = false;
STATE = false;

[]execVM "ArG_Core\functions\fn_Muzzle.sqf";

[]execVM "ArG_Core\functions\fn_Count.sqf";
