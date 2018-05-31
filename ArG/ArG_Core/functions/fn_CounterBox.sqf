
trg = createTrigger ["EmptyDetector", getPos player];
trg setTriggerArea [0, 0, 0, false];
trg setTriggerActivation ["NONE", "PRESENT", true];
trg setTriggerStatements ["(typeOf cursorObject == 'ArG_BuzzerBox')",
"switch (playerSide) do {

 case west: {
if ((missionNamespace getvariable 'Buzz' == 0)or(missionNamespace getvariable 'Wait' == 1)) then{
     Hold = [player,'Time Counter',
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
]call BIS_fnc_holdActionAdd;};};


   };
 };
 case east: {

if ((missionNamespace getvariable 'Buzz' == 1)or(missionNamespace getvariable 'Wait' == 1)) then{
     Hold = [player,'Time Counter',
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
]call BIS_fnc_holdActionAdd;};};


     };
 };
 case resistance: {

if ((missionNamespace getvariable 'Buzz' == 0)or(missionNamespace getvariable 'Wait' == 1)) then{
     Hold = [player,'Time Counter',
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
]call BIS_fnc_holdActionAdd;};};
     };
   };

};",
"if(typeOf cursorObject != 'ArG_BuzzerBox')then{
[ player,Hold ] call BIS_fnc_holdActionRemove;}"
  ];
