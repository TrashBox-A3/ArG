if (!isDedicated) then {waitUntil {!isNull player && isPlayer player};};

Ready = false;
sleep 0.2;
STATE = false;
sleep 0.2;
[]execVM "ArG_Core\functions\fn_Muzzle.sqf";
sleep 0.2;
[]execVM "ArG_Core\functions\fn_Count.sqf";
