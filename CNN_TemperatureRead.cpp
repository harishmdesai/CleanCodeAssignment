#include "CNN_TemperatureRead.h"

float CNCMachineTemperatre;


/*ADC Read value*/
/*Resolution can be changed based on teh requirment*/
static float FUN_ADCRead_Temperature (void)
{ 
   return CNCMachineTemperatre;
}

float Fun_ReadCNCMachineTemperature (int TempValue)
{
	float temp;
	temp = FUN_ADCRead_Temperature();
	return temp;
}
