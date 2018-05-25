private ["_Buzz","_types","_Speakers"];

_types = [
"ArG_Speaker"

];



if ("Buzz") then
{

    missionNamespace setVariable ["Buzz",1,true];

}else{

    missionNamespace setVariable ["Buzz",0,true];

}else{

    missionNamespace setVariable ["Buzz",2,true];

};
for [{_i=0},{_i < (count _types)},{_i=_i+1}] do
{

    _Speakers = getPos player nearObjects [_types select _i , 300];
    sleep 0.7;

    while {missionNamespace getvariable "Buzz" == 0} do

    {

        {_x say3D "Buzzer";_x setDamage 0} forEach _Speakers;
        sleep 5;

    };

    while {missionNamespace getvariable "Buzz" == 1} do

    {

        {_x say3D "Buzzer2";_x setDamage 0} forEach _Speakers;
        sleep 10;

    };

    while {missionNamespace getvariable "Buzz" == 2} do

    {

        {_x setDamage 1} forEach _Speakers;
        sleep 10;

    };

};
