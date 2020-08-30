#include "CNN_DurationMonitoring.hpp"

#define AllowedDuration 360  // in Minutes

bool Fun_IsDurationinRange(void)
{
	bool IsDurationInRange = FALSE;
	float IsDurationInRange;
	IsDurationInRange = Fun_ReadCNCMachineDiamention();
	if(WithinALimit(AllowedDuration, IsDurationInRange))
	{
		IsDurationInRange = TRUE;
	}
	return IsDurationInRange;
}
