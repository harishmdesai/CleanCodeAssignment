#include "CNC_SelfTest.hpp"

CNCSelfTestStatus CNC_SelfTestStatus;

bool FUN_ReadSelfTestStatus(void)
{
bool Deviation = FALSE;
	if(CNC_SelfTestStatus == 0xFF)
	{
		Deviation = FALSE;
	}
	else if (CNC_SelfTestStatus == 0x00)
	{
  /*No data found*/
		Deviation = TRUE;
	}
	else if (CNC_SelfTestStatus == 0x01)
	{
  /*Controller board not okay*/
		Deviation = TRUE;
	}
	else
	{
  //Configuration data not okay
		Deviation = TRUE;
	}
		return Deviation;
}
