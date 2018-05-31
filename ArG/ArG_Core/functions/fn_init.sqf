if (!isDedicated) then {waitUntil {!isNull player && isPlayer player};};

STATE = false;
missionNamespace setVariable ["Wait",1,true];


[]execVM "ArG_Core\functions\fn_Muzzle.sqf";

[]execVM "ArG_Core\functions\fn_Count.sqf";

[]execVM "ArG_Core\functions\fn_CounterBox.sqf";
