//*****************************************************************************
// Name        : gptmShi.h
// Author      : Ole Rönna 
// Maintainer  : Prof. Dr. Paweł Buczek 
// Version     : 0.4 
// Copyright   : All rights reserved 
// Description : 
// This code was generated from a template. Manual changes to this file will 
// be overwritten if the code is regenerated. 
//
//*****************************************************************************

#ifndef HAL_GPTMSHI_H_
#define HAL_GPTMSHI_H_

#include "hal/gptm/halGptmShiCores.h"
#include "stdint.h"

//*****************************************************************************
//
// gptm registers
//
//*****************************************************************************

enum GptmRegisters_ {
	gptmGptmcfg_ = 0x00000000,
	gptmGptmtamr_ = 0x00000004,
	gptmGptmtbmr_ = 0x00000008,
	gptmGptmctl_ = 0x0000000C,
	gptmGptmsync_ = 0x00000010,
	gptmGptmimr_ = 0x00000018,
	gptmGptmris_ = 0x0000001C,
	gptmGptmmis_ = 0x00000020,
	gptmGptmicr_ = 0x00000024,
	gptmGptmtailr_ = 0x00000028,
	gptmGptmtbilr_ = 0x0000002C,
	gptmGptmtamatchr_ = 0x00000030,
	gptmGptmtbmatchr_ = 0x00000034,
	gptmGptmtapr_ = 0x00000038,
	gptmGptmtbpr_ = 0x0000003C,
	gptmGptmtapmr_ = 0x00000040,
	gptmGptmtbpmr_ = 0x00000044,
	gptmGptmtar_ = 0x00000048,
	gptmGptmtbr_ = 0x0000004C,
	gptmGptmtav_ = 0x00000050,
	gptmGptmtbv_ = 0x00000054,
	gptmGptmrtcpd_ = 0x00000058,
	gptmGptmtaps_ = 0x0000005C,
	gptmGptmtbps_ = 0x00000060,
	gptmGptmdmaev_ = 0x0000006C,
	gptmGptmadcev_ = 0x00000070,
	gptmGptmpp_ = 0x00000FC0,
	gptmGptmcc_ = 0x00000FC8
};


enum GptmGptmcfgGptmcfgValues_ {
	gptmGptmcfgGptmcfgConfig16Bit_ = 0x00000004,
	gptmGptmcfgGptmcfgConfig32BitReal_ = 0x00000001,
	gptmGptmcfgGptmcfgConfig32Bit_ = 0x00000000
};

enum GptmGptmtamrTamrValues_ {
	gptmGptmtamrTamrOneShotTimerMode_ = 0x00000001,
	gptmGptmtamrTamrPeriodicTimerMode_ = 0x00000002,
	gptmGptmtamrTamrCaptureMode_ = 0x00000003
};

enum GptmGptmtamrTacmrValues_ {
	gptmGptmtamrTacmrEdgeCountMode_ = 0x00000000,
	gptmGptmtamrTacmrEdgeTimeMode_ = 0x00000001
};

enum GptmGptmtamrTaamsValues_ {
	gptmGptmtamrTaamsCaptureOrCompareModeEnabled_ = 0x00000000,
	gptmGptmtamrTaamsPwmModeEnabled_ = 0x00000001
};

enum GptmGptmtamrTacdirValues_ {
	gptmGptmtamrTacdirTimerCountsDown_ = 0x00000000,
	gptmGptmtamrTacdirTimerCountsUp_ = 0x00000001
};

enum GptmGptmtamrTamieValues_ {
	gptmGptmtamrTamieMatchInterruptDisabled_ = 0x00000000,
	gptmGptmtamrTamieInterruptGenerated_ = 0x00000001
};

enum GptmGptmtamrTawotValues_ {
	gptmGptmtamrTawotTimeraNotWaitOnTrigger_ = 0x00000000,
	gptmGptmtamrTawotTimeraWaitOnTrigger_ = 0x00000001
};

enum GptmGptmtamrTasnapsValues_ {
	gptmGptmtamrTasnapsDisableSnapShotMode_ = 0x00000000,
	gptmGptmtamrTasnapsEnableSnapShotMode_ = 0x00000001
};

enum GptmGptmtamrTaildValues_ {
	gptmGptmtamrTaildUpdateGptmtarGptmtavRegisterOnNextCycle_ = 0x00000000,
	gptmGptmtamrTaildUpdateGptmtarGptmtavRegisterOnNextTimeOut_ = 0x00000001
};

enum GptmGptmtamrTapwmieValues_ {
	gptmGptmtamrTapwmiePwmCaptureEventInterruptDisabled_ = 0x00000000,
	gptmGptmtamrTapwmiePwmCaptureEventInterruptEnabled_ = 0x00000001
};

enum GptmGptmtamrTamrsuValues_ {
	gptmGptmtamrTamrsuUpdateGptmtamatchrGptmtaprRegisterOnNextCycle_ = 0x00000000,
	gptmGptmtamrTamrsuUpdateGptmtamatchrGptmtaprRegisterOnNextTimeOut_ = 0x00000001
};

enum GptmGptmtamrTaploValues_ {
	gptmGptmtamrTaploOutputUnaffected_ = 0x00000000,
	gptmGptmtamrTaploOutputInverted_ = 0x00000001
};

enum GptmGptmtamrTacintdValues_ {
	gptmGptmtamrTacintdTimeOutInterruptEnabled_ = 0x00000000,
	gptmGptmtamrTacintdTimeOutInterruptDisabled_ = 0x00000001
};

enum GptmGptmtamrTcactValues_ {
	gptmGptmtamrTcactDisableCompareOperations_ = 0x00000000,
	gptmGptmtamrTcactToggleStateOnTimeOut_ = 0x00000001,
	gptmGptmtamrTcactClearCcpOnTimeOut_ = 0x00000002,
	gptmGptmtamrTcactSetCcpOnTimeOut_ = 0x00000003,
	gptmGptmtamrTcactSetCcpImmediatelyAndToggleOnTimeOut_ = 0x00000004,
	gptmGptmtamrTcactClearCcpImmediatelyAndToggleOnTimeOut_ = 0x00000005,
	gptmGptmtamrTcactSetCcpImmediatelyAndClearOnTimeOut_ = 0x00000006,
	gptmGptmtamrTcactClearCcpImmediatelyAndSetOnTimeOut_ = 0x00000007
};

enum GptmGptmtbmrTbmrValues_ {
	gptmGptmtbmrTbmrOneShotTimerMode_ = 0x00000001,
	gptmGptmtbmrTbmrPeriodicTimerMode_ = 0x00000002,
	gptmGptmtbmrTbmrCaptureMode_ = 0x00000003
};

enum GptmGptmtbmrTbcmrValues_ {
	gptmGptmtbmrTbcmrEdgeCountMode_ = 0x00000000,
	gptmGptmtbmrTbcmrEdgeTimeMode_ = 0x00000001
};

enum GptmGptmtbmrTbamsValues_ {
	gptmGptmtbmrTbamsCaptureOrCompareModeEnabled_ = 0x00000000,
	gptmGptmtbmrTbamsPwmModeEnabled_ = 0x00000001
};

enum GptmGptmtbmrTbcdirValues_ {
	gptmGptmtbmrTbcdirTimerCountsDown_ = 0x00000000,
	gptmGptmtbmrTbcdirTimerCountsUp_ = 0x00000001
};

enum GptmGptmtbmrTbmieValues_ {
	gptmGptmtbmrTbmieMatchInterruptDisabled_ = 0x00000000,
	gptmGptmtbmrTbmieInterruptGenerated_ = 0x00000001
};

enum GptmGptmtbmrTbwotValues_ {
	gptmGptmtbmrTbwotTimerbNotWaitOnTrigger_ = 0x00000000,
	gptmGptmtbmrTbwotTimerbWaitOnTrigger_ = 0x00000001
};

enum GptmGptmtbmrTbsnapsValues_ {
	gptmGptmtbmrTbsnapsDisableSnapShotMode_ = 0x00000000,
	gptmGptmtbmrTbsnapsEnableSnapShotMode_ = 0x00000001
};

enum GptmGptmtbmrTbildValues_ {
	gptmGptmtbmrTbildUpdateGptmtbrGptmtbvRegisterOnNextCycle_ = 0x00000000,
	gptmGptmtbmrTbildUpdateGptmtbrGptmtbvRegisterOnNextTimeOut_ = 0x00000001
};

enum GptmGptmtbmrTbpwmieValues_ {
	gptmGptmtbmrTbpwmiePwmCaptureEventInterruptDisabled_ = 0x00000000,
	gptmGptmtbmrTbpwmiePwmCaptureEventInterruptEnabled_ = 0x00000001
};

enum GptmGptmtbmrTbmrsuValues_ {
	gptmGptmtbmrTbmrsuUpdateGptmtbmatchrGptmtbprRegisterOnNextCycle_ = 0x00000000,
	gptmGptmtbmrTbmrsuUpdateGptmtbmatchrGptmtbprRegisterOnNextTimeOut_ = 0x00000001
};

enum GptmGptmtbmrTbploValues_ {
	gptmGptmtbmrTbploOutputUnaffected_ = 0x00000000,
	gptmGptmtbmrTbploOutputInverted_ = 0x00000001
};

enum GptmGptmtbmrTbcintdValues_ {
	gptmGptmtbmrTbcintdTimeOutInterruptEnabled_ = 0x00000000,
	gptmGptmtbmrTbcintdTimeOutInterruptDisabled_ = 0x00000001
};

