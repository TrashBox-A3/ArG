params [
    ["_logic", objNull, [objNull]],
    "_time","_MaxTime"
    ];

    #define Def_Time 300
    #define Def_Max 600

    // Define variables
_time = _logic getVariable ["Def_Time",Def_Time];
_MaxTime = _logic getVariable ["Def_Max",Def_Max];


while {true} do {


  while {_time > 0} do {

    call {
    	if (missionNamespace getvariable "Buzz" == 0) exitWith {

    	_time = _time - 1;
    	hintSilent format["CountDown Time Remaining \n %1", [((_time)/60)+.01,"HH:MM"] call BIS_fnc_timetostring];
    	sleep 1;

           if (_time <= 0) then {

           CountDown = true;PublicVariable"CountDown";

             };
    	};

    	if (((missionNamespace getvariable "Buzz" == 1)&&(_time < _MaxTime))) exitWith {

    	  _time = _time + 1;
              hintSilent format["CountUp  \n %1", [((_time)/60)+.01,"HH:MM"] call BIS_fnc_timetostring];
              sleep 1;

             if ((_time >= _MaxTime)) then {

             CountUp = true;PublicVariable"CountUp";
             };
    	};

    	if (((missionNamespace getvariable "Wait" == 1))) exitWith {

             _time = _time + 0;
             hintSilent format["CountWait  \n %1", [((_time)/60)+.01,"HH:MM"] call BIS_fnc_timetostring];
             sleep 1;
             systemChat "wait";

             CountWait = true;PublicVariable"CountWait";
    	};

        };

};
};
sleep 0.1;
