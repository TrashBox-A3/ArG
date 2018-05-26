private ["_Buzz","_types","_Speakers"];

_types = [
"ArG_Speaker"

];



if (STATE) then
{
    STATE = false;
    missionNamespace setVariable ["Buzz",1,true];
    systemChat"Count Down";
}else{
    STATE = true;
    missionNamespace setVariable ["Buzz",0,true];
    systemChat"Count Up";
};
for [{_i=0},{_i < (count _types)},{_i=_i+1}] do
{

    _Speakers = getPos player nearObjects [_types select _i , 300];
    sleep 0.7;

    while {missionNamespace getvariable "Buzz" == 0} do

    {

        {
          _x setDamage 1;
          sleep 0.1;
          _x setDamage 0;
          _x say3D "Buzzer"
        } forEach _Speakers;
        sleep 5;

    };

    while {missionNamespace getvariable "Buzz" == 1} do

    {

       {
         _x setDamage 1;
         sleep 0.1;
         _x setDamage 0;
         _x say3D "Buzzer2"
       } forEach _Speakers;
         sleep 12;

    };

};
