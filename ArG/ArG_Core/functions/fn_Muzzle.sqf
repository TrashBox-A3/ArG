
private "_EV";
_EV = _this select 0;

  while{primaryWeaponItems _EV select 0 == ""}do{


   systemChat"do";



     _EV addPrimaryWeaponItem "ArG_muzzle_snds_H";

     waituntil{primaryWeaponItems _EV select 0 == ""};


 };
