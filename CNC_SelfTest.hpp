#ifndef CNCSELFTEST_HPP__
#define CNCSELFTEST_HPP__

#include "CNC_SupportingFile.hpp"
extern bool Fun_ReadSelfTestStatus(void);
typedef enum
{
	AllOk = 0xFF,
	NoData = 0x00,
	ContBoardNOK = 0x01,
	ConfigDataNOK = 0x02
}CNCSelfTestStatus;

extern CNCSelfTestStatus CNC_SelfTestStatus;


#endif
