#include "CNN_DurationMonitoring.hpp"
#include "CNN_ReadOperationDuration.hpp"

#define AllowedDuration 360  // in Minutes

bool Fun_IsDurationinRange(void)
{
	bool IsDurationInRange = FALSE;
	float ReadDuration;
	ReadDuration = Fun_ReadCNCMachineDiamention();
	if(WithinALimit(AllowedDuration, ReadDuration))
	{
		IsDurationInRange = TRUE;
	}
	return IsDurationInRange;
}
