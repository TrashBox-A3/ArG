
STATE = false;

B_Safe_trg = createTrigger ["EmptyDetector", getMarkerPos "B_Safe"];
B_Safe_trg setTriggerArea [10, 10, 0, true];
B_Safe_trg setTriggerActivation ["WEST", "PRESENT", true];
B_Safe_trg setTriggerStatements ["this && player switchMove "";
player setCaptive false;
player setVariable ['Hited',0,true];","hint ''","hint ''"];

R_Safe_trg = createTrigger ["EmptyDetector", getMarkerPos "R_Safe"];
R_Safe_trg setTriggerArea [10, 10, 0, true];
R_Safe_trg setTriggerActivation ["EAST", "PRESENT", true];
R_Safe_trg setTriggerStatements ["this && player switchMove "";
player setCaptive false;
player setVariable ['Hited',0,true];","hint ''","hint ''"];

G_Safe_trg = createTrigger ["EmptyDetector", getMarkerPos "G_Safe"];
G_Safe_trg setTriggerArea [10, 10, 0, true];
G_Safe_trg setTriggerActivation ["resistance", "PRESENT", true];
G_Safe_trg setTriggerStatements ["this && player switchMove "";
player setCaptive false;
player setVariable ['Hited',0,true];","hint ''","hint ''"];
