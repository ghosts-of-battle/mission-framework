class MRH // Defines the "owner"
{
	class TimerFunctions // category
	{
	tag = "MRH";
	file = "\mrhfunctions\Functions\MRHTimer";
		#include "MRHTimer\TimerFunctions.hpp"
	};	
		class ElevatorFunctions // category
	{
	tag = "MRH";
	file = "\mrhfunctions\Functions\MRHElevator";
		#include "MRHElevator\ElevatorFunctions.hpp"
	};
		class HackPhoneFunctions // category
	{
	tag = "MRH";
	file = "\mrhfunctions\Functions\MRHHackPhone";
		#include "MRHHackPhone\HackPhoneFunctions.hpp"	
	};
		class Utilities 
	{
	tag = "MRH";
	file = "\mrhfunctions\Functions\MRHUtilities";
		#include "MRHUtilities\UtilitiesFunctions.hpp"
	};
};
		
		