enum GptmGptmtbmrTcactValues_ {
	gptmGptmtbmrTcactDisableCompareOperations_ = 0x00000000,
	gptmGptmtbmrTcactToggleStateOnTimeOut_ = 0x00000001,
	gptmGptmtbmrTcactClearCcpOnTimeOut_ = 0x00000002,
	gptmGptmtbmrTcactSetCcpOnTimeOut_ = 0x00000003,
	gptmGptmtbmrTcactSetCcpImmediatelyAndToggleOnTimeOut_ = 0x00000004,
	gptmGptmtbmrTcactClearCcpImmediatelyAndToggleOnTimeOut_ = 0x00000005,
	gptmGptmtbmrTcactSetCcpImmediatelyAndClearOnTimeOut_ = 0x00000006,
	gptmGptmtbmrTcactClearCcpImmediatelyAndSetOnTimeOut_ = 0x00000007
};

enum GptmGptmctlTaenValues_ {
	gptmGptmctlTaenDisableTimerA_ = 0x00000000,
	gptmGptmctlTaenEnableTimerA_ = 0x00000001
};

enum GptmGptmctlTastallValues_ {
	gptmGptmctlTastallTimerAContinuesCounting_ = 0x00000000,
	gptmGptmctlTastallTimerAFreezesCounting_ = 0x00000001
};

enum GptmGptmctlTaeventValues_ {
	gptmGptmctlTaeventPositiveEdge_ = 0x00000000,
	gptmGptmctlTaeventNegativeEdge_ = 0x00000002,
	gptmGptmctlTaeventBothEdges_ = 0x00000003
};

enum GptmGptmctlRtcenValues_ {
	gptmGptmctlRtcenRtcCountingFreezes_ = 0x00000000,
	gptmGptmctlRtcenRtcCountingContinues_ = 0x00000001
};

enum GptmGptmctlTaoteValues_ {
	gptmGptmctlTaoteOutputTimerAAdcTriggerDisabled_ = 0x00000000,
	gptmGptmctlTaoteOutputTimerAAdcTriggerEnabl_ = 0x00000001
};

enum GptmGptmctlTapwmlValues_ {
	gptmGptmctlTapwmlOutputUnaffected_ = 0x00000000,
	gptmGptmctlTapwmlOutputInverted_ = 0x00000001
};

enum GptmGptmctlTbenValues_ {
	gptmGptmctlTbenDisableTimerB_ = 0x00000000,
	gptmGptmctlTbenEnableTimerB_ = 0x00000001
};

enum GptmGptmctlTbstallValues_ {
	gptmGptmctlTbstallTimerBContinuesCounting_ = 0x00000000,
	gptmGptmctlTbstallTimerBFreezesCounting_ = 0x00000001
};

enum GptmGptmctlTbeventValues_ {
	gptmGptmctlTbeventPositiveEdge_ = 0x00000000,
	gptmGptmctlTbeventNegativeEdge_ = 0x00000001,
	gptmGptmctlTbeventBothEdges_ = 0x00000003
};

enum GptmGptmctlTboteValues_ {
	gptmGptmctlTboteOutputTimerBAdcTriggerDisabled_ = 0x00000000,
	gptmGptmctlTboteOutputTimerBAdcTriggerEnabled_ = 0x00000001
};

enum GptmGptmctlTbpwmlValues_ {
	gptmGptmctlTbpwmlOutputUnaffected_ = 0x00000000,
	gptmGptmctlTbpwmlOutputInverted_ = 0x00000001
};

enum GptmGptmsyncSynct0Values_ {
	gptmGptmsyncSynct0Timer0IsNotAffected_ = 0x00000000,
	gptmGptmsyncSynct0ATimeoutEventForTimerAOfGptm0Triggeren_ = 0x00000001,
	gptmGptmsyncSynct0ATimeoutEventForTimerBOfGptm0Triggeren_ = 0x00000002,
	gptmGptmsyncSynct0BothTimerGptm0Triggeren_ = 0x00000003
};

enum GptmGptmsyncSynct1Values_ {
	gptmGptmsyncSynct1Timer1IsNotAffected_ = 0x00000000,
	gptmGptmsyncSynct1ATimeoutEventForTimerAOfGptm1Triggeren_ = 0x00000001,
	gptmGptmsyncSynct1ATimeoutEventForTimerBOfGptm1Triggeren_ = 0x00000002,
	gptmGptmsyncSynct1BothTimerGptm1Triggeren_ = 0x00000003
};

enum GptmGptmsyncSynct2Values_ {
	gptmGptmsyncSynct2Timer2IsNotAffected_ = 0x00000000,
	gptmGptmsyncSynct2ATimeoutEventForTimerAOfGptm2Triggeren_ = 0x00000001,
	gptmGptmsyncSynct2ATimeoutEventForTimerBOfGptm2Triggeren_ = 0x00000002,
	gptmGptmsyncSynct2BothTimerGptm2Triggeren_ = 0x00000003
};

enum GptmGptmsyncSynct3Values_ {
	gptmGptmsyncSynct3Timer3IsNotAffected_ = 0x00000000,
	gptmGptmsyncSynct3ATimeoutEventForTimerAOfGptm3Triggeren_ = 0x00000001,
	gptmGptmsyncSynct3ATimeoutEventForTimerBOfGptm3Triggeren_ = 0x00000002,
	gptmGptmsyncSynct3BothTimerGptm3Triggeren_ = 0x00000003
};

enum GptmGptmsyncSynct4Values_ {
	gptmGptmsyncSynct4Timer4IsNotAffected_ = 0x00000000,
	gptmGptmsyncSynct4ATimeoutEventForTimerAOfGptm4Triggeren_ = 0x00000001,
	gptmGptmsyncSynct4ATimeoutEventForTimerBOfGptm4Triggeren_ = 0x00000002,
	gptmGptmsyncSynct4BothTimerGptm4Triggeren_ = 0x00000003
};

enum GptmGptmsyncSynct5Values_ {
	gptmGptmsyncSynct5Timer5IsNotAffected_ = 0x00000000,
	gptmGptmsyncSynct5ATimeoutEventForTimerAOfGptm5Triggeren_ = 0x00000001,
	gptmGptmsyncSynct5ATimeoutEventForTimerBOfGptm5Triggeren_ = 0x00000002,
	gptmGptmsyncSynct5BothTimerGptm5Triggeren_ = 0x00000003
};

enum GptmGptmsyncSynct6Values_ {
	gptmGptmsyncSynct6Timer6IsNotAffected_ = 0x00000000,
	gptmGptmsyncSynct6ATimeoutEventForTimerAOfGptm6Triggeren_ = 0x00000001,
	gptmGptmsyncSynct6ATimeoutEventForTimerBOfGptm6Triggeren_ = 0x00000002,
	gptmGptmsyncSynct6BothTimerGptm6Triggeren_ = 0x00000003
};

enum GptmGptmsyncSynct7Values_ {
	gptmGptmsyncSynct7Timer7IsNotAffected_ = 0x00000000,
	gptmGptmsyncSynct7ATimeoutEventForTimerAOfGptm7Triggeren_ = 0x00000001,
	gptmGptmsyncSynct7ATimeoutEventForTimerBOfGptm7Triggeren_ = 0x00000002,
	gptmGptmsyncSynct7BothTimerGptm7Triggeren_ = 0x00000003
};

enum GptmGptmimrTatoimValues_ {
	gptmGptmimrTatoimTimerATimeOutInterruptMaskDisablen_ = 0x00000000,
	gptmGptmimrTatoimTimerATimeOutInterruptMaskEnablen_ = 0x00000001
};

enum GptmGptmimrCamimValues_ {
	gptmGptmimrCamimTimerACaptureModeMatchInterruptMaskDisablen_ = 0x00000000,
	gptmGptmimrCamimTimerACaptureModeMatchInterruptMaskEnablen_ = 0x00000001
};

enum GptmGptmimrCaeimValues_ {
	gptmGptmimrCaeimTimerACaptureModeEventInterruptMaskDisablen_ = 0x00000000,
	gptmGptmimrCaeimTimerACaptureModeEventInterruptMaskEnablen_ = 0x00000001
};

enum GptmGptmimrRtcimValues_ {
	gptmGptmimrRtcimGptmRtcInterruptMaskDisablen_ = 0x00000000,
	gptmGptmimrRtcimGptmRtcInterruptMaskEnablen_ = 0x00000001
};

enum GptmGptmimrTamimValues_ {
	gptmGptmimrTamimTimerAMatchInterruptMaskDisablen_ = 0x00000000,
	gptmGptmimrTamimTimerAMatchInterruptMaskEnablen_ = 0x00000001
};

enum GptmGptmimrDmaaimValues_ {
	gptmGptmimrDmaaimTimerADmaDoneInterruptMaskDisablen_ = 0x00000000,
	gptmGptmimrDmaaimTimerADmaDoneInterruptMaskEnablen_ = 0x00000001
};

enum GptmGptmimrTbtoimValues_ {
	gptmGptmimrTbtoimTimerBTimeOutInterruptMaskDisablen_ = 0x00000000,
	gptmGptmimrTbtoimTimerBTimeOutInterruptMaskEnablen_ = 0x00000001
};

enum GptmGptmimrCbmimValues_ {
	gptmGptmimrCbmimTimerBCaptureModeMatchInterruptMaskDisablen_ = 0x00000000,
	gptmGptmimrCbmimTimerBCaptureModeMatchInterruptMaskEnablen_ = 0x00000001
};

enum GptmGptmimrCbeimValues_ {
	gptmGptmimrCbeimTimerBCaptureModeEventInterruptMaskDisablen_ = 0x00000000,
	gptmGptmimrCbeimTimerBCaptureModeEventInterruptMaskEnablen_ = 0x00000001
};

enum GptmGptmimrTbmimValues_ {
	gptmGptmimrTbmimTimerBMatchInterruptMaskDisablen_ = 0x00000000,
	gptmGptmimrTbmimTimerBMatchInterruptMaskEnablen_ = 0x00000001
};

enum GptmGptmimrDmabimValues_ {
	gptmGptmimrDmabimTimerBDmaDoneInterruptMaskDisablen_ = 0x00000000,
	gptmGptmimrDmabimTimerBDmaDoneInterruptMaskEnablen_ = 0x00000001
};

