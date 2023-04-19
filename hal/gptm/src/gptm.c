/*
 * gptm.c
 *
 *  Created on: 07.04.2022
 *
 */

#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#include "hal/nvic/halNvic.h"
#include "hal/sysctl/halSysctl.h"

#include "hal/gptm/halGptmShiCores.h"
#include "hal/gptm/halGptmGptmSubtimerShiCores.h"
#include "hal/gptm/halGptm.h"

#include "params/gptm/paramsGptm.h"

#include "gptmShi.h"
#include "gptmSysctl.h"

struct HalGptmCompare16BitMode {
    enum HalGptmCores gptmCore_;
    enum HalGptmSubtimerCores gptmSubtimer_;
};



unsigned int paramsGptm16BitCompareModeHandlesCount_ = 0;
static struct HalGptmCompare16BitMode gptm16BitCompareModeHandles_[paramsGptmMaximal16BitCompareModeHandlesCount];


enum GptmCompareModeInterruptTypeCount_ {
    gptmCompareModeInterruptTypeCount_ = 2
};
/**
 * InterruptType
 */
enum GptmCompareModeInterruptType_ {
    gptmCompareModeMatchInterrupt_ = 0,
    gptmCompareModeTimeoutInterrupt_ = 1
};

struct GptmCoreState_ {
    bool poweredUp_;
};
static struct GptmCoreState_ coreStates_[halGptmCoreCount];


/**
 * ISR definitions
 */

static void gptmGenericISR_(enum HalGptmCores const core, enum HalGptmSubtimerCores const subtimer);
static void gptm0AISR_(void);
static void gptm0BISR_(void);
static void gptm1AISR_(void);
static void gptm1BISR_(void);
static void gptm2AISR_(void);
static void gptm2BISR_(void);
static void gptm3AISR_(void);
static void gptm3BISR_(void);
static void gptm4AISR_(void);
static void gptm4BISR_(void);
static void gptm5AISR_(void);
static void gptm5BISR_(void);
static void gptm6AISR_(void);
static void gptm6BISR_(void);
static void gptm7AISR_(void);
static void gptm7BISR_(void);

/**
 * This array is populated with the addresses of the callback functions provided by the users
 */
static void (* gptmIsrHadlers_[halGptmCoreCount][halGptmSubtimerCoreCount][gptmCompareModeInterruptTypeCount_])(void);

/**
 * Generic ISR
 */
static void gptmGenericISR_(enum HalGptmCores const core, enum HalGptmSubtimerCores const subtimer) {

    uint32_t maskedInterruptStatus = gptmShiReadGptmmis_(core);         // save the interrupt source
    gptmShiWriteGptmicr_(core, maskedInterruptStatus);                  // clear the interrupt

    // keeping track of the interrupt type
    bool interruptOccured[gptmCompareModeInterruptTypeCount_];
    switch (subtimer) {
        case halGptmSubtimerACore:
            interruptOccured[gptmCompareModeMatchInterrupt_  ] =
                    (gptmGptmmisTammisUnmaskedTimerAModeMatchInterruptHasOccurred_ == gptmShiReadUIGptmmisTammis_ (maskedInterruptStatus));
            interruptOccured[gptmCompareModeTimeoutInterrupt_] =
                    (gptmGptmmisTatomisUnmaskedTimerATimeOutInterruptHasOccurred_  == gptmShiReadUIGptmmisTatomis_(maskedInterruptStatus));
            break;
        case halGptmSubtimerBCore:
            interruptOccured[gptmCompareModeMatchInterrupt_  ] =
                    (gptmGptmmisTbmmisUnmaskedTimerBModeMatchInterruptHasOccurred_ == gptmShiReadUIGptmmisTbmmis_ (maskedInterruptStatus));
            interruptOccured[gptmCompareModeTimeoutInterrupt_] =
                    (gptmGptmmisTbtomisUnmaskedTimerBTimeOutInterruptHasOccurred_  == gptmShiReadUIGptmmisTbtomis_(maskedInterruptStatus));
            break;
    }

    // Call callback functions
    unsigned int interruptTypeId;
    for (interruptTypeId = 0; interruptTypeId < gptmCompareModeInterruptTypeCount_; ++interruptTypeId) {
        if (interruptOccured[interruptTypeId]) {
            // pointer to the callback function
            void (*callback)(void) = gptmIsrHadlers_[core][subtimer][interruptTypeId];
            if (callback) {
                callback();
            }
        }
    }

 }

