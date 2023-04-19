//*****************************************************************************
// Name        : gptmSysctlShi.h
// Author      : Ole Rönna 
// Maintainer  : Prof. Dr. Paweł Buczek 
// Version     : 0.4 
// Copyright   : All rights reserved 
// Description : 
// This code was generated from a template. Manual changes to this file will 
// be overwritten if the code is regenerated. 
//
//*****************************************************************************

#ifndef SYSCTLSHI_H_
#define SYSCTLSHI_H_

#include "gptmSysctlShiCores.h"
#include "stdint.h"

//*****************************************************************************
//
// sysctl registers
//
//*****************************************************************************

enum SysctlRegisters_ {
	sysctlRcgctimer_ = 0x00000604,
	sysctlPrtimer_ = 0x00000A04
};


enum SysctlRcgctimerTimer0Values_ {
	sysctlRcgctimerTimer0DisableTimer0_ = 0x00000000,
	sysctlRcgctimerTimer0EnableTimer0_ = 0x00000001
};

enum SysctlRcgctimerTimer1Values_ {
	sysctlRcgctimerTimer1DisableTimer1_ = 0x00000000,
	sysctlRcgctimerTimer1EnableTimer1_ = 0x00000001
};

enum SysctlRcgctimerTimer2Values_ {
	sysctlRcgctimerTimer2DisableTimer2_ = 0x00000000,
	sysctlRcgctimerTimer2EnableTimer2_ = 0x00000001
};

enum SysctlRcgctimerTimer3Values_ {
	sysctlRcgctimerTimer3DisableTimer3_ = 0x00000000,
	sysctlRcgctimerTimer3EnableTimer3_ = 0x00000001
};

enum SysctlRcgctimerTimer4Values_ {
	sysctlRcgctimerTimer4DisableTimer4_ = 0x00000000,
	sysctlRcgctimerTimer4EnableTimer4_ = 0x00000001
};

enum SysctlRcgctimerTimer5Values_ {
	sysctlRcgctimerTimer5DisableTimer5_ = 0x00000000,
	sysctlRcgctimerTimer5EnableTimer5_ = 0x00000001
};

enum SysctlRcgctimerTimer6Values_ {
	sysctlRcgctimerTimer6DisableTimer6_ = 0x00000000,
	sysctlRcgctimerTimer6EnableTimer6_ = 0x00000001
};

enum SysctlRcgctimerTimer7Values_ {
	sysctlRcgctimerTimer7DisableTimer7_ = 0x00000000,
	sysctlRcgctimerTimer7EnableTimer7_ = 0x00000001
};

enum SysctlPrtimerTimer0Values_ {
	sysctlPrtimerTimer0Timer0NotReady_ = 0x00000000,
	sysctlPrtimerTimer0Timer0Ready_ = 0x00000001
};

enum SysctlPrtimerTimer1Values_ {
	sysctlPrtimerTimer1Timer1NotReady_ = 0x00000000,
	sysctlPrtimerTimer1Timer1Ready_ = 0x00000001
};

enum SysctlPrtimerTimer2Values_ {
	sysctlPrtimerTimer2Timer2NotReady_ = 0x00000000,
	sysctlPrtimerTimer2Timer2Ready_ = 0x00000001
};

enum SysctlPrtimerTimer3Values_ {
	sysctlPrtimerTimer3Timer3NotReady_ = 0x00000000,
	sysctlPrtimerTimer3Timer3Ready_ = 0x00000001
};

enum SysctlPrtimerTimer4Values_ {
	sysctlPrtimerTimer4Timer4NotReady_ = 0x00000000,
	sysctlPrtimerTimer4Timer4Ready_ = 0x00000001
};

enum SysctlPrtimerTimer5Values_ {
	sysctlPrtimerTimer5Timer5NotReady_ = 0x00000000,
	sysctlPrtimerTimer5Timer5Ready_ = 0x00000001
};

enum SysctlPrtimerTimer6Values_ {
	sysctlPrtimerTimer6Timer6NotReady_ = 0x00000000,
	sysctlPrtimerTimer6Timer6Ready_ = 0x00000001
};

enum SysctlPrtimerTimer7Values_ {
	sysctlPrtimerTimer7Timer7NotReady_ = 0x00000000,
	sysctlPrtimerTimer7Timer7Ready_ = 0x00000001
};

uint32_t sysctlShiReadRcgctimer_(enum SysctlCores_ const core);
void sysctlShiWriteRcgctimer_(enum SysctlCores_ const core, uint32_t const registerValue);

uint32_t sysctlShiReadPrtimer_(enum SysctlCores_ const core);
void sysctlShiWritePrtimer_(enum SysctlCores_ const core, uint32_t const registerValue);

uint32_t sysctlShiReadRcgctimerTimer0_(enum SysctlCores_ const core);
uint32_t sysctlShiReadUIRcgctimerTimer0_(uint32_t const registerValue);

void sysctlShiWriteRcgctimerTimer0_(enum SysctlCores_ const core, enum SysctlRcgctimerTimer0Values_ const timer0);
void sysctlShiWriteUIRcgctimerTimer0_(uint32_t * const registerValue, enum SysctlRcgctimerTimer0Values_ const timer0);

