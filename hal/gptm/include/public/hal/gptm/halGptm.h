/*
 * halGptm.h
 *
 *  Created on: 07.04.2022
 *
 */

#ifndef HAL_GPTM_INCLUDE_PUBLIC_HAL_GPTM_HALGPTM_H_
#define HAL_GPTM_INCLUDE_PUBLIC_HAL_GPTM_HALGPTM_H_

#include <stdbool.h>
#include "hal/gptm/halGptmShiCores.h"
#include "hal/gptm/halGptmGptmSubtimerShiCores.h"

/**
 * @brief <b>16 bit compare mode handle</b>.
 * The structure contains data allowing to use a GPTM core in 16-bit compare mode.
 *
 * It is a forward declaration.
 */
struct HalGptmCompare16BitMode;
typedef struct HalGptmCompare16BitMode * const HalGptmCompare16BitModeHandle;

struct HalGptmPwmMode;
typedef struct HalGptmCompare16BitMode * const HalGptmPwmModeHandle;



void halGptmDriverInit(void);

/**
 * Configure the GPTM core in the compare mode.
 * The timer is not started yet.
 */
HalGptmCompare16BitModeHandle halGptmConfigure16BitCompareMode(
        enum HalGptmCores gptmCore,
        enum HalGptmSubtimerCores gptmSubtimer,
        long int matchInNs,
        long int timeoutInNs,
        void (*matchCallbackFunction)(void),
        void (*timeoutCallbackFunction)(void)
        );

/**
 * Active  the timer in the compare mode
 */
void halGptmCompareModeActivate(HalGptmCompare16BitModeHandle gptmHandle, bool const activate, bool const oneShot);

enum EventModeEdge {
    postiveEdge  = 0,
    negativeEdge = 1,
    bothEdges    = 2
};

/**
 * Configure the GPTM core in the PWM mode.
 * The timer is not started yet.
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
        );

// void halGptmPwmModeActivate(HalGptmPwmModeHandle gptmHandle, bool const activate, bool const oneShot);
 // frequency and fill factor

#endif /* HAL_GPTM_INCLUDE_PUBLIC_HAL_GPTM_HALGPTM_H_ */
