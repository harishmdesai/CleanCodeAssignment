#include "CNC_TemperatureRead.hpp"
#include "CNC_SupportingFile.hpp"


bool WithinALimit (float value, float Ref)
{
  return (value<Ref);
}

int main(void)
{
  CNCMachineTemperatre = Fun_ReadCNCMachineTemperature();
return 0;
}