enum GptmGptmrisTatorisValues_ {
	gptmGptmrisTatorisTimerAHasNotTimeOut_ = 0x00000000,
	gptmGptmrisTatorisTimerAHasTimeOut_ = 0x00000001
};

enum GptmGptmrisCamrisValues_ {
	gptmGptmrisCamrisTimerACaptureModeMatchHasNotOccurred_ = 0x00000000,
	gptmGptmrisCamrisTimerACaptureModeMatchHasOccurred_ = 0x00000001
};

enum GptmGptmrisCaerisValues_ {
	gptmGptmrisCaerisTimerACaptureModeEventHasNotOccurred_ = 0x00000000,
	gptmGptmrisCaerisTimerACaptureModeEventHasOccurred_ = 0x00000001
};

enum GptmGptmrisRtcrisValues_ {
	gptmGptmrisRtcrisGptmRtcHasNotOccurred_ = 0x00000000,
	gptmGptmrisRtcrisGptmRtcHasOccurred_ = 0x00000001
};

enum GptmGptmrisTamrisValues_ {
	gptmGptmrisTamrisTimerAMatchValueHasNotReached_ = 0x00000000,
	gptmGptmrisTamrisTamieIsSet_ = 0x00000001
};

enum GptmGptmrisDmaarisValues_ {
	gptmGptmrisDmaarisTimerADmaTransferHasNotCompleted_ = 0x00000000,
	gptmGptmrisDmaarisTimerADmaTransferHasCompleted_ = 0x00000001
};

enum GptmGptmrisTbtorisValues_ {
	gptmGptmrisTbtorisTimerBHasNotTimeOut_ = 0x00000000,
	gptmGptmrisTbtorisTimerBHasTimeOut_ = 0x00000001
};

enum GptmGptmrisCbmrisValues_ {
	gptmGptmrisCbmrisTimerBCaptureModeMatchHasNotOccurred_ = 0x00000000,
	gptmGptmrisCbmrisTimerBCaptureModeMatchHasOccurred_ = 0x00000001
};

enum GptmGptmrisCberisValues_ {
	gptmGptmrisCberisTimerBCaptureModeEventHasNotOccurred_ = 0x00000000,
	gptmGptmrisCberisTimerBCaptureModeEventHasOccurred_ = 0x00000001
};

enum GptmGptmrisTbmrisValues_ {
	gptmGptmrisTbmrisTimerBMatchValueHasNotReached_ = 0x00000000,
	gptmGptmrisTbmrisTbmieIsSet_ = 0x00000001
};

enum GptmGptmrisDmabrisValues_ {
	gptmGptmrisDmabrisTimerBDmaTransferHasNotCompleted_ = 0x00000000,
	gptmGptmrisDmabrisTimerBDmaTransferHasCompleted_ = 0x00000001
};

enum GptmGptmmisTatomisValues_ {
	gptmGptmmisTatomisTimerATimeOutInterruptHasNotOccurredOrMasked_ = 0x00000000,
	gptmGptmmisTatomisUnmaskedTimerATimeOutInterruptHasOccurred_ = 0x00000001
};

enum GptmGptmmisCammisValues_ {
	gptmGptmmisCammisCaptureAModeMatchInterruptHasNotOccurredOrMasked_ = 0x00000000,
	gptmGptmmisCammisUnmaskedCaptureAModeMatchInterruptHasOccurred_ = 0x00000001
};

enum GptmGptmmisCaemisValues_ {
	gptmGptmmisCaemisCaptureAEventInterruptHasNotOccurredOrMasked_ = 0x00000000,
	gptmGptmmisCaemisUnmaskedCaptureAEventInterruptHasOccurred_ = 0x00000001
};

enum GptmGptmmisRtcmisValues_ {
	gptmGptmmisRtcmisRtcEventInterruptHasNotOccurredOrMasked_ = 0x00000000,
	gptmGptmmisRtcmisUnmaskedRtcEventInterruptHasOccurred_ = 0x00000001
};

enum GptmGptmmisTammisValues_ {
	gptmGptmmisTammisTimerAModeMatchInterruptHasNotOccurredOrMasked_ = 0x00000000,
	gptmGptmmisTammisUnmaskedTimerAModeMatchInterruptHasOccurred_ = 0x00000001
};

enum GptmGptmmisDmaamisValues_ {
	gptmGptmmisDmaamisTimerADmaDoneInterruptHasNotOccurredOrMasked_ = 0x00000000,
	gptmGptmmisDmaamisUnmaskedTimerADmaDoneInterruptHasOccurred_ = 0x00000001
};

enum GptmGptmmisTbtomisValues_ {
	gptmGptmmisTbtomisTimerBTimeOutInterruptHasNotOccurredOrMasked_ = 0x00000000,
	gptmGptmmisTbtomisUnmaskedTimerBTimeOutInterruptHasOccurred_ = 0x00000001
};

enum GptmGptmmisCbmmisValues_ {
	gptmGptmmisCbmmisCaptureBModeMatchInterruptHasNotOccurredOrMasked_ = 0x00000000,
	gptmGptmmisCbmmisUnmaskedCaptureBModeMatchInterruptHasOccurred_ = 0x00000001
};

enum GptmGptmmisCbemisValues_ {
	gptmGptmmisCbemisCaptureBEventInterruptHasNotOccurredOrMasked_ = 0x00000000,
	gptmGptmmisCbemisUnmaskedCaptureBEventInterruptHasOccurred_ = 0x00000001
};

enum GptmGptmmisTbmmisValues_ {
	gptmGptmmisTbmmisTimerBModeMatchInterruptHasNotOccurredOrMasked_ = 0x00000000,
	gptmGptmmisTbmmisUnmaskedTimerBModeMatchInterruptHasOccurred_ = 0x00000001
};

enum GptmGptmmisDmabmisValues_ {
	gptmGptmmisDmabmisTimerBDmaDoneInterruptHasNotOccurredOrMasked_ = 0x00000000,
	gptmGptmmisDmabmisUnmaskedTimerBDmaDoneInterruptHasOccurred_ = 0x00000001
};

enum GptmGptmicrTatocintValues_ {
	gptmGptmicrTatocintReset_ = 0x00000000,
	gptmGptmicrTatocintClearsTatorisBit_ = 0x00000001
};

enum GptmGptmicrCamcintValues_ {
	gptmGptmicrCamcintReset_ = 0x00000000,
	gptmGptmicrCamcintClearsCamrisBit_ = 0x00000001
};

enum GptmGptmicrCaecintValues_ {
	gptmGptmicrCaecintReset_ = 0x00000000,
	gptmGptmicrCaecintClearsCaerisBit_ = 0x00000001
};

enum GptmGptmicrRtccintValues_ {
	gptmGptmicrRtccintReset_ = 0x00000000,
	gptmGptmicrRtccintClearsRtcrisBit_ = 0x00000001
};

enum GptmGptmicrTamcintValues_ {
	gptmGptmicrTamcintReset_ = 0x00000000,
	gptmGptmicrTamcintClearsTamrisBit_ = 0x00000001
};

enum GptmGptmicrDmaaintValues_ {
	gptmGptmicrDmaaintReset_ = 0x00000000,
	gptmGptmicrDmaaintClearsDmaarisBit_ = 0x00000001
};

enum GptmGptmicrTbtocintValues_ {
	gptmGptmicrTbtocintReset_ = 0x00000000,
	gptmGptmicrTbtocintClearsTbtorisBit_ = 0x00000001
};

enum GptmGptmicrCbmcintValues_ {
	gptmGptmicrCbmcintReset_ = 0x00000000,
	gptmGptmicrCbmcintClearsCbmrisBit_ = 0x00000001
};

enum GptmGptmicrCbecintValues_ {
	gptmGptmicrCbecintReset_ = 0x00000000,
	gptmGptmicrCbecintClearsCberisBit_ = 0x00000001
};

enum GptmGptmicrTbmcintValues_ {
	gptmGptmicrTbmcintReset_ = 0x00000000,
	gptmGptmicrTbmcintClearsTbmrisBit_ = 0x00000001
};

enum GptmGptmicrDmabintValues_ {
	gptmGptmicrDmabintReset_ = 0x00000000,
	gptmGptmicrDmabintClearsDmabrisBit_ = 0x00000001
};

enum GptmGptmdmaevTatodmaenValues_ {
	gptmGptmdmaevTatodmaenTimerATimeOutDmaTriggerDisabled_ = 0x00000000,
	gptmGptmdmaevTatodmaenTimerATimeOutDmaTriggerEnabled_ = 0x00000001
};

enum GptmGptmdmaevCamdmaenValues_ {
	gptmGptmdmaevCamdmaenTimerACaptureMatchDmaTriggerDisabled_ = 0x00000000,
	gptmGptmdmaevCamdmaenTimerACaptureMatchDmaTriggerEnabled_ = 0x00000001
};

enum GptmGptmdmaevCaedmaenValues_ {
	gptmGptmdmaevCaedmaenTimerACaptureEventDmaTriggerDisabled_ = 0x00000000,
	gptmGptmdmaevCaedmaenTimerACaptureEventDmaTriggerEnabled_ = 0x00000001
};

enum GptmGptmdmaevRtcdmaenValues_ {
	gptmGptmdmaevRtcdmaenTimerARtcMatchDmaTriggerDisabled_ = 0x00000000,
	gptmGptmdmaevRtcdmaenTimerARtcMatchDmaTriggerEnabled_ = 0x00000001
};

enum GptmGptmdmaevTamdmaenValues_ {
	gptmGptmdmaevTamdmaenTimerAModeMatchDmaTriggerDisabled_ = 0x00000000,
	gptmGptmdmaevTamdmaenTimerAModeMatchDmaTriggerEnabled_ = 0x00000001
};

