if (!isDedicated) then {waitUntil {!isNull player && isPlayer player};};

missionNamespace setVariable ["ST1",0,true];
missionNamespace setVariable ["ST2",0,true];
STATE = false;

[[[],"ArG_Core\functions\fn_Count.sqf"], "BIS_fnc_execVM", true,true] call BIS_fnc_MP;

systemChat "ArG(Dev) ver0.7.3";
