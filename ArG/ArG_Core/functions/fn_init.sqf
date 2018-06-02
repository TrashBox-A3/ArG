if (!isDedicated) then {waitUntil {!isNull player && isPlayer player};};

Ready = false;

STATE = false;
sleep 0.01;
[]execVM "ArG_Core\functions\fn_Muzzle.sqf";
