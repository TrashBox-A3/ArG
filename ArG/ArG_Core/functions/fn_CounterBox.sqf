
trg = createTrigger ["EmptyDetector", getPos player];
trg setTriggerArea [0, 0, 0, false];
trg setTriggerActivation ["NONE", "PRESENT", true];
trg setTriggerStatements ["(typeOf cursorObject == 'ArG_BuzzerBox')",
"_Blue = [
'ArG_Gamer_1',
'ArG_Gamer_2',
'ArG_Gamer_3',
'ArG_Gamer_4'
];

_Red = [
'ArG_Gamer_5',
'ArG_Gamer_6',
'ArG_Gamer_7',
'ArG_Gamer_8'
];

_Green = [
'ArG_Gamer_9',
'ArG_Gamer_10',
'ArG_Gamer_11',
'ArG_Gamer_12'
];

if (((isPlayer _x)&&(typeOf _x in _Brue))&&
((missionNamespace getvariable 'Buzz' == 0)or
(missionNamespace getvariable 'Wait' == 1))) then{

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
]call BIS_fnc_holdActionAdd;};

  if (((isPlayer _x)&&(typeOf _x in _Red))&&
  ((missionNamespace getvariable 'Buzz' == 1)or
  (missionNamespace getvariable 'Wait' == 1))) then{

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
  ]call BIS_fnc_holdActionAdd;};

  if (((isPlayer _x)&&(typeOf _x in _Green))&&
  ((missionNamespace getvariable 'Buzz' == 0)or
  (missionNamespace getvariable 'Wait' == 1))) then{

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
  ]call BIS_fnc_holdActionAdd;}",
  "if(typeOf cursorObject != 'ArG_BuzzerBox')then{
    [ player,Hold ] call BIS_fnc_holdActionRemove;
  };"
  ];
