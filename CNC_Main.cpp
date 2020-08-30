#include "CNC_SupportingFile.hpp"
#include "CNC_Main.hpp"
#include "CNC_SelfTest.hpp"

bool WithinALimit (float value, float Ref)
{
  return (value<Ref);
}

static void CNCFUN_ValidateEnvironmentParameter(void)
{
  if(!(Fun_IsTemperatureinRange()||Fun_IsDurationinRange()))
  {
    /*Failure of Environment*/
    /* Illuminate ENV LED*/
  }
}
static void CNCFUN_ValidateMachineParamenter(void)
{
  if((!Fun_IsDiamentioninRange())
  {
    /*Failure within internal*/
    /* Illuminate Internal failure LED*/
  }
  else if (FUN_ReadSelfTestStatus()!=AllOk)
     {
       
     }
     else
     {
     }
}

int main(void)
{
  CNCFUN_ValidateEnvironmentParameter();
  CNCFUN_ValidateMachineParamenter();
return 0;
}
