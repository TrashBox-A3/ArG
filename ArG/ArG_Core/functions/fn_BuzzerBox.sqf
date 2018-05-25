private ["_Buzz","_types","_Speakers"];

_types = [
"ArG_Speaker"

];



if (STATE) then
{
    STATE = 0;
    missionNamespace setVariable ["Buzz",1,true];

}else{
    STATE = 1;
    missionNamespace setVariable ["Buzz",0,true];

};
for [{_i=0},{_i < (count _types)},{_i=_i+1}] do
{

    _Speakers = getPos player nearObjects [_types select _i , 300];
    sleep 0.7;

    while {missionNamespace getvariable "Buzz" == 0} do

    {

        {_x say3D "Buzzer"} forEach _Speakers;
        sleep 5;

    };

    while {missionNamespace getvariable "Buzz" == 1} do

    {

        {_x say3D "Buzzer2"} forEach _Speakers;
        sleep 10;

    };

};