enum GptmGptmdmaevTbtodmaenValues_ {
	gptmGptmdmaevTbtodmaenTimerBTimeOutDmaTriggerDisabled_ = 0x00000000,
	gptmGptmdmaevTbtodmaenTimerBTimeOutDmaTriggerEnabled_ = 0x00000001
};

enum GptmGptmdmaevCbmdmaenValues_ {
	gptmGptmdmaevCbmdmaenTimerBCaptureMatchDmaTriggerDisabled_ = 0x00000000,
	gptmGptmdmaevCbmdmaenTimerBCaptureMatchDmaTriggerEnabled_ = 0x00000001
};

enum GptmGptmdmaevCbedmaenValues_ {
	gptmGptmdmaevCbedmaenTimerBCaptureEventDmaTriggerDisabled_ = 0x00000000,
	gptmGptmdmaevCbedmaenTimerBCaptureEventDmaTriggerEnabled_ = 0x00000001
};

enum GptmGptmdmaevTbmdmaenValues_ {
	gptmGptmdmaevTbmdmaenTimerBModeMatchDmaTriggerDisabled_ = 0x00000000,
	gptmGptmdmaevTbmdmaenTimerBModeMatchDmaTriggerEnabled_ = 0x00000001
};

enum GptmGptmadcevTatoadcenValues_ {
	gptmGptmadcevTatoadcenTimerATimeOutEventAdcTriggerDisabled_ = 0x00000000,
	gptmGptmadcevTatoadcenTimerATimeOutEventAdcTriggerEnabled_ = 0x00000001
};

enum GptmGptmadcevCamadcenValues_ {
	gptmGptmadcevCamadcenTimerACaptureMatchAdcTriggerDisabled_ = 0x00000000,
	gptmGptmadcevCamadcenTimerACaptureMatchAdcTriggerEnabled_ = 0x00000001
};

enum GptmGptmadcevCaeadcenValues_ {
	gptmGptmadcevCaeadcenTimerACaptureEventAdcTriggerDisabled_ = 0x00000000,
	gptmGptmadcevCaeadcenTimerACaptureEventAdcTriggerEnabled_ = 0x00000001
};

enum GptmGptmadcevRtcadcenValues_ {
	gptmGptmadcevRtcadcenTimerARtcMatchAdcTriggerDisabled_ = 0x00000000,
	gptmGptmadcevRtcadcenTimerARtcMatchAdcTriggerEnabled_ = 0x00000001
};

enum GptmGptmadcevTamadcenValues_ {
	gptmGptmadcevTamadcenTimerAModeMatchAdcTriggerDisabled_ = 0x00000000,
	gptmGptmadcevTamadcenTimerAModeMatchAdcTriggerEnabled_ = 0x00000001
};

enum GptmGptmadcevTbtoadcenValues_ {
	gptmGptmadcevTbtoadcenTimerBTimeOutAdcTriggerDisabled_ = 0x00000000,
	gptmGptmadcevTbtoadcenTimerBTimeOutAdcTriggerEnabled_ = 0x00000001
};

enum GptmGptmadcevCbmadcenValues_ {
	gptmGptmadcevCbmadcenTimerBCaptureMatchAdcTriggerDisabled_ = 0x00000000,
	gptmGptmadcevCbmadcenTimerBCaptureMatchAdcTriggerEnabled_ = 0x00000001
};

enum GptmGptmadcevCbeadcenValues_ {
	gptmGptmadcevCbeadcenTimerBCaptureEventAdcTriggerDisabled_ = 0x00000000,
	gptmGptmadcevCbeadcenTimerBCaptureEventAdcTriggerEnabled_ = 0x00000001
};

enum GptmGptmadcevTbmadcenValues_ {
	gptmGptmadcevTbmadcenTimerBModeMatchAdcTriggerDisabled_ = 0x00000000,
	gptmGptmadcevTbmadcenTimerBModeMatchAdcTriggerEnabled_ = 0x00000001
};

enum GptmGptmppSizeValues_ {
	gptmGptmppSizeTimerAAndBCounters16BitsWith8BitPrescaleCounter_ = 0x00000000,
	gptmGptmppSizeTimerAAndBCounters32BitsWith16BitPrescaleCounter_ = 0x00000001
};

enum GptmGptmppChainValues_ {
	gptmGptmppChainTimerNotCapableOfChainingWithPreviouslyNumberedTimer_ = 0x00000000,
	gptmGptmppChainTimerCapableOfChainingWithPreviouslyNumberedTimer_ = 0x00000001
};

enum GptmGptmppSynccntValues_ {
	gptmGptmppSynccntTimerNotCapableOfSynchronizingCounterValueWithOtherGptimers_ = 0x00000000,
	gptmGptmppSynccntTimerCapableOfSynchronizingCounterValueWithOtherGptimers_ = 0x00000001
};

enum GptmGptmppAltclkValues_ {
	gptmGptmppAltclkAlternateClockSourceAltclkNotAvailableToTimerModule_ = 0x00000000,
	gptmGptmppAltclkAlternateClockSourceAltclkAvailableToTimerModule_ = 0x00000001
};

enum GptmGptmccAltclkValues_ {
	gptmGptmccAltclkSystemClockSourceAsDefinedByRsclkcfg_ = 0x00000000,
	gptmGptmccAltclkAlternateClockSourceAsDefinedByAltclkcfg_ = 0x00000001
};

uint32_t gptmShiReadGptmcfg_(enum HalGptmCores const core);
void gptmShiWriteGptmcfg_(enum HalGptmCores const core, uint32_t const registerValue);

uint32_t gptmShiReadGptmtamr_(enum HalGptmCores const core);
void gptmShiWriteGptmtamr_(enum HalGptmCores const core, uint32_t const registerValue);

uint32_t gptmShiReadGptmtbmr_(enum HalGptmCores const core);
void gptmShiWriteGptmtbmr_(enum HalGptmCores const core, uint32_t const registerValue);

uint32_t gptmShiReadGptmctl_(enum HalGptmCores const core);
void gptmShiWriteGptmctl_(enum HalGptmCores const core, uint32_t const registerValue);

uint32_t gptmShiReadGptmsync_(enum HalGptmCores const core);
void gptmShiWriteGptmsync_(enum HalGptmCores const core, uint32_t const registerValue);

uint32_t gptmShiReadGptmimr_(enum HalGptmCores const core);
void gptmShiWriteGptmimr_(enum HalGptmCores const core, uint32_t const registerValue);

uint32_t gptmShiReadGptmris_(enum HalGptmCores const core);
void gptmShiWriteGptmris_(enum HalGptmCores const core, uint32_t const registerValue);

uint32_t gptmShiReadGptmmis_(enum HalGptmCores const core);
void gptmShiWriteGptmmis_(enum HalGptmCores const core, uint32_t const registerValue);

uint32_t gptmShiReadGptmicr_(enum HalGptmCores const core);
void gptmShiWriteGptmicr_(enum HalGptmCores const core, uint32_t const registerValue);

uint32_t gptmShiReadGptmtailr_(enum HalGptmCores const core);
void gptmShiWriteGptmtailr_(enum HalGptmCores const core, uint32_t const registerValue);

uint32_t gptmShiReadGptmtbilr_(enum HalGptmCores const core);
void gptmShiWriteGptmtbilr_(enum HalGptmCores const core, uint32_t const registerValue);

uint32_t gptmShiReadGptmtamatchr_(enum HalGptmCores const core);
void gptmShiWriteGptmtamatchr_(enum HalGptmCores const core, uint32_t const registerValue);

uint32_t gptmShiReadGptmtbmatchr_(enum HalGptmCores const core);
void gptmShiWriteGptmtbmatchr_(enum HalGptmCores const core, uint32_t const registerValue);

uint32_t gptmShiReadGptmtapr_(enum HalGptmCores const core);
void gptmShiWriteGptmtapr_(enum HalGptmCores const core, uint32_t const registerValue);

uint32_t gptmShiReadGptmtbpr_(enum HalGptmCores const core);
void gptmShiWriteGptmtbpr_(enum HalGptmCores const core, uint32_t const registerValue);

uint32_t gptmShiReadGptmtapmr_(enum HalGptmCores const core);
void gptmShiWriteGptmtapmr_(enum HalGptmCores const core, uint32_t const registerValue);

uint32_t gptmShiReadGptmtbpmr_(enum HalGptmCores const core);
void gptmShiWriteGptmtbpmr_(enum HalGptmCores const core, uint32_t const registerValue);

uint32_t gptmShiReadGptmtar_(enum HalGptmCores const core);
void gptmShiWriteGptmtar_(enum HalGptmCores const core, uint32_t const registerValue);

uint32_t gptmShiReadGptmtbr_(enum HalGptmCores const core);
void gptmShiWriteGptmtbr_(enum HalGptmCores const core, uint32_t const registerValue);

uint32_t gptmShiReadGptmtav_(enum HalGptmCores const core);
void gptmShiWriteGptmtav_(enum HalGptmCores const core, uint32_t const registerValue);

uint32_t gptmShiReadGptmtbv_(enum HalGptmCores const core);
void gptmShiWriteGptmtbv_(enum HalGptmCores const core, uint32_t const registerValue);

uint32_t gptmShiReadGptmrtcpd_(enum HalGptmCores const core);
void gptmShiWriteGptmrtcpd_(enum HalGptmCores const core, uint32_t const registerValue);

uint32_t gptmShiReadGptmtaps_(enum HalGptmCores const core);
void gptmShiWriteGptmtaps_(enum HalGptmCores const core, uint32_t const registerValue);

uint32_t gptmShiReadGptmtbps_(enum HalGptmCores const core);
void gptmShiWriteGptmtbps_(enum HalGptmCores const core, uint32_t const registerValue);

uint32_t gptmShiReadGptmdmaev_(enum HalGptmCores const core);
void gptmShiWriteGptmdmaev_(enum HalGptmCores const core, uint32_t const registerValue);

