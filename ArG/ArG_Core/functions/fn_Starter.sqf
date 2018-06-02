
if(START)then{

START = false;
missionNamespace setVariable ["ST1",1,true];
}
else
{
START = true;
missionNamespace setVariable ["ST2",1,true];
};

if(true)then{


if(missionNamespace getvariable "ST1" == 1)then{
    systemChat "BlueTeam Ready";
  };
   if(missionNamespace getvariable "ST2" == 1)then{
       systemChat "RedTeam Ready";
  };

systemChat "Game Ready";

};
