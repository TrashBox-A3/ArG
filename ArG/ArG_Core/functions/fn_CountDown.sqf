systemChat"script done";

// Argument 0 is module logic.
_logic = param [0,objNull,[objNull]];
// Argument 1 is list of affected units (affected by value selected in the 'class Units' argument))
_units = param [1,[],[[]]];
// True when the module was activated, false when it's deactivated (i.e., synced triggers are no longer active)
_activated = param [2,true,[true]];

// Module specific behavior. Function can extract arguments from logic and use them.
if (_activated) then {
	 _time = _logic getVariable ["Time",300]; //(as per the previous example, but you can define your own.)
	};

// Module function is executed by spawn command, so returned value is not necessary.
// However, it's a good practice to include one.
true;


private "_time";
_time = 20;



while {true} do {


  while {_time > 0} do {

if (missionNamespace getvariable "Buzz" == 0) then {


	_time = _time - 1;
	hintSilent format["CountDown Time Remaining \n %1", [((_time)/60)+.01,"HH:MM"] call BIS_fnc_timetostring];
	sleep 1;

  if (_time <= 0) then {

    hint "GameOver! Win to CountDown";
    CountDown = true;PublicVariable"CountDown";
    sleep 5;

      cuttext ["Enjoy it even if you win or lose!","PLAIN",10];

      "end1" call BIS_fnc_endMission;ForceEND;
  };

}

else

{

if ((missionNamespace getvariable "Buzz" == 1)&&(_time < 180)) then {

  _time = _time + 1;
  hintSilent format["Recovered & Count Up \n %1", [((_time)/60)+.01,"HH:MM"] call BIS_fnc_timetostring];
  sleep 1;
};

};

if ((_time >= 180)) then {

  hint"GameOver! Win to CountUp";
  CountUp = true;PublicVariable"CountUp";
  sleep 5;

    cuttext ["Enjoy it even if you win or lose!","PLAIN",10];

    "end1" call BIS_fnc_endMission;ForceEND;
};


};
};
