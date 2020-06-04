
#include "includes.h"

int main(void)
{

    SysCtlClockSet(SYSCTL_SYSDIV_1 | SYSCTL_USE_OSC | SYSCTL_OSC_MAIN |SYSCTL_XTAL_16MHZ);
    switchInit();
	ledInit();
	initRGBState();
    SchedulerInit(1000);    // systick is 1 ms
    while(1)
    {
        SchedulerRun();
    }
}
