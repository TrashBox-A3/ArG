
trg = createTrigger ["EmptyDetector", getPos USA];
trg setTriggerArea [0, 0, 0, false];
trg setTriggerActivation ["NONE", "PRESENT", true];
trg setTriggerStatements ["(typeOf cursorObject == 'ArG_BuzzerBox')" ,"0 = [player,'Time Counter',
'\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa',
'\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_hack_ca.paa',
'_this distance _target < 3',
'_caller distance _target < 3',
{},
{},
{ []execVM  'ArG_Core\functions\fn_BuzzerBox.sqf'},
{missionNamespace setVariable ['Wait',1,true];},
[],
2,
0,
false,
false
]call BIS_fnc_holdActionAdd;
};","[ player,0 ] call BIS_fnc_holdActionRemove;"];
