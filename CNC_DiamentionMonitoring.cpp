#include "CNC_DiamentionMonitoring.hpp"

#define AllowedDiam 0.05 //in mm

bool Fun_IsDiamentioninRange(void)
{
	bool IsDiamentionInRange = FALSE;
	float ReadDiamentionvalue;
	ReadDiamentionvalue = Fun_ReadCNCMachineDiamention();
	if(WithinALimit(AllowedDiam, ReadDiamentionvalue))
	{
		IsDiamentionInRange = TRUE;
	}
	return IsDiamentionInRange;
}
