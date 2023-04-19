/*
 * main.c
 *
 */

// standard libraries
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


//FreeRTOS headers
#include <FreeRTOS.h>
#include <task.h>


// HAL libraries
#include "hal/sysctl/halSysctl.h"

#include "hal/gpio/halGpio.h"
#include "hal/gpio/halGpioShiCores.h"

#include "hal/gptm/halGptm.h"
#include "hal/gptm/halGptmShiCores.h"
#include "hal/gptm/halGptmGptmSubtimerShiCores.h"

#include "params/gptm/paramsGptmPinoutsNames.h"
#include "params/gptm/paramsGptm.h"


// echo task function
static void controlTaskT1_(void * taskParameters);
static void controlTaskT2_(void * taskParameters);


// error handler, used as callback function for errors
static void defaultApplicationErrorHandler_(void);
/**
 * Timer 1
 */
// GPTM callback functions
static void matchCallbackFunctionT1_(void);
static void timeoutCallbackFunctionT1_(void);
//gpio port &PIN
enum HalGpioCores const portT1 = halGpioPortDCore;
enum HalGpioPin const pinT1 = halGpioPin3;

/**
 * Timer 2
 */

static void matchCallbackFunctionT2_(void);
static void timeoutCallbackFunctionT2_(void);
//gpio port &PIN
enum HalGpioCores const portT2 = halGpioPortMCore;
enum HalGpioPin const pinT2 = halGpioPin4;

// structure containing parameters passed to Task function
struct ControlTaskParameters_ {
    HalGptmCompare16BitModeHandle gptmHandle_;
};

// echo task handle
static TaskHandle_t controlTaskHandle_ = NULL;

int main(void) {
/**
 * Timer1
 */
    // set CPU clock frequency
    halSysCtlSetCpuFreq(halSysCtlCpuFreq120MHz);

    // GPTM driver initialization
    halGptmDriverInit();

    // configure a GPTM in compare mode
    enum HalGptmCores gptmCoreT1 = halGptmTimer0Core;
    enum HalGptmSubtimerCores gptmSubtimerT1 = halGptmSubtimerACore;
    long int matchInNsT1 = 1e7;
    long int timeoutInNsT1 = 3e7;

    HalGptmCompare16BitModeHandle gptmCompare16BitModeHandleT1 = halGptmConfigure16BitCompareMode(
            gptmCoreT1,
            gptmSubtimerT1,
            matchInNsT1,
            timeoutInNsT1,
            matchCallbackFunctionT1_,
            timeoutCallbackFunctionT1_
            );


    // GPIO configuration, choose different pin if easier to connect
    halGpioPinSetAsSimpleDigitalIO(halGpioPortDCore, halGpioPin3, halGpioPinOutput);
   //halGpioPinWrite(port, pin, 0x1);

    // FreeRTOS task configuration
    struct ControlTaskParameters_ controlTaskParamtersT1 = { .gptmHandle_ = gptmCompare16BitModeHandleT1 };
    xTaskCreate(controlTaskT1_, "controlTask", 200, (void *) &controlTaskParamtersT1, tskIDLE_PRIORITY + 3, &controlTaskHandle_);



    /**
     * timer 2
     */
    // set CPU clock frequency
    //halSysCtlSetCpuFreq(halSysCtlCpuFreq120MHz);

    // GPTM driver initialization
   // halGptmDriverInit();

    // configure a GPTM in compare mode
    enum HalGptmCores gptmCoreT2 = halGptmTimer7Core;
    enum HalGptmSubtimerCores gptmSubtimerT2 = halGptmSubtimerACore;
    long int matchInNsT2 = 1e6;
    long int timeoutInNsT2 = 3e6;

    HalGptmCompare16BitModeHandle gptmCompare16BitModeHandleT2 = halGptmConfigure16BitCompareMode(
            gptmCoreT2,
            gptmSubtimerT2,
            matchInNsT2,
            timeoutInNsT2,
            matchCallbackFunctionT2_,
            timeoutCallbackFunctionT2_
            );


    // GPIO configuration, choose different pin if easier to connect
    halGpioPinSetAsSimpleDigitalIO(halGpioPortMCore, halGpioPin4, halGpioPinOutput);
   // halGpioPinWrite(port, pin, 0x1);

    // FreeRTOS task configuration
    struct ControlTaskParameters_ controlTaskParamtersT2 = { .gptmHandle_ = gptmCompare16BitModeHandleT2 };
    xTaskCreate(controlTaskT2_, "controlTask", 200, (void *) &controlTaskParamtersT2, tskIDLE_PRIORITY + 3, &controlTaskHandle_);

    // Start FreeRTOS scheduler.
    vTaskStartScheduler();

    // This statements should never be reached.
    defaultApplicationErrorHandler_();


}


/*
 * Task for echo functionality
 */
static void controlTaskT1_(void * taskParameters) {

    struct ControlTaskParameters_ const * const taskParametersCastT1 = (struct ControlTaskParameters_ *) taskParameters;
    HalGptmCompare16BitModeHandle gptmHandle_ = taskParametersCastT1->gptmHandle_;

    // start the timer
    bool activate = true;
    bool oneShot  = false;
    halGptmCompareModeActivate(gptmHandle_, activate, oneShot);



    /**
     * main control loop
     * does nothing at the moment
     */
    while(1)
    {
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}

/**
* Timer 2
*/

static void controlTaskT2_(void * taskParameters) {

    struct ControlTaskParameters_ const * const taskParametersCastT2 = (struct ControlTaskParameters_ *) taskParameters;
    HalGptmCompare16BitModeHandle gptmHandle_ = taskParametersCastT2->gptmHandle_;

    // start the timer
    bool activate = true;
    bool oneShot  = false;
    halGptmCompareModeActivate(gptmHandle_, activate, oneShot);



    /**
     * main control loop
     * does nothing at the moment
     */
    while(1)
    {
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}

static void matchCallbackFunctionT1_(void) {
    halGpioPinWrite(portT1, pinT1, 0x1);
}

static void timeoutCallbackFunctionT1_(void) {
    halGpioPinWrite(portT1, pinT1, 0x0);
}

static void matchCallbackFunctionT2_(void) {
    halGpioPinWrite(portT2, pinT2, 0x1);
}

static void timeoutCallbackFunctionT2_(void) {
    halGpioPinWrite(portT2, pinT2, 0x0);
}


/**
 * Callback function for UART error handling
 *
 *  Note:   Due to the while-loop the controller needs to be reset
 *          when an error occurs, useful for debugging
 */
static void defaultApplicationErrorHandler_(void) {

    while(1) {
      asm(" nop ");
    }

}