static void gptm0AISR_(void) {
    gptmGenericISR_(halGptmTimer0Core, halGptmSubtimerACore);
}

static void gptm0BISR_(void) {
    gptmGenericISR_(halGptmTimer0Core, halGptmSubtimerBCore);
}

static void gptm1AISR_(void) {
    gptmGenericISR_(halGptmTimer1Core, halGptmSubtimerACore);
}

static void gptm1BISR_(void) {
    gptmGenericISR_(halGptmTimer1Core, halGptmSubtimerBCore);
}

static void gptm2AISR_(void) {
    gptmGenericISR_(halGptmTimer2Core, halGptmSubtimerACore);
}

static void gptm2BISR_(void) {
    gptmGenericISR_(halGptmTimer2Core, halGptmSubtimerBCore);
}

static void gptm3AISR_(void) {
    gptmGenericISR_(halGptmTimer3Core, halGptmSubtimerACore);
}

static void gptm3BISR_(void) {
    gptmGenericISR_(halGptmTimer3Core, halGptmSubtimerBCore);
}

static void gptm4AISR_(void) {
    gptmGenericISR_(halGptmTimer4Core, halGptmSubtimerACore);
}

static void gptm4BISR_(void) {
    gptmGenericISR_(halGptmTimer4Core, halGptmSubtimerBCore);
}

static void gptm5AISR_(void) {
    gptmGenericISR_(halGptmTimer5Core, halGptmSubtimerACore);
}

static void gptm5BISR_(void) {
    gptmGenericISR_(halGptmTimer5Core, halGptmSubtimerBCore);
}

static void gptm6AISR_(void) {
    gptmGenericISR_(halGptmTimer6Core, halGptmSubtimerACore);
}

static void gptm6BISR_(void) {
    gptmGenericISR_(halGptmTimer6Core, halGptmSubtimerBCore);
}

static void gptm7AISR_(void) {
    gptmGenericISR_(halGptmTimer7Core, halGptmSubtimerACore);
}

static void gptm7BISR_(void) {
    gptmGenericISR_(halGptmTimer7Core, halGptmSubtimerBCore);
}

/**
 * Addresses of the interrupt service routines
 */
static void (* const gptmIsr_[halGptmCoreCount][halGptmSubtimerCoreCount])(void) = {
    [halGptmTimer0Core][halGptmSubtimerACore] = gptm0AISR_,
    [halGptmTimer0Core][halGptmSubtimerBCore] = gptm0BISR_,
    [halGptmTimer1Core][halGptmSubtimerACore] = gptm1AISR_,
    [halGptmTimer1Core][halGptmSubtimerBCore] = gptm1BISR_,
    [halGptmTimer2Core][halGptmSubtimerACore] = gptm2AISR_,
    [halGptmTimer2Core][halGptmSubtimerBCore] = gptm2BISR_,
    [halGptmTimer3Core][halGptmSubtimerACore] = gptm3AISR_,
    [halGptmTimer3Core][halGptmSubtimerBCore] = gptm3BISR_,
    [halGptmTimer4Core][halGptmSubtimerACore] = gptm4AISR_,
    [halGptmTimer4Core][halGptmSubtimerBCore] = gptm4BISR_,
    [halGptmTimer5Core][halGptmSubtimerACore] = gptm5AISR_,
    [halGptmTimer5Core][halGptmSubtimerBCore] = gptm5BISR_,
    [halGptmTimer6Core][halGptmSubtimerACore] = gptm6AISR_,
    [halGptmTimer6Core][halGptmSubtimerBCore] = gptm6BISR_,
    [halGptmTimer7Core][halGptmSubtimerACore] = gptm7AISR_,
    [halGptmTimer7Core][halGptmSubtimerBCore] = gptm7BISR_
};

