#include "..\script_component.hpp";
/*
 * Author: CPL.Brostrom.A tinkered with by YonV
 * This function write a diary record.
 *
 * Arguments:
 * None
 *
 * Example:
 * call Ghost_fnc_Doc_Info
 */

private _playerRole = call EFUNC(player,getRole);

private _group = [player] call EFUNC(unit,getSquadName);
private _playerGroup = "";
if (_group == "") then { _playerGroup = "in your squad" } else { _playerGroup = formatText["under the callsign <font color='#ffc61a'>%1</font>", _group]};

private _worldName = getText (configFile >> "CfgWorlds" >> worldName >> "description");
private _serverName = if (serverName != "") then {serverName} else {"localhost"}; 

private _radioChannel = "";
if (EGVAR(Patches,usesACRE) || EGVAR(Patches,usesTFAR)) then {
    if (EGVAR(Settings,enableRadios)) then {
        _radioChannel = [_group, "SR"] call FUNC(getRadioChannel);
        _radioChannel = [_radioChannel] call FUNC(getChannelName);
        if !(_radioChannel == "ERROR" ) then {
            _radioChannel = formatText["Your squad radio is <font color='#ffc61a'>%1</font>.<br/><br/>", _radioChannel];
        } else {
            _radioChannel = "";
        };
    };
};


private _document = format [
"<font size=20>Information</font><br/>Welcome to %1 on %2.<br/>Your currently on <font color='#ffc61a'>%3</font>.<br/><br/>
%3
Good luck and have fun!
<br/><br/>
-----------------------------------------------------------------
<br/><br/>This mission is currently running Ghost version: <font color='#ffc61a'>%4</font>.
", briefingName, _worldName, _serverName,  _radiochannel, VERSION];

player createDiaryRecord["mission", ["Information", _document], taskNull, "", false];
