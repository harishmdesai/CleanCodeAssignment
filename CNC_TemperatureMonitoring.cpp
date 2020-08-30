#include "CNC_TemperatureMonitoring.hpp"

/*In Degree centgrade*/
#define AllowedTemp 35

bool Fun_IsTemperatureinRange(void)
{
	bool IsTempInRange = FALSE;
	float ReadTempvalue;
	ReadTempvalue = Fun_ReadCNCMachineTemperature();
	if(WithinALimit(AllowedTemp, ReadTempvalue))
	{
		IsTempInRange = TRUE;
	}
	return IsTempInRange;
}