uint32_t gptmShiReadGptmadcev_(enum HalGptmCores const core);
void gptmShiWriteGptmadcev_(enum HalGptmCores const core, uint32_t const registerValue);

uint32_t gptmShiReadGptmpp_(enum HalGptmCores const core);
void gptmShiWriteGptmpp_(enum HalGptmCores const core, uint32_t const registerValue);

uint32_t gptmShiReadGptmcc_(enum HalGptmCores const core);
void gptmShiWriteGptmcc_(enum HalGptmCores const core, uint32_t const registerValue);

uint32_t gptmShiReadGptmcfgGptmcfg_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmcfgGptmcfg_(uint32_t const registerValue);

void gptmShiWriteGptmcfgGptmcfg_(enum HalGptmCores const core, enum GptmGptmcfgGptmcfgValues_ const gptmcfg);
void gptmShiWriteUIGptmcfgGptmcfg_(uint32_t * const registerValue, enum GptmGptmcfgGptmcfgValues_ const gptmcfg);

uint32_t gptmShiReadGptmtamrTamr_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtamrTamr_(uint32_t const registerValue);

void gptmShiWriteGptmtamrTamr_(enum HalGptmCores const core, enum GptmGptmtamrTamrValues_ const tamr);
void gptmShiWriteUIGptmtamrTamr_(uint32_t * const registerValue, enum GptmGptmtamrTamrValues_ const tamr);

uint32_t gptmShiReadGptmtamrTacmr_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtamrTacmr_(uint32_t const registerValue);

void gptmShiWriteGptmtamrTacmr_(enum HalGptmCores const core, enum GptmGptmtamrTacmrValues_ const tacmr);
void gptmShiWriteUIGptmtamrTacmr_(uint32_t * const registerValue, enum GptmGptmtamrTacmrValues_ const tacmr);

uint32_t gptmShiReadGptmtamrTaams_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtamrTaams_(uint32_t const registerValue);

void gptmShiWriteGptmtamrTaams_(enum HalGptmCores const core, enum GptmGptmtamrTaamsValues_ const taams);
void gptmShiWriteUIGptmtamrTaams_(uint32_t * const registerValue, enum GptmGptmtamrTaamsValues_ const taams);

uint32_t gptmShiReadGptmtamrTacdir_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtamrTacdir_(uint32_t const registerValue);

void gptmShiWriteGptmtamrTacdir_(enum HalGptmCores const core, enum GptmGptmtamrTacdirValues_ const tacdir);
void gptmShiWriteUIGptmtamrTacdir_(uint32_t * const registerValue, enum GptmGptmtamrTacdirValues_ const tacdir);

uint32_t gptmShiReadGptmtamrTamie_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtamrTamie_(uint32_t const registerValue);

void gptmShiWriteGptmtamrTamie_(enum HalGptmCores const core, enum GptmGptmtamrTamieValues_ const tamie);
void gptmShiWriteUIGptmtamrTamie_(uint32_t * const registerValue, enum GptmGptmtamrTamieValues_ const tamie);

uint32_t gptmShiReadGptmtamrTawot_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtamrTawot_(uint32_t const registerValue);

void gptmShiWriteGptmtamrTawot_(enum HalGptmCores const core, enum GptmGptmtamrTawotValues_ const tawot);
void gptmShiWriteUIGptmtamrTawot_(uint32_t * const registerValue, enum GptmGptmtamrTawotValues_ const tawot);

uint32_t gptmShiReadGptmtamrTasnaps_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtamrTasnaps_(uint32_t const registerValue);

void gptmShiWriteGptmtamrTasnaps_(enum HalGptmCores const core, enum GptmGptmtamrTasnapsValues_ const tasnaps);
void gptmShiWriteUIGptmtamrTasnaps_(uint32_t * const registerValue, enum GptmGptmtamrTasnapsValues_ const tasnaps);

uint32_t gptmShiReadGptmtamrTaild_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtamrTaild_(uint32_t const registerValue);

void gptmShiWriteGptmtamrTaild_(enum HalGptmCores const core, enum GptmGptmtamrTaildValues_ const taild);
void gptmShiWriteUIGptmtamrTaild_(uint32_t * const registerValue, enum GptmGptmtamrTaildValues_ const taild);

uint32_t gptmShiReadGptmtamrTapwmie_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtamrTapwmie_(uint32_t const registerValue);

void gptmShiWriteGptmtamrTapwmie_(enum HalGptmCores const core, enum GptmGptmtamrTapwmieValues_ const tapwmie);
void gptmShiWriteUIGptmtamrTapwmie_(uint32_t * const registerValue, enum GptmGptmtamrTapwmieValues_ const tapwmie);

uint32_t gptmShiReadGptmtamrTamrsu_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtamrTamrsu_(uint32_t const registerValue);

void gptmShiWriteGptmtamrTamrsu_(enum HalGptmCores const core, enum GptmGptmtamrTamrsuValues_ const tamrsu);
void gptmShiWriteUIGptmtamrTamrsu_(uint32_t * const registerValue, enum GptmGptmtamrTamrsuValues_ const tamrsu);

uint32_t gptmShiReadGptmtamrTaplo_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtamrTaplo_(uint32_t const registerValue);

void gptmShiWriteGptmtamrTaplo_(enum HalGptmCores const core, enum GptmGptmtamrTaploValues_ const taplo);
void gptmShiWriteUIGptmtamrTaplo_(uint32_t * const registerValue, enum GptmGptmtamrTaploValues_ const taplo);

uint32_t gptmShiReadGptmtamrTacintd_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtamrTacintd_(uint32_t const registerValue);

void gptmShiWriteGptmtamrTacintd_(enum HalGptmCores const core, enum GptmGptmtamrTacintdValues_ const tacintd);
void gptmShiWriteUIGptmtamrTacintd_(uint32_t * const registerValue, enum GptmGptmtamrTacintdValues_ const tacintd);

uint32_t gptmShiReadGptmtamrTcact_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtamrTcact_(uint32_t const registerValue);

void gptmShiWriteGptmtamrTcact_(enum HalGptmCores const core, enum GptmGptmtamrTcactValues_ const tcact);
void gptmShiWriteUIGptmtamrTcact_(uint32_t * const registerValue, enum GptmGptmtamrTcactValues_ const tcact);

uint32_t gptmShiReadGptmtbmrTbmr_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtbmrTbmr_(uint32_t const registerValue);

void gptmShiWriteGptmtbmrTbmr_(enum HalGptmCores const core, enum GptmGptmtbmrTbmrValues_ const tbmr);
void gptmShiWriteUIGptmtbmrTbmr_(uint32_t * const registerValue, enum GptmGptmtbmrTbmrValues_ const tbmr);

uint32_t gptmShiReadGptmtbmrTbcmr_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtbmrTbcmr_(uint32_t const registerValue);

void gptmShiWriteGptmtbmrTbcmr_(enum HalGptmCores const core, enum GptmGptmtbmrTbcmrValues_ const tbcmr);
void gptmShiWriteUIGptmtbmrTbcmr_(uint32_t * const registerValue, enum GptmGptmtbmrTbcmrValues_ const tbcmr);

uint32_t gptmShiReadGptmtbmrTbams_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtbmrTbams_(uint32_t const registerValue);

void gptmShiWriteGptmtbmrTbams_(enum HalGptmCores const core, enum GptmGptmtbmrTbamsValues_ const tbams);
void gptmShiWriteUIGptmtbmrTbams_(uint32_t * const registerValue, enum GptmGptmtbmrTbamsValues_ const tbams);

uint32_t gptmShiReadGptmtbmrTbcdir_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtbmrTbcdir_(uint32_t const registerValue);

void gptmShiWriteGptmtbmrTbcdir_(enum HalGptmCores const core, enum GptmGptmtbmrTbcdirValues_ const tbcdir);
void gptmShiWriteUIGptmtbmrTbcdir_(uint32_t * const registerValue, enum GptmGptmtbmrTbcdirValues_ const tbcdir);

uint32_t gptmShiReadGptmtbmrTbmie_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtbmrTbmie_(uint32_t const registerValue);

void gptmShiWriteGptmtbmrTbmie_(enum HalGptmCores const core, enum GptmGptmtbmrTbmieValues_ const tbmie);
void gptmShiWriteUIGptmtbmrTbmie_(uint32_t * const registerValue, enum GptmGptmtbmrTbmieValues_ const tbmie);

uint32_t gptmShiReadGptmtbmrTbwot_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtbmrTbwot_(uint32_t const registerValue);

void gptmShiWriteGptmtbmrTbwot_(enum HalGptmCores const core, enum GptmGptmtbmrTbwotValues_ const tbwot);
void gptmShiWriteUIGptmtbmrTbwot_(uint32_t * const registerValue, enum GptmGptmtbmrTbwotValues_ const tbwot);

uint32_t gptmShiReadGptmtbmrTbsnaps_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtbmrTbsnaps_(uint32_t const registerValue);

void gptmShiWriteGptmtbmrTbsnaps_(enum HalGptmCores const core, enum GptmGptmtbmrTbsnapsValues_ const tbsnaps);
void gptmShiWriteUIGptmtbmrTbsnaps_(uint32_t * const registerValue, enum GptmGptmtbmrTbsnapsValues_ const tbsnaps);

uint32_t gptmShiReadGptmtbmrTbild_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtbmrTbild_(uint32_t const registerValue);

void gptmShiWriteGptmtbmrTbild_(enum HalGptmCores const core, enum GptmGptmtbmrTbildValues_ const tbild);
void gptmShiWriteUIGptmtbmrTbild_(uint32_t * const registerValue, enum GptmGptmtbmrTbildValues_ const tbild);

uint32_t gptmShiReadGptmtbmrTbpwmie_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtbmrTbpwmie_(uint32_t const registerValue);

