params ["_pausetime"];

[_pausetime] execVM "\mrhfunctions\scripts\scr_timerpaused.sqf";
_returnvalue = _pausetime;
_returnvalue