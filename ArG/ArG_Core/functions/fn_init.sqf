if (!isDedicated) then {waitUntil {!isNull player && isPlayer player};};

STATE = 0;



[]execVM "ArG_Core\functions\fn_Muzzle.sqf";

[]execVM "ArG_Core\functions\fn_Count.sqf";

[]execVM "ArG_Core\functions\fn_CounterBox.sqf";
