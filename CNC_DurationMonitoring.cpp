#include "CNC_DurationMonitoring.hpp"

#define AllowedDuration 360  // in Minutes

bool Fun_IsDurationinRange(void)
{
	bool IsDurationInRange = FALSE;
	float ReadDuration;
	ReadDuration = Fun_ReadCNCMachineDurationinMinutes();
	if(WithinALimit(AllowedDuration, ReadDuration))
	{
		IsDurationInRange = TRUE;
	}
	return IsDurationInRange;
}
