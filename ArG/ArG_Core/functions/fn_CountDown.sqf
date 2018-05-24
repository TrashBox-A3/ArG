systemChat"script done";
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

  sleep 5;

    cuttext ["Enjoy it even if you win or lose!","PLAIN",10];

    "end1" call BIS_fnc_endMission;ForceEND;
};


};
};
