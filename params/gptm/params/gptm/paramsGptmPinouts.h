/*
 * paramsGptmPinouts.h
 *
 *  Created on: 07.04.2022
 *
 */

#ifndef PARAMS_GPTM_PARAMS_GPTM_PARAMSGPTMPINOUTS_H_
#define PARAMS_GPTM_PARAMS_GPTM_PARAMSGPTMPINOUTS_H_

#include "hal/gpio/halGpio.h"

/**
 * !! TO BE ADOPTED FOR GPTM !!! 
 */

/**
 * Number of necessary GPTM pinout configurations in a project
 */
enum ParamsGptmPinoutCount {
    paramsGptmPinoutCount = 1
};

static const struct gptmPinoutSetup_ paramsGptmPinoutSetups[paramsGptmPinoutCount] =
{
    //paramsUart2RxPD4TxPD5 [0]
    {
        .uartCore_ = uart2Core_,
        .rxPresent_ = true,
        .rxPin_ = halGpioU2RxPD4,
        .txPresent_ = true,
        .txPin_ = halGpioU2TxPD5
    }
};

#endif /* PARAMS_GPTM_PARAMS_GPTM_PARAMSGPTMPINOUTS_H_ */
