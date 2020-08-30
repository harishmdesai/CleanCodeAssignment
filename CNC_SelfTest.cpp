#include "CNC_SelfTest.hpp"

CNCSelfTestStatus CNCSelfTestStatus;

bool FUN_ReadSelfTestStatus(void)
{
bool Deviation = FALSE;
	if(CNCSelfTestStatus == 0xFF)
	{
		Deviation = FALSE;
	}
	else if (CNCSelfTestStatus == 0x00)
	{
  /*No data found*/
		Deviation = TRUE;
	}
	else if (CNCSelfTestStatus == 0x01)
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
