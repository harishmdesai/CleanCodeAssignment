#include "CNC_PartDiamentionVariationRead.hpp"

float CNCPartDiamentionVariationValue;

/*ADC Read value*/
/*Resolution can be changed based on teh requirment*/
float FUN_ADCRead_DiamentionVariation (float Value)
{ 
   return CNCPartDiamentionVariationValue = Value;
}

float Fun_ReadCNCMachineDiamention (void)
{
	float temp;
	temp = FUN_ADCRead_DiamentionVariation();
	return temp;
}