/**
 * NVIC exception modes
 */
static const enum HalNvicException gptmExceptions_[halGptmCoreCount][halGptmSubtimerCoreCount] = {
    [halGptmTimer0Core][halGptmSubtimerACore] = halNvicTimer0AException,
    [halGptmTimer0Core][halGptmSubtimerBCore] = halNvicTimer0BException,
    [halGptmTimer1Core][halGptmSubtimerACore] = halNvicTimer1AException,
    [halGptmTimer1Core][halGptmSubtimerBCore] = halNvicTimer1BException,
    [halGptmTimer2Core][halGptmSubtimerACore] = halNvicTimer2AException,
    [halGptmTimer2Core][halGptmSubtimerBCore] = halNvicTimer2BException,
    [halGptmTimer3Core][halGptmSubtimerACore] = halNvicTimer3AException,
    [halGptmTimer3Core][halGptmSubtimerBCore] = halNvicTimer3BException,
    [halGptmTimer4Core][halGptmSubtimerACore] = halNvicTimer4AException,
    [halGptmTimer4Core][halGptmSubtimerBCore] = halNvicTimer4BException,
    [halGptmTimer5Core][halGptmSubtimerACore] = halNvicTimer5AException,
    [halGptmTimer5Core][halGptmSubtimerBCore] = halNvicTimer5BException,
    [halGptmTimer6Core][halGptmSubtimerACore] = halNvicTimer6AException,
    [halGptmTimer6Core][halGptmSubtimerBCore] = halNvicTimer6BException,
    [halGptmTimer7Core][halGptmSubtimerACore] = halNvicTimer7AException,
    [halGptmTimer7Core][halGptmSubtimerBCore] = halNvicTimer7BException,
};



/**
 * Public functions
 */

void halGptmDriverInit(void) {

    unsigned int coreId;
    unsigned int subtimerId;
    unsigned int interruptTypeId;

    // Initially, cores are not powered up.
    for (coreId = 0; coreId < halGptmCoreCount; ++coreId) {
        coreStates_[coreId].poweredUp_ = false;
    }

    //set all interrupt handlers initially to NULL
    for (coreId = 0; coreId < halGptmCoreCount; ++coreId) {
        for (subtimerId = 0; subtimerId < halGptmSubtimerCoreCount; ++subtimerId) {
            for (interruptTypeId = 0; interruptTypeId < gptmCompareModeInterruptTypeCount_; ++interruptTypeId) {
                gptmIsrHadlers_[coreId][subtimerId][interruptTypeId] = NULL;
            }
        }
    }

    // Initialize NVIC driver.
    halNvicDriverInit();

}

/**
 * Configure 16 Bit Compare Mode
 */
