#include "CNN_PartDiamentionVariationRead.hpp"

float CNCPartDiamentionVariationValue;

/*ADC Read value*/
/*Resolution can be changed based on teh requirment*/
static float FUN_ADCRead_DiamentionVariation (void)
{ 
   return CNCPartDiamentionVariationValue;
}

float Fun_ReadCNCMachineDiamention (void)
{
	float temp;
	temp = FUN_ADCRead_DiamentionVariation();
	return temp;
}
