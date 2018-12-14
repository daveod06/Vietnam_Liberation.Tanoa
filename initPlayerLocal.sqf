diag_log format["initPlayerLocal run for %1 (prewaituntil)", name player];
if (!hasInterface || isDedicated) exitWith {};
waituntil{!isNull(player)};
params ["_player", "_didJIP"];



0 = [] spawn
{
    while {alive player} do
    {
        player setFatigue 0.0;
        player enableStamina false;
        sleep 5.0;
    };
};


if (TOOTH_Param_Magrepack == 1) then {
	[] execVM "Scripts\outlw_magRepack\MagRepack_init_sv.sqf";
};