HalGptmCompare16BitModeHandle halGptmConfigure16BitCompareMode(
        enum HalGptmCores gptmCore,
        enum HalGptmSubtimerCores gptmSubtimer,
        long int matchInNs,
        long int timeoutInNs,
        void (*matchCallbackFunction)(void),
        void (*timeoutCallbackFunction)(void)
        ) {

    if (paramsGptmMaximal16BitCompareModeHandlesCount == paramsGptm16BitCompareModeHandlesCount_) {
        return NULL;
    }

    struct HalGptmCompare16BitMode * handle = &gptm16BitCompareModeHandles_[paramsGptm16BitCompareModeHandlesCount_];
    ++paramsGptm16BitCompareModeHandlesCount_;
    handle->gptmCore_ = gptmCore;
    handle->gptmSubtimer_ = gptmSubtimer;
    gptmIsrHadlers_[gptmCore][gptmSubtimer][gptmCompareModeMatchInterrupt_]   = matchCallbackFunction;
    gptmIsrHadlers_[gptmCore][gptmSubtimer][gptmCompareModeTimeoutInterrupt_] = timeoutCallbackFunction;

    /**
     * configure the timer
     */

    // power up the cycle if not done so yet
    if (!coreStates_[gptmCore].poweredUp_) {
        gptmSysctlEnableGptm_(gptmCore);            // activate clock
        coreStates_[gptmCore].poweredUp_ = true;
    }

    // get CPU frequency
     unsigned int cpuFreq = halSysCtlGetCpuFreq();
     gptmShiWriteGptmcfgGptmcfg_(gptmCore, gptmGptmcfgGptmcfgConfig16Bit_);  // 16_bit mode

    //, down, possibly with prescaler depending on the cpu freq.
     long int prescaler = ceil((timeoutInNs/1e9)*(cpuFreq/65536)) - 1; //prescaler PR= (16MH/2^16 *timeoutInNs)-1

     long int tailr     = ceil((timeoutInNs/1e9)*(cpuFreq/(prescaler + 1))) - 1 ; // load Value= (16MH/prescaler*timeoutInNs)-1 =tbilr

     long int tamr      = ceil(((timeoutInNs-matchInNs)/1e9)*(cpuFreq/(prescaler + 1))) - 1; //Match Value = ((timeoutInNs-match)*16MH/(prescaler+1))-1 =tbmr


    /**
     * Disable & countDown & enable GPTM Timer A Match Interrupt Enable
     * load reg,  When the timer is counting down, this register is used to load the starting count value into the timer.
     * match reg, This register is loaded with a match value. Interrupts can be generated when the timer value is equal to the value in this register in one-shot or periodic mode.
     */

    switch(gptmSubtimer){
        case halGptmSubtimerACore:
           gptmShiWriteGptmctlTaen_(gptmCore, gptmGptmctlTaenDisableTimerA_);                       //timer A Disable
           gptmShiWriteGptmtamrTaams_(gptmCore, gptmGptmtamrTaamsCaptureOrCompareModeEnabled_);     //Compare Mode Enabled
           gptmShiWriteGptmtamrTacdir_(gptmCore, gptmGptmtamrTacdirTimerCountsDown_);               //count down
           gptmShiWriteGptmtapr_(gptmCore, prescaler);                                              //registerValue= wert von Prescaler
           gptmShiWriteGptmtailrTailr_(gptmCore, tailr);                                            //load Value
           gptmShiWriteGptmtamatchrTamr_(gptmCore, tamr);                                           //Match Value
           gptmShiWriteGptmtamrTamie_(gptmCore, gptmGptmtamrTamieInterruptGenerated_);              //Match Interrupt Enable
           if(matchCallbackFunction){                                                               // if matchCallbackFunction
              gptmShiWriteGptmimrTamim_(gptmCore, gptmGptmimrTamimTimerAMatchInterruptMaskEnablen_);//Timer A Match Interrupt Mask Enablen
           }
           if(timeoutCallbackFunction){                                                             // if timeoutCallbackFunction
              gptmShiWriteGptmimrTatoim_(gptmCore, gptmGptmimrTatoimTimerATimeOutInterruptMaskEnablen_); //Timer A TimeOut InterruptMask Enablen
           }
           gptmShiWriteGptmctlTastall_(gptmCore, gptmGptmctlTastallTimerAFreezesCounting_);         // timer does not continue in the debug mode
           break;
        case halGptmSubtimerBCore:
            gptmShiWriteGptmctlTben_(gptmCore, gptmGptmctlTbenDisableTimerB_);                      //timer B Disable
            gptmShiWriteGptmtbmrTbams_(gptmCore, gptmGptmtbmrTbamsCaptureOrCompareModeEnabled_);    //Compare Mode Enabled
            gptmShiWriteGptmtbmrTbcdir_(gptmCore, gptmGptmtbmrTbcdirTimerCountsDown_);              //count down
          //  gptmShiWriteGptmtbmrTcact_(gptmCore, gptmGptmtbmrTcactSetCcpImmediatelyAndToggleOnTimeOut_);
            gptmShiWriteGptmtbpr_(gptmCore, prescaler);                                             // registerValue= wert von Prescaler
            gptmShiWriteGptmtbilrTbilr_(gptmCore, tailr);                                           //load Value
            gptmShiWriteGptmtbmatchrTbmr_(gptmCore, tamr);                                          //Match Value
            gptmShiWriteGptmtbmrTbmie_(gptmCore, gptmGptmtbmrTbmieInterruptGenerated_);             //Match Interrupt Enable
            if(matchCallbackFunction){                                                            // if matchCallbackFunction
               gptmShiWriteGptmimrTbmim_(gptmCore, gptmGptmimrTbmimTimerBMatchInterruptMaskEnablen_);//Timer B Match Interrupt Mask Enablen
            }
            if(timeoutCallbackFunction){                                                         // if timeoutCallbackFunction
               gptmShiWriteGptmimrTbtoim_(gptmCore, gptmGptmimrTbtoimTimerBTimeOutInterruptMaskEnablen_); //Timer B TimeOut InterruptMask Enablen
            }
            gptmShiWriteGptmctlTbstall_(gptmCore, gptmGptmctlTbstallTimerBFreezesCounting_);         // timer does not continue in the debug mode
            break;
      }

    halNvicInstallISR(gptmIsr_[gptmCore][gptmSubtimer], gptmExceptions_[gptmCore][gptmSubtimer]);   // install interrupt handler
    halNvicEnableInterrupt(gptmExceptions_[gptmCore][gptmSubtimer]);                                // activate the interrupt

    /**
     * clear all flags match & timeout
     */
    gptmShiWriteGptmicr_(gptmCore, gptmGptmicrTatocintClearsTatorisBit_);   //timer A timeout
    gptmShiWriteGptmicr_(gptmCore, gptmGptmicrTbtocintClearsTbtorisBit_);   //timer B timeout
    gptmShiWriteGptmicr_(gptmCore, gptmGptmicrTbmcintClearsTbmrisBit_);     //timer B Match
    gptmShiWriteGptmicr_(gptmCore, gptmGptmicrTamcintClearsTamrisBit_);     //timer A Match
    
    return handle;

}


