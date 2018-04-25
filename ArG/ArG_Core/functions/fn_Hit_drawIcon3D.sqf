params ["_text"];



onEachFrame {
    _text = _this select 0;
    _HitPos = getPosATL _text;
    drawIcon3D [
        "",
        [153,0,0,0.5],
        [_HitPos select 0,_HitPos select 1,2.3],
        5,
        5,
        direction _text,
        "HIT!",
        0,
        0.08,
        "TahomaB"
        ];
};
