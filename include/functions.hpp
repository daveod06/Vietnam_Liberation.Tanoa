class CfgFunctions
{
    class A3E
    {
        class Common
        {
	    	class RandomMarkerPos {};
	    	class GetSideColor {};
	    	class RandomSpawnPos {};
	    	class KeyDown {};
	    	class RandomPatrolPos {};
	    	class WriteParamBriefing {};
	    	class findFlatArea{};
	    	class findFlatAreaNear{};
	    	class RotatePosition{};
	    	class GetEnemyCount{};
	    	class paramWeather{};
	    	class paramDaytime{};
	    	class systemChat {};
	    	class groupChat {};
	    	class addUserActions {};
	    	class Hijack {};
	    	class HealAtBuilding {};
	    	class GetPlayers {};
	    	class GetRandomPlayer {};
	    	class GetPlayerGroup {};
	    	class Briefing {
	    		postInit = 1;
	    	};
	    	class cleanupTerrain {};
	    	class handleRating {};
	    	class handleScore {};
	    	class CheckCampDistance {};
	    	class FireSmokeFX {};

	    };
	};
	class ATR
	{
		class Revive
		{
			#include "..\functions\revive\revive.hpp"
		};
	};
    class DJORevive
	{
		class Revive
		{
			#include "..\functions\djorevive\revive.hpp"
		};
	};
};
