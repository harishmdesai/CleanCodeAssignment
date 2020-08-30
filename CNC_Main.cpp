#include "CNC_SupportingFile.hpp"
#include "CNC_Main.hpp"
#include "CNC_SelfTest.hpp"

bool WithinALimit (float value, float Ref)
{
  return (value<Ref);
}
static bool IsCNCEnvironmentFailed = FALSE;
static bool IsCNCInternalMachineFailure = FALSE;

static void CNCFUN_ValidateEnvironmentParameter(void)
{
  if(!(Fun_IsTemperatureinRange()||Fun_IsDurationinRange()))
  {
    /*Failure of Environment*/
    /* Illuminate ENV LED*/
    IsCNCEnvironmentFailed = TRUE;
  }
  else
    IsCNCEnvironmentFailed = FALSE;
}
static void CNCFUN_ValidateMachineParamenter(void)
{
  if((!Fun_IsDiamentioninRange()) || (FUN_ReadSelfTestStatus()))
  {
    /*Failure within internal*/
    /* Illuminate Internal failure LED*/
    IsCNCInternalMachineFailure = TRUE;
  }
  else
    IsCNCInternalMachineFailure = FALSE;

}

int main(void)
{
  CNCFUN_ValidateEnvironmentParameter();
  CNCFUN_ValidateMachineParamenter();
return 0;
}