void gptmShiWriteGptmtbmrTbpwmie_(enum HalGptmCores const core, enum GptmGptmtbmrTbpwmieValues_ const tbpwmie);
void gptmShiWriteUIGptmtbmrTbpwmie_(uint32_t * const registerValue, enum GptmGptmtbmrTbpwmieValues_ const tbpwmie);

uint32_t gptmShiReadGptmtbmrTbmrsu_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtbmrTbmrsu_(uint32_t const registerValue);

void gptmShiWriteGptmtbmrTbmrsu_(enum HalGptmCores const core, enum GptmGptmtbmrTbmrsuValues_ const tbmrsu);
void gptmShiWriteUIGptmtbmrTbmrsu_(uint32_t * const registerValue, enum GptmGptmtbmrTbmrsuValues_ const tbmrsu);

uint32_t gptmShiReadGptmtbmrTbplo_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtbmrTbplo_(uint32_t const registerValue);

void gptmShiWriteGptmtbmrTbplo_(enum HalGptmCores const core, enum GptmGptmtbmrTbploValues_ const tbplo);
void gptmShiWriteUIGptmtbmrTbplo_(uint32_t * const registerValue, enum GptmGptmtbmrTbploValues_ const tbplo);

uint32_t gptmShiReadGptmtbmrTbcintd_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtbmrTbcintd_(uint32_t const registerValue);

void gptmShiWriteGptmtbmrTbcintd_(enum HalGptmCores const core, enum GptmGptmtbmrTbcintdValues_ const tbcintd);
void gptmShiWriteUIGptmtbmrTbcintd_(uint32_t * const registerValue, enum GptmGptmtbmrTbcintdValues_ const tbcintd);

uint32_t gptmShiReadGptmtbmrTcact_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtbmrTcact_(uint32_t const registerValue);

void gptmShiWriteGptmtbmrTcact_(enum HalGptmCores const core, enum GptmGptmtbmrTcactValues_ const tcact);
void gptmShiWriteUIGptmtbmrTcact_(uint32_t * const registerValue, enum GptmGptmtbmrTcactValues_ const tcact);

uint32_t gptmShiReadGptmctlTaen_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmctlTaen_(uint32_t const registerValue);

void gptmShiWriteGptmctlTaen_(enum HalGptmCores const core, enum GptmGptmctlTaenValues_ const taen);
void gptmShiWriteUIGptmctlTaen_(uint32_t * const registerValue, enum GptmGptmctlTaenValues_ const taen);

uint32_t gptmShiReadGptmctlTastall_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmctlTastall_(uint32_t const registerValue);

void gptmShiWriteGptmctlTastall_(enum HalGptmCores const core, enum GptmGptmctlTastallValues_ const tastall);
void gptmShiWriteUIGptmctlTastall_(uint32_t * const registerValue, enum GptmGptmctlTastallValues_ const tastall);

uint32_t gptmShiReadGptmctlTaevent_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmctlTaevent_(uint32_t const registerValue);

void gptmShiWriteGptmctlTaevent_(enum HalGptmCores const core, enum GptmGptmctlTaeventValues_ const taevent);
void gptmShiWriteUIGptmctlTaevent_(uint32_t * const registerValue, enum GptmGptmctlTaeventValues_ const taevent);

uint32_t gptmShiReadGptmctlRtcen_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmctlRtcen_(uint32_t const registerValue);

void gptmShiWriteGptmctlRtcen_(enum HalGptmCores const core, enum GptmGptmctlRtcenValues_ const rtcen);
void gptmShiWriteUIGptmctlRtcen_(uint32_t * const registerValue, enum GptmGptmctlRtcenValues_ const rtcen);

uint32_t gptmShiReadGptmctlTaote_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmctlTaote_(uint32_t const registerValue);

void gptmShiWriteGptmctlTaote_(enum HalGptmCores const core, enum GptmGptmctlTaoteValues_ const taote);
void gptmShiWriteUIGptmctlTaote_(uint32_t * const registerValue, enum GptmGptmctlTaoteValues_ const taote);

uint32_t gptmShiReadGptmctlTapwml_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmctlTapwml_(uint32_t const registerValue);

void gptmShiWriteGptmctlTapwml_(enum HalGptmCores const core, enum GptmGptmctlTapwmlValues_ const tapwml);
void gptmShiWriteUIGptmctlTapwml_(uint32_t * const registerValue, enum GptmGptmctlTapwmlValues_ const tapwml);

uint32_t gptmShiReadGptmctlTben_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmctlTben_(uint32_t const registerValue);

void gptmShiWriteGptmctlTben_(enum HalGptmCores const core, enum GptmGptmctlTbenValues_ const tben);
void gptmShiWriteUIGptmctlTben_(uint32_t * const registerValue, enum GptmGptmctlTbenValues_ const tben);

uint32_t gptmShiReadGptmctlTbstall_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmctlTbstall_(uint32_t const registerValue);

void gptmShiWriteGptmctlTbstall_(enum HalGptmCores const core, enum GptmGptmctlTbstallValues_ const tbstall);
void gptmShiWriteUIGptmctlTbstall_(uint32_t * const registerValue, enum GptmGptmctlTbstallValues_ const tbstall);

uint32_t gptmShiReadGptmctlTbevent_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmctlTbevent_(uint32_t const registerValue);

void gptmShiWriteGptmctlTbevent_(enum HalGptmCores const core, enum GptmGptmctlTbeventValues_ const tbevent);
void gptmShiWriteUIGptmctlTbevent_(uint32_t * const registerValue, enum GptmGptmctlTbeventValues_ const tbevent);

uint32_t gptmShiReadGptmctlTbote_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmctlTbote_(uint32_t const registerValue);

void gptmShiWriteGptmctlTbote_(enum HalGptmCores const core, enum GptmGptmctlTboteValues_ const tbote);
void gptmShiWriteUIGptmctlTbote_(uint32_t * const registerValue, enum GptmGptmctlTboteValues_ const tbote);

uint32_t gptmShiReadGptmctlTbpwml_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmctlTbpwml_(uint32_t const registerValue);

void gptmShiWriteGptmctlTbpwml_(enum HalGptmCores const core, enum GptmGptmctlTbpwmlValues_ const tbpwml);
void gptmShiWriteUIGptmctlTbpwml_(uint32_t * const registerValue, enum GptmGptmctlTbpwmlValues_ const tbpwml);

void gptmShiWriteGptmsyncSynct0_(enum HalGptmCores const core, enum GptmGptmsyncSynct0Values_ const synct0);
void gptmShiWriteUIGptmsyncSynct0_(uint32_t * const registerValue, enum GptmGptmsyncSynct0Values_ const synct0);

void gptmShiWriteGptmsyncSynct1_(enum HalGptmCores const core, enum GptmGptmsyncSynct1Values_ const synct1);
void gptmShiWriteUIGptmsyncSynct1_(uint32_t * const registerValue, enum GptmGptmsyncSynct1Values_ const synct1);

void gptmShiWriteGptmsyncSynct2_(enum HalGptmCores const core, enum GptmGptmsyncSynct2Values_ const synct2);
void gptmShiWriteUIGptmsyncSynct2_(uint32_t * const registerValue, enum GptmGptmsyncSynct2Values_ const synct2);

void gptmShiWriteGptmsyncSynct3_(enum HalGptmCores const core, enum GptmGptmsyncSynct3Values_ const synct3);
void gptmShiWriteUIGptmsyncSynct3_(uint32_t * const registerValue, enum GptmGptmsyncSynct3Values_ const synct3);

void gptmShiWriteGptmsyncSynct4_(enum HalGptmCores const core, enum GptmGptmsyncSynct4Values_ const synct4);
void gptmShiWriteUIGptmsyncSynct4_(uint32_t * const registerValue, enum GptmGptmsyncSynct4Values_ const synct4);

void gptmShiWriteGptmsyncSynct5_(enum HalGptmCores const core, enum GptmGptmsyncSynct5Values_ const synct5);
void gptmShiWriteUIGptmsyncSynct5_(uint32_t * const registerValue, enum GptmGptmsyncSynct5Values_ const synct5);

void gptmShiWriteGptmsyncSynct6_(enum HalGptmCores const core, enum GptmGptmsyncSynct6Values_ const synct6);
void gptmShiWriteUIGptmsyncSynct6_(uint32_t * const registerValue, enum GptmGptmsyncSynct6Values_ const synct6);

void gptmShiWriteGptmsyncSynct7_(enum HalGptmCores const core, enum GptmGptmsyncSynct7Values_ const synct7);
void gptmShiWriteUIGptmsyncSynct7_(uint32_t * const registerValue, enum GptmGptmsyncSynct7Values_ const synct7);

uint32_t gptmShiReadGptmimrTatoim_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmimrTatoim_(uint32_t const registerValue);

void gptmShiWriteGptmimrTatoim_(enum HalGptmCores const core, enum GptmGptmimrTatoimValues_ const tatoim);
void gptmShiWriteUIGptmimrTatoim_(uint32_t * const registerValue, enum GptmGptmimrTatoimValues_ const tatoim);

uint32_t gptmShiReadGptmimrCamim_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmimrCamim_(uint32_t const registerValue);

void gptmShiWriteGptmimrCamim_(enum HalGptmCores const core, enum GptmGptmimrCamimValues_ const camim);
void gptmShiWriteUIGptmimrCamim_(uint32_t * const registerValue, enum GptmGptmimrCamimValues_ const camim);

uint32_t gptmShiReadGptmimrCaeim_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmimrCaeim_(uint32_t const registerValue);

void gptmShiWriteGptmimrCaeim_(enum HalGptmCores const core, enum GptmGptmimrCaeimValues_ const caeim);
void gptmShiWriteUIGptmimrCaeim_(uint32_t * const registerValue, enum GptmGptmimrCaeimValues_ const caeim);

