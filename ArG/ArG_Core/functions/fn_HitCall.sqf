///script by Rodeostar42///
if (!isServer)  exitwith {};

   _Gamer = [
   "ArG_Gamer_1",
   "ArG_Gamer_2",
   "ArG_Gamer_3",
   "ArG_Gamer_4"
   ];


 {



 if ((typeOf _x in _Gamer)) then
   {

 player addEventHandler ["HitPart", {

 player setCaptive true;

player say3D "HitCall";

 player switchCamera "EXTERNAL";

 player switchMove "Acts_JetsMarshallingRight_loop";
 [] spawn
 {
	 sleep 5;
	 player playMove "ApanPknlMstpSnonWnonDnon_G01";

 };

 player forceWalk true;

Hit ="Land_HumanSkull_F" createVehicle position player;
Hit attachTo [player, [0, 0, 1.9]];
Hit setVectorDirAndUp [ [0, -1, 0], [0, 0, 1]];

player removeEventHandler ["HitPart", 0];

}];

  };

} forEach allUnits;