/**
 * Activate Compare Mode
 *
 */
void halGptmCompareModeActivate(HalGptmCompare16BitModeHandle gptmHandle, bool const activate, bool const oneShot) {

    if (activate) {
        switch (gptmHandle->gptmSubtimer_){
            case halGptmSubtimerACore:
                if (oneShot) {
                    gptmShiWriteGptmtamrTamr_(gptmHandle->gptmCore_, gptmGptmtamrTamrOneShotTimerMode_);            //oneShot Mode
                }
                else {
                    gptmShiWriteGptmtamrTamr_(gptmHandle->gptmCore_, gptmGptmtamrTamrPeriodicTimerMode_);            // periodic Mode
                }
                gptmShiWriteGptmctlTaen_(gptmHandle->gptmCore_, gptmGptmctlTaenEnableTimerA_);                       //Timer A Enable
                break;
            case halGptmSubtimerBCore:                                                                               //timer B
                if (oneShot) {
                    gptmShiWriteGptmtbmrTbmr_(gptmHandle->gptmCore_, gptmGptmtbmrTbmrOneShotTimerMode_);             //oneShot Mode
                }
                else {
                    gptmShiWriteGptmtbmrTbmr_(gptmHandle->gptmCore_, gptmGptmtbmrTbmrPeriodicTimerMode_);            // periodic Mode
                }
                gptmShiWriteGptmctlTben_(gptmHandle->gptmCore_, gptmGptmctlTbenEnableTimerB_);                       //Timer B Enable
                break;
        }
    }
    // stop the timer
    else {
        switch (gptmHandle->gptmSubtimer_){
            case halGptmSubtimerACore:
                gptmShiWriteGptmctlTaen_(gptmHandle->gptmCore_,gptmGptmctlTaenDisableTimerA_);                  //Disable Timer A
                break;
            case halGptmSubtimerBCore:
                gptmShiWriteGptmctlTben_(gptmHandle->gptmCore_,gptmGptmctlTbenDisableTimerB_);                  //Disable Timer B
                break;
        }
    }
}

