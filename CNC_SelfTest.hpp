#ifndef CNC_SELFTEST_HPP__
#define CNC_SELFTEST_HPP__

typedef enum
{
	AllOk = 0xFF;
	NoData = 0x00;
	ContBoardNOK = 0x01;
	ConfigDataNOK = 0x02;
}CNCSelfTestStatus;

extern CNCSelfTestStatus Fun_ReadSelfTestStatus(void);

#endif
