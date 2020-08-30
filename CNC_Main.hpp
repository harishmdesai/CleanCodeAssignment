#ifndef CNCMAIN_HPP__
#define CNCMAIN_HPP__

typedef enum
{
	CNCSelfTest,
	CNCTempMon,
	CNCDiamMon,
	CNCDuration,
	CNCListOfMOn
}CNCListOfMOn;

typedef enum
{
	CNC_AllOk,
	CNC_MachineAlert,
	CNC_Env_Alert,
	CNC_MachineandEnvAlert
}CNC_DiagAlert;

typedef struct
{
	CNCSelfTestStatus SelfTest;
  float temp;
	float Diam;
  float Duraion;
}CNCParameter;


#endif