uint32_t gptmShiReadGptmimrRtcim_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmimrRtcim_(uint32_t const registerValue);

void gptmShiWriteGptmimrRtcim_(enum HalGptmCores const core, enum GptmGptmimrRtcimValues_ const rtcim);
void gptmShiWriteUIGptmimrRtcim_(uint32_t * const registerValue, enum GptmGptmimrRtcimValues_ const rtcim);

uint32_t gptmShiReadGptmimrTamim_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmimrTamim_(uint32_t const registerValue);

void gptmShiWriteGptmimrTamim_(enum HalGptmCores const core, enum GptmGptmimrTamimValues_ const tamim);
void gptmShiWriteUIGptmimrTamim_(uint32_t * const registerValue, enum GptmGptmimrTamimValues_ const tamim);

uint32_t gptmShiReadGptmimrDmaaim_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmimrDmaaim_(uint32_t const registerValue);

void gptmShiWriteGptmimrDmaaim_(enum HalGptmCores const core, enum GptmGptmimrDmaaimValues_ const dmaaim);
void gptmShiWriteUIGptmimrDmaaim_(uint32_t * const registerValue, enum GptmGptmimrDmaaimValues_ const dmaaim);

uint32_t gptmShiReadGptmimrTbtoim_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmimrTbtoim_(uint32_t const registerValue);

void gptmShiWriteGptmimrTbtoim_(enum HalGptmCores const core, enum GptmGptmimrTbtoimValues_ const tbtoim);
void gptmShiWriteUIGptmimrTbtoim_(uint32_t * const registerValue, enum GptmGptmimrTbtoimValues_ const tbtoim);

uint32_t gptmShiReadGptmimrCbmim_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmimrCbmim_(uint32_t const registerValue);

void gptmShiWriteGptmimrCbmim_(enum HalGptmCores const core, enum GptmGptmimrCbmimValues_ const cbmim);
void gptmShiWriteUIGptmimrCbmim_(uint32_t * const registerValue, enum GptmGptmimrCbmimValues_ const cbmim);

uint32_t gptmShiReadGptmimrCbeim_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmimrCbeim_(uint32_t const registerValue);

void gptmShiWriteGptmimrCbeim_(enum HalGptmCores const core, enum GptmGptmimrCbeimValues_ const cbeim);
void gptmShiWriteUIGptmimrCbeim_(uint32_t * const registerValue, enum GptmGptmimrCbeimValues_ const cbeim);

uint32_t gptmShiReadGptmimrTbmim_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmimrTbmim_(uint32_t const registerValue);

void gptmShiWriteGptmimrTbmim_(enum HalGptmCores const core, enum GptmGptmimrTbmimValues_ const tbmim);
void gptmShiWriteUIGptmimrTbmim_(uint32_t * const registerValue, enum GptmGptmimrTbmimValues_ const tbmim);

uint32_t gptmShiReadGptmimrDmabim_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmimrDmabim_(uint32_t const registerValue);

void gptmShiWriteGptmimrDmabim_(enum HalGptmCores const core, enum GptmGptmimrDmabimValues_ const dmabim);
void gptmShiWriteUIGptmimrDmabim_(uint32_t * const registerValue, enum GptmGptmimrDmabimValues_ const dmabim);

uint32_t gptmShiReadGptmrisTatoris_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmrisTatoris_(uint32_t const registerValue);

uint32_t gptmShiReadGptmrisCamris_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmrisCamris_(uint32_t const registerValue);

uint32_t gptmShiReadGptmrisCaeris_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmrisCaeris_(uint32_t const registerValue);

uint32_t gptmShiReadGptmrisRtcris_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmrisRtcris_(uint32_t const registerValue);

uint32_t gptmShiReadGptmrisTamris_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmrisTamris_(uint32_t const registerValue);

uint32_t gptmShiReadGptmrisDmaaris_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmrisDmaaris_(uint32_t const registerValue);

uint32_t gptmShiReadGptmrisTbtoris_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmrisTbtoris_(uint32_t const registerValue);

uint32_t gptmShiReadGptmrisCbmris_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmrisCbmris_(uint32_t const registerValue);

uint32_t gptmShiReadGptmrisCberis_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmrisCberis_(uint32_t const registerValue);

uint32_t gptmShiReadGptmrisTbmris_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmrisTbmris_(uint32_t const registerValue);

uint32_t gptmShiReadGptmrisDmabris_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmrisDmabris_(uint32_t const registerValue);

uint32_t gptmShiReadGptmmisTatomis_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmmisTatomis_(uint32_t const registerValue);

uint32_t gptmShiReadGptmmisCammis_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmmisCammis_(uint32_t const registerValue);

uint32_t gptmShiReadGptmmisCaemis_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmmisCaemis_(uint32_t const registerValue);

uint32_t gptmShiReadGptmmisRtcmis_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmmisRtcmis_(uint32_t const registerValue);

uint32_t gptmShiReadGptmmisTammis_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmmisTammis_(uint32_t const registerValue);

uint32_t gptmShiReadGptmmisDmaamis_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmmisDmaamis_(uint32_t const registerValue);

uint32_t gptmShiReadGptmmisTbtomis_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmmisTbtomis_(uint32_t const registerValue);

uint32_t gptmShiReadGptmmisCbmmis_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmmisCbmmis_(uint32_t const registerValue);

uint32_t gptmShiReadGptmmisCbemis_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmmisCbemis_(uint32_t const registerValue);

uint32_t gptmShiReadGptmmisTbmmis_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmmisTbmmis_(uint32_t const registerValue);

uint32_t gptmShiReadGptmmisDmabmis_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmmisDmabmis_(uint32_t const registerValue);

uint32_t gptmShiReadGptmtailrTailr_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtailrTailr_(uint32_t const registerValue);

void gptmShiWriteGptmtailrTailr_(enum HalGptmCores const core, uint32_t const tailr);
void gptmShiWriteUIGptmtailrTailr_(uint32_t * const registerValue, uint32_t const tailr);

uint32_t gptmShiReadGptmtbilrTbilr_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtbilrTbilr_(uint32_t const registerValue);

void gptmShiWriteGptmtbilrTbilr_(enum HalGptmCores const core, uint32_t const tbilr);
void gptmShiWriteUIGptmtbilrTbilr_(uint32_t * const registerValue, uint32_t const tbilr);

uint32_t gptmShiReadGptmtamatchrTamr_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtamatchrTamr_(uint32_t const registerValue);

void gptmShiWriteGptmtamatchrTamr_(enum HalGptmCores const core, uint32_t const tamr);
void gptmShiWriteUIGptmtamatchrTamr_(uint32_t * const registerValue, uint32_t const tamr);

uint32_t gptmShiReadGptmtbmatchrTbmr_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtbmatchrTbmr_(uint32_t const registerValue);

void gptmShiWriteGptmtbmatchrTbmr_(enum HalGptmCores const core, uint32_t const tbmr);
void gptmShiWriteUIGptmtbmatchrTbmr_(uint32_t * const registerValue, uint32_t const tbmr);

uint32_t gptmShiReadGptmtaprTapsr_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtaprTapsr_(uint32_t const registerValue);

void gptmShiWriteGptmtaprTapsr_(enum HalGptmCores const core, uint32_t const tapsr);
void gptmShiWriteUIGptmtaprTapsr_(uint32_t * const registerValue, uint32_t const tapsr);

uint32_t gptmShiReadGptmtbprTbpsr_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtbprTbpsr_(uint32_t const registerValue);

void gptmShiWriteGptmtbprTbpsr_(enum HalGptmCores const core, uint32_t const tbpsr);
void gptmShiWriteUIGptmtbprTbpsr_(uint32_t * const registerValue, uint32_t const tbpsr);

uint32_t gptmShiReadGptmtapmrTapsmr_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtapmrTapsmr_(uint32_t const registerValue);

void gptmShiWriteGptmtapmrTapsmr_(enum HalGptmCores const core, uint32_t const tapsmr);
void gptmShiWriteUIGptmtapmrTapsmr_(uint32_t * const registerValue, uint32_t const tapsmr);

uint32_t gptmShiReadGptmtbpmrTbpsmr_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtbpmrTbpsmr_(uint32_t const registerValue);

void gptmShiWriteGptmtbpmrTbpsmr_(enum HalGptmCores const core, uint32_t const tbpsmr);
void gptmShiWriteUIGptmtbpmrTbpsmr_(uint32_t * const registerValue, uint32_t const tbpsmr);

uint32_t gptmShiReadGptmtarTar_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtarTar_(uint32_t const registerValue);

uint32_t gptmShiReadGptmtbrTbr_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtbrTbr_(uint32_t const registerValue);

uint32_t gptmShiReadGptmtavTav_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtavTav_(uint32_t const registerValue);

void gptmShiWriteGptmtavTav_(enum HalGptmCores const core, uint32_t const tav);
void gptmShiWriteUIGptmtavTav_(uint32_t * const registerValue, uint32_t const tav);

uint32_t gptmShiReadGptmtbvTbv_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtbvTbv_(uint32_t const registerValue);

void gptmShiWriteGptmtbvTbv_(enum HalGptmCores const core, uint32_t const tbv);
void gptmShiWriteUIGptmtbvTbv_(uint32_t * const registerValue, uint32_t const tbv);

uint32_t gptmShiReadGptmrtcpdRtcpd_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmrtcpdRtcpd_(uint32_t const registerValue);

uint32_t gptmShiReadGptmtapsPss_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtapsPss_(uint32_t const registerValue);

uint32_t gptmShiReadGptmtbpsPss_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmtbpsPss_(uint32_t const registerValue);

uint32_t gptmShiReadGptmdmaevTatodmaen_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmdmaevTatodmaen_(uint32_t const registerValue);

void gptmShiWriteGptmdmaevTatodmaen_(enum HalGptmCores const core, enum GptmGptmdmaevTatodmaenValues_ const tatodmaen);
void gptmShiWriteUIGptmdmaevTatodmaen_(uint32_t * const registerValue, enum GptmGptmdmaevTatodmaenValues_ const tatodmaen);

