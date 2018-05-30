
params ["_ArGGamer","_AIHited"];

_ArGGamer = [
"ArG_Gamer_1",
"ArG_Gamer_2",
"ArG_Gamer_3",
"ArG_Gamer_4",
"ArG_Gamer_5",
"ArG_Gamer_6",
"ArG_Gamer_7",
"ArG_Gamer_8",
"ArG_Gamer_9",
"ArG_Gamer_10",
"ArG_Gamer_11",
"ArG_Gamer_12"
];


if ((typeOf _x in _ArGGamer)) then {

  while{primaryWeaponItems _ArGGamer select 0 == ""}do{

    _AIHited = _this select 0;
    _ArGGamer = _this select 1;
    systemChat"do";
    _ArGGamer addPrimaryWeaponItem "ArG_muzzle_snds_H";

     waituntil{primaryWeaponItems _ArGGamer select 0 == ""};
    };

 };
