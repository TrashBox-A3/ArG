_types = [
"ArG_Speaker",
"ArG_BuzzerBox"
];



if (STATE) then
{
    STATE = false;
BZ say3D "Switch";
}else{
    STATE = true;
BZ say3D "Switch";
};

for [{_i=0},{_i < (count _types)},{_i=_i+1}] do
{

    _Speakers = getMarkerPos "GameArea" nearObjects [_types select _i , 200];
    sleep 0.7;

    while {STATE} do
    {
        {_x say3D "Buzzer"} forEach _Speakers;
        sleep 5;
    };

};
