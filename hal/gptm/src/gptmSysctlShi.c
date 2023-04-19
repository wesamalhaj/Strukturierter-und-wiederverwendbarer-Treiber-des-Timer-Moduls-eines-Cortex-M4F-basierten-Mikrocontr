//*****************************************************************************
// Name        : gptmSysctlShi.c
// Author      : Ole Rönna 
// Maintainer  : Prof. Dr. Paweł Buczek 
// Version     : 0.4 
// Copyright   : All rights reserved 
// Description : 
// This code was generated from a template. Manual changes to this file will 
// be overwritten if the code is regenerated. 
//
//*****************************************************************************

#include "gptmSysctlShiCores.h"
#include "gptmSysctlShi.h"
#include "stdint.h"

//*****************************************************************************
//
// sysctl base addresses
//
//*****************************************************************************

static const uint32_t sysctlCoreBaseAddresses_[sysctlCoreCount_] = {
	0x400FE000
};

//*****************************************************************************
//
// sysctl functions for reading/writing of the whole register
//
//*****************************************************************************

uint32_t sysctlShiReadRcgctimer_(enum SysctlCores_ const core) {
	return *((volatile uint32_t *)(sysctlRcgctimer_ + sysctlCoreBaseAddresses_[core]));
}

void sysctlShiWriteRcgctimer_(enum SysctlCores_ const core, uint32_t const registerValue) {
	*((volatile uint32_t *)(sysctlRcgctimer_ + sysctlCoreBaseAddresses_[core])) = registerValue;
}


uint32_t sysctlShiReadPrtimer_(enum SysctlCores_ const core) {
	return *((volatile uint32_t *)(sysctlPrtimer_ + sysctlCoreBaseAddresses_[core]));
}

void sysctlShiWritePrtimer_(enum SysctlCores_ const core, uint32_t const registerValue) {
	*((volatile uint32_t *)(sysctlPrtimer_ + sysctlCoreBaseAddresses_[core])) = registerValue;
}


//*****************************************************************************
//
// sysctl read/write individual bit fields
//
//*****************************************************************************

uint32_t sysctlShiReadRcgctimerTimer0_(enum SysctlCores_ const core) {
	return ((*((volatile uint32_t *)(sysctlRcgctimer_ + sysctlCoreBaseAddresses_[core])) >> 0) & 0x1);
}

uint32_t sysctlShiReadUIRcgctimerTimer0_(uint32_t const registerValue) {
	return ((registerValue >> 0) & 0x1);
}


