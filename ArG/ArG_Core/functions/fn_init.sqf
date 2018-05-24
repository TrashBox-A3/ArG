
STATE = false;

params [
    ["_time", objNull],
    "",
    ["_activated", true]
];


#define def_PoolCount 30

// ================================================================
// Reading Module settings
// ================================================================

_time = _logic call {
    ArG_CountDown = _this getVariable ["PoolCount", def_PoolCount];
    _return = ArG_CountDown * 60 / 100;
    _return
};
