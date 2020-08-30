#include "CNC_ReadOperationDuration.hpp"

float CNCDurationOfCNCMachineOperation;

/*Resolution can be changed based on teh requirment*/
static float FUN_GetCNCMachineOperatingDuration(void)
{ 
   return CNCDurationOfCNCMachineOperation;
}

float Fun_ReadCNCMachineDurationinMinutes(void)
{
	float temp;
	temp = FUN_GetCNCMachineOperatingDuration();
	return temp;
}
