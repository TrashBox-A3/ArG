if (!isDedicated) then {waitUntil {!isNull player && isPlayer player};};

STATE = false;



[]execVM "ArG_Core\functions\fn_Muzzle.sqf";

[]execVM "ArG_Core\functions\fn_Count.sqf";
