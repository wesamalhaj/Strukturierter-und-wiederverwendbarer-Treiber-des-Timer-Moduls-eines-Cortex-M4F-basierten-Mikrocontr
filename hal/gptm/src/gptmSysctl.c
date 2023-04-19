#include <stdint.h>

// SHI
#include "gptmSysctlShiCores.h"
#include "gptmSysctlShi.h"
#include "../../hal/gptm/include/public/hal/gptm/halGptmShiCores.h"


// private interface
#include "gptmSysctl.h"

/**
 * system clock auf timer & timer ready
 */
void gptmSysctlEnableGptm_(enum HalGptmCores const core) {

    switch (core)
    {

        case halGptmTimer0Core:
            sysctlShiWriteRcgctimerTimer0_(sysctlSysctlCore_,sysctlRcgctimerTimer0EnableTimer0_);
            while(sysctlPrtimerTimer0Timer0NotReady_ == sysctlShiReadPrtimerTimer0_(sysctlSysctlCore_));
            break;

        case halGptmTimer1Core:
            sysctlShiWriteRcgctimerTimer1_(sysctlSysctlCore_,sysctlRcgctimerTimer1EnableTimer1_);
            while(sysctlPrtimerTimer1Timer1NotReady_ == sysctlShiReadPrtimerTimer1_(sysctlSysctlCore_));
            break;
        case halGptmTimer2Core:
            sysctlShiWriteRcgctimerTimer2_(sysctlSysctlCore_,sysctlRcgctimerTimer2EnableTimer2_);
            while(sysctlPrtimerTimer2Timer2NotReady_ == sysctlShiReadPrtimerTimer2_(sysctlSysctlCore_));
        break;

        case halGptmTimer3Core:
            sysctlShiWriteRcgctimerTimer3_(sysctlSysctlCore_,sysctlRcgctimerTimer3EnableTimer3_);
            while(sysctlPrtimerTimer3Timer3NotReady_ == sysctlShiReadPrtimerTimer3_(sysctlSysctlCore_));
            break;

        case halGptmTimer4Core:
            sysctlShiWriteRcgctimerTimer4_(sysctlSysctlCore_,sysctlRcgctimerTimer4EnableTimer4_);
            while(sysctlPrtimerTimer4Timer4NotReady_ == sysctlShiReadPrtimerTimer4_(sysctlSysctlCore_));
            break;

        case halGptmTimer5Core:
            sysctlShiWriteRcgctimerTimer5_(sysctlSysctlCore_,sysctlRcgctimerTimer5EnableTimer5_);
            while(sysctlPrtimerTimer5Timer5NotReady_ == sysctlShiReadPrtimerTimer5_(sysctlSysctlCore_));
            break;
        case halGptmTimer6Core:
            sysctlShiWriteRcgctimerTimer6_(sysctlSysctlCore_,sysctlRcgctimerTimer6EnableTimer6_);
            while(sysctlPrtimerTimer6Timer6NotReady_ == sysctlShiReadPrtimerTimer6_(sysctlSysctlCore_));
            break;

        case halGptmTimer7Core:
            sysctlShiWriteRcgctimerTimer7_(sysctlSysctlCore_,sysctlRcgctimerTimer7EnableTimer7_);
            while(sysctlPrtimerTimer7Timer7NotReady_ == sysctlShiReadPrtimerTimer7_(sysctlSysctlCore_));
            break;
    }

}