uint32_t sysctlShiReadRcgctimerTimer1_(enum SysctlCores_ const core);
uint32_t sysctlShiReadUIRcgctimerTimer1_(uint32_t const registerValue);

void sysctlShiWriteRcgctimerTimer1_(enum SysctlCores_ const core, enum SysctlRcgctimerTimer1Values_ const timer1);
void sysctlShiWriteUIRcgctimerTimer1_(uint32_t * const registerValue, enum SysctlRcgctimerTimer1Values_ const timer1);

uint32_t sysctlShiReadRcgctimerTimer2_(enum SysctlCores_ const core);
uint32_t sysctlShiReadUIRcgctimerTimer2_(uint32_t const registerValue);

void sysctlShiWriteRcgctimerTimer2_(enum SysctlCores_ const core, enum SysctlRcgctimerTimer2Values_ const timer2);
void sysctlShiWriteUIRcgctimerTimer2_(uint32_t * const registerValue, enum SysctlRcgctimerTimer2Values_ const timer2);

uint32_t sysctlShiReadRcgctimerTimer3_(enum SysctlCores_ const core);
uint32_t sysctlShiReadUIRcgctimerTimer3_(uint32_t const registerValue);

void sysctlShiWriteRcgctimerTimer3_(enum SysctlCores_ const core, enum SysctlRcgctimerTimer3Values_ const timer3);
void sysctlShiWriteUIRcgctimerTimer3_(uint32_t * const registerValue, enum SysctlRcgctimerTimer3Values_ const timer3);

uint32_t sysctlShiReadRcgctimerTimer4_(enum SysctlCores_ const core);
uint32_t sysctlShiReadUIRcgctimerTimer4_(uint32_t const registerValue);

void sysctlShiWriteRcgctimerTimer4_(enum SysctlCores_ const core, enum SysctlRcgctimerTimer4Values_ const timer4);
void sysctlShiWriteUIRcgctimerTimer4_(uint32_t * const registerValue, enum SysctlRcgctimerTimer4Values_ const timer4);

uint32_t sysctlShiReadRcgctimerTimer5_(enum SysctlCores_ const core);
uint32_t sysctlShiReadUIRcgctimerTimer5_(uint32_t const registerValue);

void sysctlShiWriteRcgctimerTimer5_(enum SysctlCores_ const core, enum SysctlRcgctimerTimer5Values_ const timer5);
void sysctlShiWriteUIRcgctimerTimer5_(uint32_t * const registerValue, enum SysctlRcgctimerTimer5Values_ const timer5);

uint32_t sysctlShiReadRcgctimerTimer6_(enum SysctlCores_ const core);
uint32_t sysctlShiReadUIRcgctimerTimer6_(uint32_t const registerValue);

void sysctlShiWriteRcgctimerTimer6_(enum SysctlCores_ const core, enum SysctlRcgctimerTimer6Values_ const timer6);
void sysctlShiWriteUIRcgctimerTimer6_(uint32_t * const registerValue, enum SysctlRcgctimerTimer6Values_ const timer6);

uint32_t sysctlShiReadRcgctimerTimer7_(enum SysctlCores_ const core);
uint32_t sysctlShiReadUIRcgctimerTimer7_(uint32_t const registerValue);

void sysctlShiWriteRcgctimerTimer7_(enum SysctlCores_ const core, enum SysctlRcgctimerTimer7Values_ const timer7);
void sysctlShiWriteUIRcgctimerTimer7_(uint32_t * const registerValue, enum SysctlRcgctimerTimer7Values_ const timer7);

uint32_t sysctlShiReadPrtimerTimer0_(enum SysctlCores_ const core);
uint32_t sysctlShiReadUIPrtimerTimer0_(uint32_t const registerValue);

uint32_t sysctlShiReadPrtimerTimer1_(enum SysctlCores_ const core);
uint32_t sysctlShiReadUIPrtimerTimer1_(uint32_t const registerValue);

uint32_t sysctlShiReadPrtimerTimer2_(enum SysctlCores_ const core);
uint32_t sysctlShiReadUIPrtimerTimer2_(uint32_t const registerValue);

uint32_t sysctlShiReadPrtimerTimer3_(enum SysctlCores_ const core);
uint32_t sysctlShiReadUIPrtimerTimer3_(uint32_t const registerValue);

uint32_t sysctlShiReadPrtimerTimer4_(enum SysctlCores_ const core);
uint32_t sysctlShiReadUIPrtimerTimer4_(uint32_t const registerValue);

uint32_t sysctlShiReadPrtimerTimer5_(enum SysctlCores_ const core);
uint32_t sysctlShiReadUIPrtimerTimer5_(uint32_t const registerValue);

uint32_t sysctlShiReadPrtimerTimer6_(enum SysctlCores_ const core);
uint32_t sysctlShiReadUIPrtimerTimer6_(uint32_t const registerValue);

uint32_t sysctlShiReadPrtimerTimer7_(enum SysctlCores_ const core);
uint32_t sysctlShiReadUIPrtimerTimer7_(uint32_t const registerValue);


#endif
