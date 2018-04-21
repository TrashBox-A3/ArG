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
