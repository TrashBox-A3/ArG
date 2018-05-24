private ["_Buzz","_types","_Speakers"];



_types = [
"ArG_Speaker",
"ArG_BuzzerBox"
];



if (STATE) then
{
    STATE = false;



}else{
    STATE = true;


};

for [{_i=0},{_i < (count _types)},{_i=_i+1}] do
{

    _Speakers = getPos player nearObjects [count _types > 0 select _i , 300];
    sleep 0.7;

    while {STATE} do

    {

        {_x say3D "Buzzer"} forEach _Speakers;
        sleep 5;

    };

};
