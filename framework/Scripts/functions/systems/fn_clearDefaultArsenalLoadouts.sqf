#include "..\script_component.hpp";
/* 
 * Author: SGT.Brostrom.A
 * This function remove all ace arsenal default loadouts.
 *
 * Example:
 * call Ghost_fnc_removeDefaultArsenalLoadouts
 *
 * Public: No
 */

if (!EGVAR(patches,usesACEArsenal)) exitWith {};

ace_arsenal_defaultLoadoutsList = [];