uint32_t gptmShiReadGptmdmaevCamdmaen_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmdmaevCamdmaen_(uint32_t const registerValue);

void gptmShiWriteGptmdmaevCamdmaen_(enum HalGptmCores const core, enum GptmGptmdmaevCamdmaenValues_ const camdmaen);
void gptmShiWriteUIGptmdmaevCamdmaen_(uint32_t * const registerValue, enum GptmGptmdmaevCamdmaenValues_ const camdmaen);

uint32_t gptmShiReadGptmdmaevCaedmaen_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmdmaevCaedmaen_(uint32_t const registerValue);

void gptmShiWriteGptmdmaevCaedmaen_(enum HalGptmCores const core, enum GptmGptmdmaevCaedmaenValues_ const caedmaen);
void gptmShiWriteUIGptmdmaevCaedmaen_(uint32_t * const registerValue, enum GptmGptmdmaevCaedmaenValues_ const caedmaen);

uint32_t gptmShiReadGptmdmaevRtcdmaen_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmdmaevRtcdmaen_(uint32_t const registerValue);

void gptmShiWriteGptmdmaevRtcdmaen_(enum HalGptmCores const core, enum GptmGptmdmaevRtcdmaenValues_ const rtcdmaen);
void gptmShiWriteUIGptmdmaevRtcdmaen_(uint32_t * const registerValue, enum GptmGptmdmaevRtcdmaenValues_ const rtcdmaen);

uint32_t gptmShiReadGptmdmaevTamdmaen_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmdmaevTamdmaen_(uint32_t const registerValue);

void gptmShiWriteGptmdmaevTamdmaen_(enum HalGptmCores const core, enum GptmGptmdmaevTamdmaenValues_ const tamdmaen);
void gptmShiWriteUIGptmdmaevTamdmaen_(uint32_t * const registerValue, enum GptmGptmdmaevTamdmaenValues_ const tamdmaen);

uint32_t gptmShiReadGptmdmaevTbtodmaen_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmdmaevTbtodmaen_(uint32_t const registerValue);

void gptmShiWriteGptmdmaevTbtodmaen_(enum HalGptmCores const core, enum GptmGptmdmaevTbtodmaenValues_ const tbtodmaen);
void gptmShiWriteUIGptmdmaevTbtodmaen_(uint32_t * const registerValue, enum GptmGptmdmaevTbtodmaenValues_ const tbtodmaen);

uint32_t gptmShiReadGptmdmaevCbmdmaen_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmdmaevCbmdmaen_(uint32_t const registerValue);

void gptmShiWriteGptmdmaevCbmdmaen_(enum HalGptmCores const core, enum GptmGptmdmaevCbmdmaenValues_ const cbmdmaen);
void gptmShiWriteUIGptmdmaevCbmdmaen_(uint32_t * const registerValue, enum GptmGptmdmaevCbmdmaenValues_ const cbmdmaen);

uint32_t gptmShiReadGptmdmaevCbedmaen_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmdmaevCbedmaen_(uint32_t const registerValue);

void gptmShiWriteGptmdmaevCbedmaen_(enum HalGptmCores const core, enum GptmGptmdmaevCbedmaenValues_ const cbedmaen);
void gptmShiWriteUIGptmdmaevCbedmaen_(uint32_t * const registerValue, enum GptmGptmdmaevCbedmaenValues_ const cbedmaen);

uint32_t gptmShiReadGptmdmaevTbmdmaen_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmdmaevTbmdmaen_(uint32_t const registerValue);

void gptmShiWriteGptmdmaevTbmdmaen_(enum HalGptmCores const core, enum GptmGptmdmaevTbmdmaenValues_ const tbmdmaen);
void gptmShiWriteUIGptmdmaevTbmdmaen_(uint32_t * const registerValue, enum GptmGptmdmaevTbmdmaenValues_ const tbmdmaen);

uint32_t gptmShiReadGptmadcevTatoadcen_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmadcevTatoadcen_(uint32_t const registerValue);

void gptmShiWriteGptmadcevTatoadcen_(enum HalGptmCores const core, enum GptmGptmadcevTatoadcenValues_ const tatoadcen);
void gptmShiWriteUIGptmadcevTatoadcen_(uint32_t * const registerValue, enum GptmGptmadcevTatoadcenValues_ const tatoadcen);

uint32_t gptmShiReadGptmadcevCamadcen_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmadcevCamadcen_(uint32_t const registerValue);

void gptmShiWriteGptmadcevCamadcen_(enum HalGptmCores const core, enum GptmGptmadcevCamadcenValues_ const camadcen);
void gptmShiWriteUIGptmadcevCamadcen_(uint32_t * const registerValue, enum GptmGptmadcevCamadcenValues_ const camadcen);

uint32_t gptmShiReadGptmadcevCaeadcen_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmadcevCaeadcen_(uint32_t const registerValue);

void gptmShiWriteGptmadcevCaeadcen_(enum HalGptmCores const core, enum GptmGptmadcevCaeadcenValues_ const caeadcen);
void gptmShiWriteUIGptmadcevCaeadcen_(uint32_t * const registerValue, enum GptmGptmadcevCaeadcenValues_ const caeadcen);

uint32_t gptmShiReadGptmadcevRtcadcen_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmadcevRtcadcen_(uint32_t const registerValue);

void gptmShiWriteGptmadcevRtcadcen_(enum HalGptmCores const core, enum GptmGptmadcevRtcadcenValues_ const rtcadcen);
void gptmShiWriteUIGptmadcevRtcadcen_(uint32_t * const registerValue, enum GptmGptmadcevRtcadcenValues_ const rtcadcen);

uint32_t gptmShiReadGptmadcevTamadcen_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmadcevTamadcen_(uint32_t const registerValue);

void gptmShiWriteGptmadcevTamadcen_(enum HalGptmCores const core, enum GptmGptmadcevTamadcenValues_ const tamadcen);
void gptmShiWriteUIGptmadcevTamadcen_(uint32_t * const registerValue, enum GptmGptmadcevTamadcenValues_ const tamadcen);

uint32_t gptmShiReadGptmadcevTbtoadcen_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmadcevTbtoadcen_(uint32_t const registerValue);

void gptmShiWriteGptmadcevTbtoadcen_(enum HalGptmCores const core, enum GptmGptmadcevTbtoadcenValues_ const tbtoadcen);
void gptmShiWriteUIGptmadcevTbtoadcen_(uint32_t * const registerValue, enum GptmGptmadcevTbtoadcenValues_ const tbtoadcen);

uint32_t gptmShiReadGptmadcevCbmadcen_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmadcevCbmadcen_(uint32_t const registerValue);

void gptmShiWriteGptmadcevCbmadcen_(enum HalGptmCores const core, enum GptmGptmadcevCbmadcenValues_ const cbmadcen);
void gptmShiWriteUIGptmadcevCbmadcen_(uint32_t * const registerValue, enum GptmGptmadcevCbmadcenValues_ const cbmadcen);

uint32_t gptmShiReadGptmadcevCbeadcen_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmadcevCbeadcen_(uint32_t const registerValue);

void gptmShiWriteGptmadcevCbeadcen_(enum HalGptmCores const core, enum GptmGptmadcevCbeadcenValues_ const cbeadcen);
void gptmShiWriteUIGptmadcevCbeadcen_(uint32_t * const registerValue, enum GptmGptmadcevCbeadcenValues_ const cbeadcen);

uint32_t gptmShiReadGptmadcevTbmadcen_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmadcevTbmadcen_(uint32_t const registerValue);

void gptmShiWriteGptmadcevTbmadcen_(enum HalGptmCores const core, enum GptmGptmadcevTbmadcenValues_ const tbmadcen);
void gptmShiWriteUIGptmadcevTbmadcen_(uint32_t * const registerValue, enum GptmGptmadcevTbmadcenValues_ const tbmadcen);

uint32_t gptmShiReadGptmppSize_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmppSize_(uint32_t const registerValue);

void gptmShiWriteGptmppSize_(enum HalGptmCores const core, enum GptmGptmppSizeValues_ const size);
void gptmShiWriteUIGptmppSize_(uint32_t * const registerValue, enum GptmGptmppSizeValues_ const size);

uint32_t gptmShiReadGptmppChain_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmppChain_(uint32_t const registerValue);

void gptmShiWriteGptmppChain_(enum HalGptmCores const core, enum GptmGptmppChainValues_ const chain);
void gptmShiWriteUIGptmppChain_(uint32_t * const registerValue, enum GptmGptmppChainValues_ const chain);

uint32_t gptmShiReadGptmppSynccnt_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmppSynccnt_(uint32_t const registerValue);

void gptmShiWriteGptmppSynccnt_(enum HalGptmCores const core, enum GptmGptmppSynccntValues_ const synccnt);
void gptmShiWriteUIGptmppSynccnt_(uint32_t * const registerValue, enum GptmGptmppSynccntValues_ const synccnt);

uint32_t gptmShiReadGptmppAltclk_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmppAltclk_(uint32_t const registerValue);

void gptmShiWriteGptmppAltclk_(enum HalGptmCores const core, enum GptmGptmppAltclkValues_ const altclk);
void gptmShiWriteUIGptmppAltclk_(uint32_t * const registerValue, enum GptmGptmppAltclkValues_ const altclk);

uint32_t gptmShiReadGptmccAltclk_(enum HalGptmCores const core);
uint32_t gptmShiReadUIGptmccAltclk_(uint32_t const registerValue);

void gptmShiWriteGptmccAltclk_(enum HalGptmCores const core, enum GptmGptmccAltclkValues_ const altclk);
void gptmShiWriteUIGptmccAltclk_(uint32_t * const registerValue, enum GptmGptmccAltclkValues_ const altclk);


#endif