void sysctlShiWriteRcgctimerTimer0_(enum SysctlCores_ const core, enum SysctlRcgctimerTimer0Values_ const timer0) {
	uint32_t registerValue = *((volatile uint32_t *)(sysctlRcgctimer_ + sysctlCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 0);
	registerValue |= (timer0 << 0);

	*((volatile uint32_t *)(sysctlRcgctimer_ + sysctlCoreBaseAddresses_[core])) = registerValue;
}

void sysctlShiWriteUIRcgctimerTimer0_(uint32_t * const registerValue, enum SysctlRcgctimerTimer0Values_ const timer0) {
	*registerValue &= ~(0x1 << 0);
	*registerValue |= (timer0 << 0);
}


uint32_t sysctlShiReadRcgctimerTimer1_(enum SysctlCores_ const core) {
	return ((*((volatile uint32_t *)(sysctlRcgctimer_ + sysctlCoreBaseAddresses_[core])) >> 1) & 0x1);
}

uint32_t sysctlShiReadUIRcgctimerTimer1_(uint32_t const registerValue) {
	return ((registerValue >> 1) & 0x1);
}


void sysctlShiWriteRcgctimerTimer1_(enum SysctlCores_ const core, enum SysctlRcgctimerTimer1Values_ const timer1) {
	uint32_t registerValue = *((volatile uint32_t *)(sysctlRcgctimer_ + sysctlCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 1);
	registerValue |= (timer1 << 1);

	*((volatile uint32_t *)(sysctlRcgctimer_ + sysctlCoreBaseAddresses_[core])) = registerValue;
}

void sysctlShiWriteUIRcgctimerTimer1_(uint32_t * const registerValue, enum SysctlRcgctimerTimer1Values_ const timer1) {
	*registerValue &= ~(0x1 << 1);
	*registerValue |= (timer1 << 1);
}


uint32_t sysctlShiReadRcgctimerTimer2_(enum SysctlCores_ const core) {
	return ((*((volatile uint32_t *)(sysctlRcgctimer_ + sysctlCoreBaseAddresses_[core])) >> 2) & 0x1);
}

uint32_t sysctlShiReadUIRcgctimerTimer2_(uint32_t const registerValue) {
	return ((registerValue >> 2) & 0x1);
}


void sysctlShiWriteRcgctimerTimer2_(enum SysctlCores_ const core, enum SysctlRcgctimerTimer2Values_ const timer2) {
	uint32_t registerValue = *((volatile uint32_t *)(sysctlRcgctimer_ + sysctlCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 2);
	registerValue |= (timer2 << 2);

	*((volatile uint32_t *)(sysctlRcgctimer_ + sysctlCoreBaseAddresses_[core])) = registerValue;
}

void sysctlShiWriteUIRcgctimerTimer2_(uint32_t * const registerValue, enum SysctlRcgctimerTimer2Values_ const timer2) {
	*registerValue &= ~(0x1 << 2);
	*registerValue |= (timer2 << 2);
}


uint32_t sysctlShiReadRcgctimerTimer3_(enum SysctlCores_ const core) {
	return ((*((volatile uint32_t *)(sysctlRcgctimer_ + sysctlCoreBaseAddresses_[core])) >> 3) & 0x1);
}

uint32_t sysctlShiReadUIRcgctimerTimer3_(uint32_t const registerValue) {
	return ((registerValue >> 3) & 0x1);
}


void sysctlShiWriteRcgctimerTimer3_(enum SysctlCores_ const core, enum SysctlRcgctimerTimer3Values_ const timer3) {
	uint32_t registerValue = *((volatile uint32_t *)(sysctlRcgctimer_ + sysctlCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 3);
	registerValue |= (timer3 << 3);

	*((volatile uint32_t *)(sysctlRcgctimer_ + sysctlCoreBaseAddresses_[core])) = registerValue;
}

void sysctlShiWriteUIRcgctimerTimer3_(uint32_t * const registerValue, enum SysctlRcgctimerTimer3Values_ const timer3) {
	*registerValue &= ~(0x1 << 3);
	*registerValue |= (timer3 << 3);
}


uint32_t sysctlShiReadRcgctimerTimer4_(enum SysctlCores_ const core) {
	return ((*((volatile uint32_t *)(sysctlRcgctimer_ + sysctlCoreBaseAddresses_[core])) >> 4) & 0x1);
}

uint32_t sysctlShiReadUIRcgctimerTimer4_(uint32_t const registerValue) {
	return ((registerValue >> 4) & 0x1);
}


void sysctlShiWriteRcgctimerTimer4_(enum SysctlCores_ const core, enum SysctlRcgctimerTimer4Values_ const timer4) {
	uint32_t registerValue = *((volatile uint32_t *)(sysctlRcgctimer_ + sysctlCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 4);
	registerValue |= (timer4 << 4);

	*((volatile uint32_t *)(sysctlRcgctimer_ + sysctlCoreBaseAddresses_[core])) = registerValue;
}

void sysctlShiWriteUIRcgctimerTimer4_(uint32_t * const registerValue, enum SysctlRcgctimerTimer4Values_ const timer4) {
	*registerValue &= ~(0x1 << 4);
	*registerValue |= (timer4 << 4);
}


uint32_t sysctlShiReadRcgctimerTimer5_(enum SysctlCores_ const core) {
	return ((*((volatile uint32_t *)(sysctlRcgctimer_ + sysctlCoreBaseAddresses_[core])) >> 5) & 0x1);
}

uint32_t sysctlShiReadUIRcgctimerTimer5_(uint32_t const registerValue) {
	return ((registerValue >> 5) & 0x1);
}


void sysctlShiWriteRcgctimerTimer5_(enum SysctlCores_ const core, enum SysctlRcgctimerTimer5Values_ const timer5) {
	uint32_t registerValue = *((volatile uint32_t *)(sysctlRcgctimer_ + sysctlCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 5);
	registerValue |= (timer5 << 5);

	*((volatile uint32_t *)(sysctlRcgctimer_ + sysctlCoreBaseAddresses_[core])) = registerValue;
}

void sysctlShiWriteUIRcgctimerTimer5_(uint32_t * const registerValue, enum SysctlRcgctimerTimer5Values_ const timer5) {
	*registerValue &= ~(0x1 << 5);
	*registerValue |= (timer5 << 5);
}


uint32_t sysctlShiReadRcgctimerTimer6_(enum SysctlCores_ const core) {
	return ((*((volatile uint32_t *)(sysctlRcgctimer_ + sysctlCoreBaseAddresses_[core])) >> 6) & 0x1);
}

uint32_t sysctlShiReadUIRcgctimerTimer6_(uint32_t const registerValue) {
	return ((registerValue >> 6) & 0x1);
}


void sysctlShiWriteRcgctimerTimer6_(enum SysctlCores_ const core, enum SysctlRcgctimerTimer6Values_ const timer6) {
	uint32_t registerValue = *((volatile uint32_t *)(sysctlRcgctimer_ + sysctlCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 6);
	registerValue |= (timer6 << 6);

	*((volatile uint32_t *)(sysctlRcgctimer_ + sysctlCoreBaseAddresses_[core])) = registerValue;
}

void sysctlShiWriteUIRcgctimerTimer6_(uint32_t * const registerValue, enum SysctlRcgctimerTimer6Values_ const timer6) {
	*registerValue &= ~(0x1 << 6);
	*registerValue |= (timer6 << 6);
}


uint32_t sysctlShiReadRcgctimerTimer7_(enum SysctlCores_ const core) {
	return ((*((volatile uint32_t *)(sysctlRcgctimer_ + sysctlCoreBaseAddresses_[core])) >> 7) & 0x1);
}

uint32_t sysctlShiReadUIRcgctimerTimer7_(uint32_t const registerValue) {
	return ((registerValue >> 7) & 0x1);
}


void sysctlShiWriteRcgctimerTimer7_(enum SysctlCores_ const core, enum SysctlRcgctimerTimer7Values_ const timer7) {
	uint32_t registerValue = *((volatile uint32_t *)(sysctlRcgctimer_ + sysctlCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 7);
	registerValue |= (timer7 << 7);

	*((volatile uint32_t *)(sysctlRcgctimer_ + sysctlCoreBaseAddresses_[core])) = registerValue;
}

void sysctlShiWriteUIRcgctimerTimer7_(uint32_t * const registerValue, enum SysctlRcgctimerTimer7Values_ const timer7) {
	*registerValue &= ~(0x1 << 7);
	*registerValue |= (timer7 << 7);
}


uint32_t sysctlShiReadPrtimerTimer0_(enum SysctlCores_ const core) {
	return ((*((volatile uint32_t *)(sysctlPrtimer_ + sysctlCoreBaseAddresses_[core])) >> 0) & 0x1);
}

uint32_t sysctlShiReadUIPrtimerTimer0_(uint32_t const registerValue) {
	return ((registerValue >> 0) & 0x1);
}


uint32_t sysctlShiReadPrtimerTimer1_(enum SysctlCores_ const core) {
	return ((*((volatile uint32_t *)(sysctlPrtimer_ + sysctlCoreBaseAddresses_[core])) >> 1) & 0x1);
}

uint32_t sysctlShiReadUIPrtimerTimer1_(uint32_t const registerValue) {
	return ((registerValue >> 1) & 0x1);
}


uint32_t sysctlShiReadPrtimerTimer2_(enum SysctlCores_ const core) {
	return ((*((volatile uint32_t *)(sysctlPrtimer_ + sysctlCoreBaseAddresses_[core])) >> 2) & 0x1);
}

uint32_t sysctlShiReadUIPrtimerTimer2_(uint32_t const registerValue) {
	return ((registerValue >> 2) & 0x1);
}


uint32_t sysctlShiReadPrtimerTimer3_(enum SysctlCores_ const core) {
	return ((*((volatile uint32_t *)(sysctlPrtimer_ + sysctlCoreBaseAddresses_[core])) >> 3) & 0x1);
}

uint32_t sysctlShiReadUIPrtimerTimer3_(uint32_t const registerValue) {
	return ((registerValue >> 3) & 0x1);
}


uint32_t sysctlShiReadPrtimerTimer4_(enum SysctlCores_ const core) {
	return ((*((volatile uint32_t *)(sysctlPrtimer_ + sysctlCoreBaseAddresses_[core])) >> 4) & 0x1);
}

uint32_t sysctlShiReadUIPrtimerTimer4_(uint32_t const registerValue) {
	return ((registerValue >> 4) & 0x1);
}


uint32_t sysctlShiReadPrtimerTimer5_(enum SysctlCores_ const core) {
	return ((*((volatile uint32_t *)(sysctlPrtimer_ + sysctlCoreBaseAddresses_[core])) >> 5) & 0x1);
}

uint32_t sysctlShiReadUIPrtimerTimer5_(uint32_t const registerValue) {
	return ((registerValue >> 5) & 0x1);
}


uint32_t sysctlShiReadPrtimerTimer6_(enum SysctlCores_ const core) {
	return ((*((volatile uint32_t *)(sysctlPrtimer_ + sysctlCoreBaseAddresses_[core])) >> 6) & 0x1);
}

uint32_t sysctlShiReadUIPrtimerTimer6_(uint32_t const registerValue) {
	return ((registerValue >> 6) & 0x1);
}


uint32_t sysctlShiReadPrtimerTimer7_(enum SysctlCores_ const core) {
	return ((*((volatile uint32_t *)(sysctlPrtimer_ + sysctlCoreBaseAddresses_[core])) >> 7) & 0x1);
}

uint32_t sysctlShiReadUIPrtimerTimer7_(uint32_t const registerValue) {
	return ((registerValue >> 7) & 0x1);
}