/**
 * Configure PWM Mode
 */

HalGptmPwmModeHandle halGptmConfigurePwmMode(
        enum HalGptmCores gptmCore,                                 //Core (0 bis 7)
        enum HalGptmSubtimerCores gptmSubtimer,                     //Subtimer(A oder B)
        enum EventModeEdge modeEdge,                                //EventModeEdge (negative oder postive oder beiden flanken)
        bool EdgeTime,                                              //EdgeTime oder EdgeCount
        bool outputInverted,                                        //PWM Output Level
        long int matchInNs,                                      //matchValue in NanoSeconde
        long int timeoutInNs,                                    // timeout in NanoSeconde
        void (*matchCallbackFunction)(void),                        //Match interruptFunktion
        void (*timeoutCallbackFunction)(void)                       //timeOut interrupt Funktion
        ){

    if (paramsGptmMaximal16BitCompareModeHandlesCount == paramsGptm16BitCompareModeHandlesCount_) {
        return NULL;
    }
    //todo: struct umbenennen weil zu HalGptm16BitMode weil es zu beiden Modes gillt ?
    struct HalGptmCompare16BitMode * handle = &gptm16BitCompareModeHandles_[paramsGptm16BitCompareModeHandlesCount_];
    ++paramsGptm16BitCompareModeHandlesCount_;
    handle->gptmCore_ = gptmCore;
    handle->gptmSubtimer_ = gptmSubtimer;
    gptmIsrHadlers_[gptmCore][gptmSubtimer][gptmCompareModeMatchInterrupt_] = matchCallbackFunction;
    gptmIsrHadlers_[gptmCore][gptmSubtimer][gptmCompareModeTimeoutInterrupt_] = timeoutCallbackFunction;

    /**
     * configure the timer
     */

    // power up the cycle if not done so yet
    if (!coreStates_[gptmCore].poweredUp_) {
        gptmSysctlEnableGptm_(gptmCore);            // activate clock
        coreStates_[gptmCore].poweredUp_ = true;
    }


    // get CPU frequency
     unsigned int cpuFreq = halSysCtlGetCpuFreq();
     gptmShiWriteGptmcfgGptmcfg_(gptmCore, gptmGptmcfgGptmcfgConfig16Bit_);  // 16_bit mode

    //, down, possibly with prescaler depending on the cpu freq.
    long int prescaler= ceil((timeoutInNs/1e9)*(cpuFreq/65536))-1; //prescaler PR= (16MHz/2^16 *timeoutInNs)-1

     long int tailr= ceil((timeoutInNs/1e9)*(cpuFreq/(prescaler+1)))-1 ; // load Value= (16MH/prescaler*timeoutInNs)-1 =tbilr

     long int tamr = ceil(((timeoutInNs-matchInNs)/1e9)*(cpuFreq/(prescaler+1)))-1; //Match Value = ((timeoutInNs-match)*16MH/(prescaler+1)*timeoutInNs)-1 =tbmr


    /**
     * Disable & countDown & enable GPTM Timer A Match Interrupt Enable
     * load reg,  When the timer is counting down, this register is used to load the starting count value into the timer.
     * match reg, This register is loaded with a match value. Interrupts can be generated when the timer value is equal to the value in this register in one-shot or periodic mode.
     */

    switch(gptmSubtimer){
        case halGptmSubtimerACore:
           gptmShiWriteGptmctlTaen_(gptmCore, gptmGptmctlTaenDisableTimerA_);                       //timer A Disable
           gptmShiWriteGptmtamrTaams_(gptmCore, gptmGptmtamrTaamsPwmModeEnabled_);                  //PWM Mode Enabled
           gptmShiWriteGptmtamrTacdir_(gptmCore, gptmGptmtamrTacdirTimerCountsDown_);               // down
           gptmShiWriteGptmtapr_(gptmCore, prescaler);                                              // Prescaler
           gptmShiWriteGptmtailrTailr_(gptmCore, tailr);                                            //load Value
           gptmShiWriteGptmtamatchrTamr_(gptmCore, tamr);                                           //Match Value
           gptmShiWriteGptmtamrTamie_(gptmCore, gptmGptmtamrTamieInterruptGenerated_);              //Match Interrupt Enable
           if(matchCallbackFunction){                                                               // if matchCallbackFunction
              gptmShiWriteGptmimrTamim_(gptmCore, gptmGptmimrTamimTimerAMatchInterruptMaskEnablen_);//Timer A Match Interrupt Mask Enablen
           }
           if(timeoutCallbackFunction){                                                             // if timeoutCallbackFunction
              gptmShiWriteGptmimrTatoim_(gptmCore, gptmGptmimrTatoimTimerATimeOutInterruptMaskEnablen_); //Timer A TimeOut InterruptMask Enablen
           }
           //If PWM interrupts are used
           gptmShiWriteGptmtamrTapwmie_(gptmCore, gptmGptmtamrTapwmiePwmCaptureEventInterruptEnabled_); //Interrupt Enable PwmCaptureEvent
           gptmShiWriteGptmctlTaote_(gptmCore, gptmGptmctlTaoteOutputTimerAAdcTriggerEnabl_);           // Output Timer A ADC Trigger Enabled

           if(EdgeTime){                                                                            //Edge count Mode (oder time count)
               gptmShiWriteGptmtamrTacmr_(gptmCore, gptmGptmtamrTacmrEdgeTimeMode_);                //Edge Time Mode
           }
           else{
               gptmShiWriteGptmtamrTacmr_(gptmCore, gptmGptmtamrTacmrEdgeCountMode_);              //Edge Count Mode
           }

           if(outputInverted){                                                                       //Output_inverted(oder normal)
               gptmShiWriteGptmctlTapwml_(gptmCore, gptmGptmctlTapwmlOutputInverted_);              //Output_inverted
           }
           else{
               gptmShiWriteGptmctlTapwml_(gptmCore, gptmGptmctlTapwmlOutputUnaffected_);            //Output_Unaffected
           }
           switch(modeEdge){                                                                  //Timer A Event Mode(postive oder negative oder beide )
               case postiveEdge:
                   gptmShiWriteGptmctlTaevent_(gptmCore, gptmGptmctlTaeventPositiveEdge_);           //set postive Edge
                   break;
               case negativeEdge:
                   gptmShiWriteGptmctlTaevent_(gptmCore, gptmGptmctlTaeventNegativeEdge_);          //set Negative Edge
                   break;
               case bothEdges:
                   gptmShiWriteGptmctlTaevent_(gptmCore, gptmGptmctlTaeventBothEdges_);             //set Both Edge
                   break;
           }
           break;

        case halGptmSubtimerBCore:
            gptmShiWriteGptmctlTben_(gptmCore, gptmGptmctlTbenDisableTimerB_);                      //timer B Disable
            gptmShiWriteGptmtbmrTbams_(gptmCore, gptmGptmtbmrTbamsPwmModeEnabled_);                 //PWM Mode Enabled
            gptmShiWriteGptmtbmrTbcdir_(gptmCore, gptmGptmtbmrTbcdirTimerCountsDown_);              // down
            gptmShiWriteGptmtbpr_(gptmCore, prescaler);                                             // Prescaler
            gptmShiWriteGptmtbilrTbilr_(gptmCore, tailr);                                           //load Value
            gptmShiWriteGptmtbmatchrTbmr_(gptmCore, tamr);                                          //Match Value
            gptmShiWriteGptmtbmrTbmie_(gptmCore, gptmGptmtbmrTbmieInterruptGenerated_);             //Match Interrupt Enable
            if(matchCallbackFunction){                                                              // if matchCallbackFunction
               gptmShiWriteGptmimrTbmim_(gptmCore, gptmGptmimrTbmimTimerBMatchInterruptMaskEnablen_);//Timer B Match Interrupt Mask Enablen
            }
            if(timeoutCallbackFunction){                                                             // if timeoutCallbackFunction
               gptmShiWriteGptmimrTbtoim_(gptmCore, gptmGptmimrTbtoimTimerBTimeOutInterruptMaskEnablen_); //Timer B TimeOut InterruptMask Enablen
            }
            //If PWM interrupts are used
            gptmShiWriteGptmtbmrTbpwmie_(gptmCore, gptmGptmtbmrTbpwmiePwmCaptureEventInterruptEnabled_); //Interrupt Enable PwmCaptureEvent
            gptmShiWriteGptmctlTbote_(gptmCore, gptmGptmctlTboteOutputTimerBAdcTriggerEnabled_);        // Output Timer B ADC Trigger Enabled

            if(EdgeTime){                                                                         //Edge count Mode ( time oder count)
                gptmShiWriteGptmtbmrTbcmr_(gptmCore, gptmGptmtbmrTbcmrEdgeTimeMode_);
            }
            else{
                gptmShiWriteGptmtbmrTbcmr_(gptmCore, gptmGptmtbmrTbcmrEdgeCountMode_);
            }

            if(outputInverted){                                                                 //Output_inverted(oder normal)
                gptmShiWriteGptmctlTbpwml_(gptmCore, gptmGptmctlTbpwmlOutputInverted_);
            }
            else{
                gptmShiWriteGptmctlTbpwml_(gptmCore, gptmGptmctlTbpwmlOutputUnaffected_);
            }
            switch(modeEdge){                                                                  //Timer B Event Mode(postive oder negative oder beide )
                case postiveEdge:
                    gptmShiWriteGptmctlTbevent_(gptmCore, gptmGptmctlTbeventPositiveEdge_);
                    break;
                case negativeEdge:
                    gptmShiWriteGptmctlTbevent_(gptmCore, gptmGptmctlTbeventNegativeEdge_);
                    break;
                case bothEdges:
                    gptmShiWriteGptmctlTbevent_(gptmCore, gptmGptmctlTbeventBothEdges_);
                    break;
            }
            break;
    }

    halNvicInstallISR(gptmIsr_[gptmCore][gptmSubtimer], gptmExceptions_[gptmCore][gptmSubtimer]); // install interrupt handler
    halNvicEnableInterrupt(gptmExceptions_[gptmCore][gptmSubtimer]);                              // activate the interrupt


    /**
     * clear all flags match & timeout
     */
    gptmShiWriteGptmicr_(gptmCore, gptmGptmicrTatocintClearsTatorisBit_);   //timer A timeout
    gptmShiWriteGptmicr_(gptmCore, gptmGptmicrTbtocintClearsTbtorisBit_);   //timer B timeout
    gptmShiWriteGptmicr_(gptmCore, gptmGptmicrTbmcintClearsTbmrisBit_);     //timer B Match
    gptmShiWriteGptmicr_(gptmCore, gptmGptmicrTamcintClearsTamrisBit_);     //timer A Match

    //todo:timer with gpio connected through Afsel & PTCL Register

    return handle;

}
