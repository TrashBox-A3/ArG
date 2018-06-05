if (!isDedicated) then {waitUntil {!isNull player && isPlayer player};};

missionNamespace setVariable ["ST1",0,true];
missionNamespace setVariable ["ST2",0,true];
STATE = false;
[]execVM "ArG_Core\functions\fn_Remove_Weapons.sqf";
[]execVM "ArG_Core\functions\fn_Muzzle.sqf";


systemChat "ArG(Dev) ver0.7.3";
