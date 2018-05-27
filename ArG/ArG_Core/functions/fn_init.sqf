
STATE = false;


trg = createTrigger ["EmptyDetector", getMarkerPos "B_Safe"];
trg setTriggerArea [10, 10, 0, true];
trg setTriggerActivation ["WEST", "PRESENT", true];
trg setTriggerStatements ["this","player setVariable ['Hited',0,true];","hint ''"];
];
