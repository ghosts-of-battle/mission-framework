#include "..\script_component.hpp";
/*
 * Author: CPL.Brostrom.A tinkered with by YonV
 * This function add diary records.
 *
 * Example:
 * call Ghost_fnc_init_diary
 *
 * Public: No
 */

waitUntil {!isNull player && player == player};
waitUntil {profileName != ""};
if (!isNil{player getVariable QEGVAR(player,documents)}) exitWith {SHOW_WARNING_1("initDiary", "Diary Records already applied for %1.", player)};

INFO_1("initDiary", "Applying Diary Records to %1...", player);

// Add New Topic (Ghost)
if !(player diarySubjectExists "mission") then {
    player createDiarySubject ["mission","Mission"];

    // Load diary records (NOTE! The load order is reversed. So the top will be at the bottom after load.)
    call FUNC(Doc_Radio);
    call FUNC(Doc_Info);
};

// Add New Topic (Checklists)
if !(player diarySubjectExists "Chklists") then {
    player createDiarySubject ["Chklists","Checklists"];

    // Load diary records (NOTE! The load order is reversed. So the top will be at the bottom after load.)
    call FUNC(DocChklist);   
};

// Add New Topic (Radio Reports)
if !(player diarySubjectExists "radioReportsm") then {
    player createDiarySubject ["radioReportsm","Radio Reports Medical"];

    // Load diary records (NOTE! The load order is reversed. So the top will be at the bottom after load.)
    call FUNC(DocRadio_Med);
};

// Add New Topic (Radio Reports)
if !(player diarySubjectExists "radioReportsc") then {
    player createDiarySubject ["radioReportsc","Radio Reports CAS"];

    // Load diary records (NOTE! The load order is reversed. So the top will be at the bottom after load.)
    call FUNC(DocRadio_CAS);
};
player setVariable [QEGVAR(player,documents), true];
