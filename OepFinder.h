#pragma once

#include "pin.H"
#include "WxorXHandler.h"
#include "Debug.h"
namespace W {
	#include <windows.h>
}
#include "Heuristics.h"

#include "FilterHandler.h"
#include "ProcInfo.h"

#define OEPFINDER_INS_FILTERED -3;
#define OEPFINDER_HEURISTIC_FAIL -2;
#define OEPFINDER_NOT_WXORX_INST -1
#define OEPFINDER_FOUND_OEP 0;


class OepFinder
{

public:
	OepFinder(void);
	~OepFinder(void);
	UINT32 IsCurrentInOEP(INS ins);
	ProcInfo getProcInfo();
	ProcInfo proc_info;
};

