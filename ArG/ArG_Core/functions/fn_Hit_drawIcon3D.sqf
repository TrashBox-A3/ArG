private ["_position"];

hint"Test";

addMissionEventHandler ["Draw3D", {
	_pos = getPosWorld player;
	drawIcon3D ["a3\ui_f\data\gui\Rsc\RscDisplayArsenal\radio_ca.paa", [1,1,1,1], [(_pos select 0),(_pos select 1), 1], 0.8, 0.8, 0, (_Hited), 1, 0.0315, "EtelkaMonospacePro"];
}];
