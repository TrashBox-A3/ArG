private ["_Buzz","_types","_Speakers","_time"];

_time = 600;

_types = [
"ArG_Speaker",
"ArG_BuzzerBox"
];



if (STATE) then
{
    STATE = false;
    missionNamespace setVariable ["Buzz",nil];

    if ((_time < 600)) then {
      _time = _time + 1;
      hintSilent format["侵入者は排除した \n %1", [((_time)/60)+.01,"HH:MM"] call BIS_fnc_timetostring];
      sleep 1;
    };


}else{
    STATE = true;
    missionNamespace setVariable ["Buzz",true];


    while {_time > 0} do {
  	_time = _time - 1;
  	hintSilent format["Defence Areaに侵入されている!! \n %1", [((_time)/60)+.01,"HH:MM"] call BIS_fnc_timetostring];
  	sleep 1;

    if (_time <= 0) then {

      hint "もう無理です母上様";
      sleep 5;

        cuttext ["防ぎ切れなかった......","PLAIN",10];

        "Looser" call BIS_fnc_endMission;ForceEND;
    };



for [{_i=0},{_i < (count _types)},{_i=_i+1}] do
{

    _Speakers = getPos player nearObjects [_types select _i , 300];
    sleep 0.7;

    while {STATE} do

    {

        {_x say3D "Buzzer"} forEach _Speakers;
        sleep 5;

    };

};
