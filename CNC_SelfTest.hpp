#ifndef CNC_SELFTEST_HPP__
#define CNC_SELFTEST_HPP__

#include "CNC_SupportingFile.hpp"

typedef enum
{
	AllOk = 0xFF,
	NoData = 0x00,
	ContBoardNOK = 0x01,
	ConfigDataNOK = 0x02
}CNCSelfTestStatus;

extern CNCSelfTestStatus CNC_SelfTestStatus;
extern CNCSelfTestStatus Fun_ReadSelfTestStatus(void);

#endif
