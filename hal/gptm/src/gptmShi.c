//*****************************************************************************
// Name        : gptmShi.c
// Author      : Ole Rönna 
// Maintainer  : Prof. Dr. Paweł Buczek 
// Version     : 0.4 
// Copyright   : All rights reserved 
// Description : 
// This code was generated from a template. Manual changes to this file will 
// be overwritten if the code is regenerated. 
//
//*****************************************************************************

#include "hal/gptm/halGptmShiCores.h"
#include "gptmShi.h"
#include "stdint.h"

//*****************************************************************************
//
// gptm base addresses
//
//*****************************************************************************

static const uint32_t gptmCoreBaseAddresses_[halGptmCoreCount] = {
	0x40030000,
	0x40031000,
	0x40032000,
	0x40033000,
	0x40034000,
	0x40035000,
	0x400E0000,
	0x400E1000
};

//*****************************************************************************
//
// gptm functions for reading/writing of the whole register
//
//*****************************************************************************

uint32_t gptmShiReadGptmcfg_(enum HalGptmCores const core) {
	return *((volatile uint32_t *)(gptmGptmcfg_ + gptmCoreBaseAddresses_[core]));
}

void gptmShiWriteGptmcfg_(enum HalGptmCores const core, uint32_t const registerValue) {
	*((volatile uint32_t *)(gptmGptmcfg_ + gptmCoreBaseAddresses_[core])) = registerValue;
}


uint32_t gptmShiReadGptmtamr_(enum HalGptmCores const core) {
	return *((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core]));
}

void gptmShiWriteGptmtamr_(enum HalGptmCores const core, uint32_t const registerValue) {
	*((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}


uint32_t gptmShiReadGptmtbmr_(enum HalGptmCores const core) {
	return *((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core]));
}

void gptmShiWriteGptmtbmr_(enum HalGptmCores const core, uint32_t const registerValue) {
	*((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}


uint32_t gptmShiReadGptmctl_(enum HalGptmCores const core) {
	return *((volatile uint32_t *)(gptmGptmctl_ + gptmCoreBaseAddresses_[core]));
}

void gptmShiWriteGptmctl_(enum HalGptmCores const core, uint32_t const registerValue) {
	*((volatile uint32_t *)(gptmGptmctl_ + gptmCoreBaseAddresses_[core])) = registerValue;
}


uint32_t gptmShiReadGptmsync_(enum HalGptmCores const core) {
	return *((volatile uint32_t *)(gptmGptmsync_ + gptmCoreBaseAddresses_[core]));
}

void gptmShiWriteGptmsync_(enum HalGptmCores const core, uint32_t const registerValue) {
	*((volatile uint32_t *)(gptmGptmsync_ + gptmCoreBaseAddresses_[core])) = registerValue;
}


uint32_t gptmShiReadGptmimr_(enum HalGptmCores const core) {
	return *((volatile uint32_t *)(gptmGptmimr_ + gptmCoreBaseAddresses_[core]));
}

void gptmShiWriteGptmimr_(enum HalGptmCores const core, uint32_t const registerValue) {
	*((volatile uint32_t *)(gptmGptmimr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}


uint32_t gptmShiReadGptmris_(enum HalGptmCores const core) {
	return *((volatile uint32_t *)(gptmGptmris_ + gptmCoreBaseAddresses_[core]));
}

void gptmShiWriteGptmris_(enum HalGptmCores const core, uint32_t const registerValue) {
	*((volatile uint32_t *)(gptmGptmris_ + gptmCoreBaseAddresses_[core])) = registerValue;
}


uint32_t gptmShiReadGptmmis_(enum HalGptmCores const core) {
	return *((volatile uint32_t *)(gptmGptmmis_ + gptmCoreBaseAddresses_[core]));
}

void gptmShiWriteGptmmis_(enum HalGptmCores const core, uint32_t const registerValue) {
	*((volatile uint32_t *)(gptmGptmmis_ + gptmCoreBaseAddresses_[core])) = registerValue;
}


uint32_t gptmShiReadGptmicr_(enum HalGptmCores const core) {
	return *((volatile uint32_t *)(gptmGptmicr_ + gptmCoreBaseAddresses_[core]));
}

void gptmShiWriteGptmicr_(enum HalGptmCores const core, uint32_t const registerValue) {
	*((volatile uint32_t *)(gptmGptmicr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}


uint32_t gptmShiReadGptmtailr_(enum HalGptmCores const core) {
	return *((volatile uint32_t *)(gptmGptmtailr_ + gptmCoreBaseAddresses_[core]));
}

void gptmShiWriteGptmtailr_(enum HalGptmCores const core, uint32_t const registerValue) {
	*((volatile uint32_t *)(gptmGptmtailr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}


uint32_t gptmShiReadGptmtbilr_(enum HalGptmCores const core) {
	return *((volatile uint32_t *)(gptmGptmtbilr_ + gptmCoreBaseAddresses_[core]));
}

void gptmShiWriteGptmtbilr_(enum HalGptmCores const core, uint32_t const registerValue) {
	*((volatile uint32_t *)(gptmGptmtbilr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}


uint32_t gptmShiReadGptmtamatchr_(enum HalGptmCores const core) {
	return *((volatile uint32_t *)(gptmGptmtamatchr_ + gptmCoreBaseAddresses_[core]));
}

void gptmShiWriteGptmtamatchr_(enum HalGptmCores const core, uint32_t const registerValue) {
	*((volatile uint32_t *)(gptmGptmtamatchr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}


uint32_t gptmShiReadGptmtbmatchr_(enum HalGptmCores const core) {
	return *((volatile uint32_t *)(gptmGptmtbmatchr_ + gptmCoreBaseAddresses_[core]));
}

void gptmShiWriteGptmtbmatchr_(enum HalGptmCores const core, uint32_t const registerValue) {
	*((volatile uint32_t *)(gptmGptmtbmatchr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}


uint32_t gptmShiReadGptmtapr_(enum HalGptmCores const core) {
	return *((volatile uint32_t *)(gptmGptmtapr_ + gptmCoreBaseAddresses_[core]));
}

void gptmShiWriteGptmtapr_(enum HalGptmCores const core, uint32_t const registerValue) {
	*((volatile uint32_t *)(gptmGptmtapr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}


uint32_t gptmShiReadGptmtbpr_(enum HalGptmCores const core) {
	return *((volatile uint32_t *)(gptmGptmtbpr_ + gptmCoreBaseAddresses_[core]));
}

void gptmShiWriteGptmtbpr_(enum HalGptmCores const core, uint32_t const registerValue) {
	*((volatile uint32_t *)(gptmGptmtbpr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}


uint32_t gptmShiReadGptmtapmr_(enum HalGptmCores const core) {
	return *((volatile uint32_t *)(gptmGptmtapmr_ + gptmCoreBaseAddresses_[core]));
}

void gptmShiWriteGptmtapmr_(enum HalGptmCores const core, uint32_t const registerValue) {
	*((volatile uint32_t *)(gptmGptmtapmr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}


uint32_t gptmShiReadGptmtbpmr_(enum HalGptmCores const core) {
	return *((volatile uint32_t *)(gptmGptmtbpmr_ + gptmCoreBaseAddresses_[core]));
}

void gptmShiWriteGptmtbpmr_(enum HalGptmCores const core, uint32_t const registerValue) {
	*((volatile uint32_t *)(gptmGptmtbpmr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}


uint32_t gptmShiReadGptmtar_(enum HalGptmCores const core) {
	return *((volatile uint32_t *)(gptmGptmtar_ + gptmCoreBaseAddresses_[core]));
}

void gptmShiWriteGptmtar_(enum HalGptmCores const core, uint32_t const registerValue) {
	*((volatile uint32_t *)(gptmGptmtar_ + gptmCoreBaseAddresses_[core])) = registerValue;
}


uint32_t gptmShiReadGptmtbr_(enum HalGptmCores const core) {
	return *((volatile uint32_t *)(gptmGptmtbr_ + gptmCoreBaseAddresses_[core]));
}

void gptmShiWriteGptmtbr_(enum HalGptmCores const core, uint32_t const registerValue) {
	*((volatile uint32_t *)(gptmGptmtbr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}


uint32_t gptmShiReadGptmtav_(enum HalGptmCores const core) {
	return *((volatile uint32_t *)(gptmGptmtav_ + gptmCoreBaseAddresses_[core]));
}

void gptmShiWriteGptmtav_(enum HalGptmCores const core, uint32_t const registerValue) {
	*((volatile uint32_t *)(gptmGptmtav_ + gptmCoreBaseAddresses_[core])) = registerValue;
}


uint32_t gptmShiReadGptmtbv_(enum HalGptmCores const core) {
	return *((volatile uint32_t *)(gptmGptmtbv_ + gptmCoreBaseAddresses_[core]));
}

void gptmShiWriteGptmtbv_(enum HalGptmCores const core, uint32_t const registerValue) {
	*((volatile uint32_t *)(gptmGptmtbv_ + gptmCoreBaseAddresses_[core])) = registerValue;
}


uint32_t gptmShiReadGptmrtcpd_(enum HalGptmCores const core) {
	return *((volatile uint32_t *)(gptmGptmrtcpd_ + gptmCoreBaseAddresses_[core]));
}

void gptmShiWriteGptmrtcpd_(enum HalGptmCores const core, uint32_t const registerValue) {
	*((volatile uint32_t *)(gptmGptmrtcpd_ + gptmCoreBaseAddresses_[core])) = registerValue;
}


uint32_t gptmShiReadGptmtaps_(enum HalGptmCores const core) {
	return *((volatile uint32_t *)(gptmGptmtaps_ + gptmCoreBaseAddresses_[core]));
}

void gptmShiWriteGptmtaps_(enum HalGptmCores const core, uint32_t const registerValue) {
	*((volatile uint32_t *)(gptmGptmtaps_ + gptmCoreBaseAddresses_[core])) = registerValue;
}


uint32_t gptmShiReadGptmtbps_(enum HalGptmCores const core) {
	return *((volatile uint32_t *)(gptmGptmtbps_ + gptmCoreBaseAddresses_[core]));
}

void gptmShiWriteGptmtbps_(enum HalGptmCores const core, uint32_t const registerValue) {
	*((volatile uint32_t *)(gptmGptmtbps_ + gptmCoreBaseAddresses_[core])) = registerValue;
}


uint32_t gptmShiReadGptmdmaev_(enum HalGptmCores const core) {
	return *((volatile uint32_t *)(gptmGptmdmaev_ + gptmCoreBaseAddresses_[core]));
}

void gptmShiWriteGptmdmaev_(enum HalGptmCores const core, uint32_t const registerValue) {
	*((volatile uint32_t *)(gptmGptmdmaev_ + gptmCoreBaseAddresses_[core])) = registerValue;
}


uint32_t gptmShiReadGptmadcev_(enum HalGptmCores const core) {
	return *((volatile uint32_t *)(gptmGptmadcev_ + gptmCoreBaseAddresses_[core]));
}

void gptmShiWriteGptmadcev_(enum HalGptmCores const core, uint32_t const registerValue) {
	*((volatile uint32_t *)(gptmGptmadcev_ + gptmCoreBaseAddresses_[core])) = registerValue;
}


uint32_t gptmShiReadGptmpp_(enum HalGptmCores const core) {
	return *((volatile uint32_t *)(gptmGptmpp_ + gptmCoreBaseAddresses_[core]));
}

void gptmShiWriteGptmpp_(enum HalGptmCores const core, uint32_t const registerValue) {
	*((volatile uint32_t *)(gptmGptmpp_ + gptmCoreBaseAddresses_[core])) = registerValue;
}


uint32_t gptmShiReadGptmcc_(enum HalGptmCores const core) {
	return *((volatile uint32_t *)(gptmGptmcc_ + gptmCoreBaseAddresses_[core]));
}

void gptmShiWriteGptmcc_(enum HalGptmCores const core, uint32_t const registerValue) {
	*((volatile uint32_t *)(gptmGptmcc_ + gptmCoreBaseAddresses_[core])) = registerValue;
}


//*****************************************************************************
//
// gptm read/write individual bit fields
//
//*****************************************************************************

uint32_t gptmShiReadGptmcfgGptmcfg_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmcfg_ + gptmCoreBaseAddresses_[core])) >> 0) & 0xf);
}

uint32_t gptmShiReadUIGptmcfgGptmcfg_(uint32_t const registerValue) {
	return ((registerValue >> 0) & 0xf);
}


void gptmShiWriteGptmcfgGptmcfg_(enum HalGptmCores const core, enum GptmGptmcfgGptmcfgValues_ const gptmcfg) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmcfg_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0xf << 0);
	registerValue |= (gptmcfg << 0);

	*((volatile uint32_t *)(gptmGptmcfg_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmcfgGptmcfg_(uint32_t * const registerValue, enum GptmGptmcfgGptmcfgValues_ const gptmcfg) {
	*registerValue &= ~(0xf << 0);
	*registerValue |= (gptmcfg << 0);
}


uint32_t gptmShiReadGptmtamrTamr_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core])) >> 0) & 0x3);
}

uint32_t gptmShiReadUIGptmtamrTamr_(uint32_t const registerValue) {
	return ((registerValue >> 0) & 0x3);
}


void gptmShiWriteGptmtamrTamr_(enum HalGptmCores const core, enum GptmGptmtamrTamrValues_ const tamr) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x3 << 0);
	registerValue |= (tamr << 0);

	*((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmtamrTamr_(uint32_t * const registerValue, enum GptmGptmtamrTamrValues_ const tamr) {
	*registerValue &= ~(0x3 << 0);
	*registerValue |= (tamr << 0);
}


uint32_t gptmShiReadGptmtamrTacmr_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core])) >> 2) & 0x1);
}

uint32_t gptmShiReadUIGptmtamrTacmr_(uint32_t const registerValue) {
	return ((registerValue >> 2) & 0x1);
}


void gptmShiWriteGptmtamrTacmr_(enum HalGptmCores const core, enum GptmGptmtamrTacmrValues_ const tacmr) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 2);
	registerValue |= (tacmr << 2);

	*((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmtamrTacmr_(uint32_t * const registerValue, enum GptmGptmtamrTacmrValues_ const tacmr) {
	*registerValue &= ~(0x1 << 2);
	*registerValue |= (tacmr << 2);
}


uint32_t gptmShiReadGptmtamrTaams_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core])) >> 3) & 0x1);
}

uint32_t gptmShiReadUIGptmtamrTaams_(uint32_t const registerValue) {
	return ((registerValue >> 3) & 0x1);
}


void gptmShiWriteGptmtamrTaams_(enum HalGptmCores const core, enum GptmGptmtamrTaamsValues_ const taams) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 3);
	registerValue |= (taams << 3);

	*((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmtamrTaams_(uint32_t * const registerValue, enum GptmGptmtamrTaamsValues_ const taams) {
	*registerValue &= ~(0x1 << 3);
	*registerValue |= (taams << 3);
}


uint32_t gptmShiReadGptmtamrTacdir_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core])) >> 4) & 0x1);
}

uint32_t gptmShiReadUIGptmtamrTacdir_(uint32_t const registerValue) {
	return ((registerValue >> 4) & 0x1);
}


void gptmShiWriteGptmtamrTacdir_(enum HalGptmCores const core, enum GptmGptmtamrTacdirValues_ const tacdir) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 4);
	registerValue |= (tacdir << 4);

	*((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmtamrTacdir_(uint32_t * const registerValue, enum GptmGptmtamrTacdirValues_ const tacdir) {
	*registerValue &= ~(0x1 << 4);
	*registerValue |= (tacdir << 4);
}


uint32_t gptmShiReadGptmtamrTamie_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core])) >> 5) & 0x1);
}

uint32_t gptmShiReadUIGptmtamrTamie_(uint32_t const registerValue) {
	return ((registerValue >> 5) & 0x1);
}


void gptmShiWriteGptmtamrTamie_(enum HalGptmCores const core, enum GptmGptmtamrTamieValues_ const tamie) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 5);
	registerValue |= (tamie << 5);

	*((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmtamrTamie_(uint32_t * const registerValue, enum GptmGptmtamrTamieValues_ const tamie) {
	*registerValue &= ~(0x1 << 5);
	*registerValue |= (tamie << 5);
}


uint32_t gptmShiReadGptmtamrTawot_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core])) >> 6) & 0x1);
}

uint32_t gptmShiReadUIGptmtamrTawot_(uint32_t const registerValue) {
	return ((registerValue >> 6) & 0x1);
}


void gptmShiWriteGptmtamrTawot_(enum HalGptmCores const core, enum GptmGptmtamrTawotValues_ const tawot) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 6);
	registerValue |= (tawot << 6);

	*((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmtamrTawot_(uint32_t * const registerValue, enum GptmGptmtamrTawotValues_ const tawot) {
	*registerValue &= ~(0x1 << 6);
	*registerValue |= (tawot << 6);
}


uint32_t gptmShiReadGptmtamrTasnaps_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core])) >> 7) & 0x1);
}

uint32_t gptmShiReadUIGptmtamrTasnaps_(uint32_t const registerValue) {
	return ((registerValue >> 7) & 0x1);
}


void gptmShiWriteGptmtamrTasnaps_(enum HalGptmCores const core, enum GptmGptmtamrTasnapsValues_ const tasnaps) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 7);
	registerValue |= (tasnaps << 7);

	*((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmtamrTasnaps_(uint32_t * const registerValue, enum GptmGptmtamrTasnapsValues_ const tasnaps) {
	*registerValue &= ~(0x1 << 7);
	*registerValue |= (tasnaps << 7);
}


uint32_t gptmShiReadGptmtamrTaild_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core])) >> 8) & 0x1);
}

uint32_t gptmShiReadUIGptmtamrTaild_(uint32_t const registerValue) {
	return ((registerValue >> 8) & 0x1);
}


void gptmShiWriteGptmtamrTaild_(enum HalGptmCores const core, enum GptmGptmtamrTaildValues_ const taild) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 8);
	registerValue |= (taild << 8);

	*((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmtamrTaild_(uint32_t * const registerValue, enum GptmGptmtamrTaildValues_ const taild) {
	*registerValue &= ~(0x1 << 8);
	*registerValue |= (taild << 8);
}


uint32_t gptmShiReadGptmtamrTapwmie_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core])) >> 9) & 0x1);
}

uint32_t gptmShiReadUIGptmtamrTapwmie_(uint32_t const registerValue) {
	return ((registerValue >> 9) & 0x1);
}


void gptmShiWriteGptmtamrTapwmie_(enum HalGptmCores const core, enum GptmGptmtamrTapwmieValues_ const tapwmie) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 9);
	registerValue |= (tapwmie << 9);

	*((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmtamrTapwmie_(uint32_t * const registerValue, enum GptmGptmtamrTapwmieValues_ const tapwmie) {
	*registerValue &= ~(0x1 << 9);
	*registerValue |= (tapwmie << 9);
}


uint32_t gptmShiReadGptmtamrTamrsu_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core])) >> 10) & 0x1);
}

uint32_t gptmShiReadUIGptmtamrTamrsu_(uint32_t const registerValue) {
	return ((registerValue >> 10) & 0x1);
}


void gptmShiWriteGptmtamrTamrsu_(enum HalGptmCores const core, enum GptmGptmtamrTamrsuValues_ const tamrsu) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 10);
	registerValue |= (tamrsu << 10);

	*((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmtamrTamrsu_(uint32_t * const registerValue, enum GptmGptmtamrTamrsuValues_ const tamrsu) {
	*registerValue &= ~(0x1 << 10);
	*registerValue |= (tamrsu << 10);
}


uint32_t gptmShiReadGptmtamrTaplo_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core])) >> 11) & 0x1);
}

uint32_t gptmShiReadUIGptmtamrTaplo_(uint32_t const registerValue) {
	return ((registerValue >> 11) & 0x1);
}


void gptmShiWriteGptmtamrTaplo_(enum HalGptmCores const core, enum GptmGptmtamrTaploValues_ const taplo) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 11);
	registerValue |= (taplo << 11);

	*((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmtamrTaplo_(uint32_t * const registerValue, enum GptmGptmtamrTaploValues_ const taplo) {
	*registerValue &= ~(0x1 << 11);
	*registerValue |= (taplo << 11);
}


uint32_t gptmShiReadGptmtamrTacintd_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core])) >> 12) & 0x1);
}

uint32_t gptmShiReadUIGptmtamrTacintd_(uint32_t const registerValue) {
	return ((registerValue >> 12) & 0x1);
}


void gptmShiWriteGptmtamrTacintd_(enum HalGptmCores const core, enum GptmGptmtamrTacintdValues_ const tacintd) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 12);
	registerValue |= (tacintd << 12);

	*((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmtamrTacintd_(uint32_t * const registerValue, enum GptmGptmtamrTacintdValues_ const tacintd) {
	*registerValue &= ~(0x1 << 12);
	*registerValue |= (tacintd << 12);
}


uint32_t gptmShiReadGptmtamrTcact_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core])) >> 13) & 0x7);
}

uint32_t gptmShiReadUIGptmtamrTcact_(uint32_t const registerValue) {
	return ((registerValue >> 13) & 0x7);
}


void gptmShiWriteGptmtamrTcact_(enum HalGptmCores const core, enum GptmGptmtamrTcactValues_ const tcact) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x7 << 13);
	registerValue |= (tcact << 13);

	*((volatile uint32_t *)(gptmGptmtamr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmtamrTcact_(uint32_t * const registerValue, enum GptmGptmtamrTcactValues_ const tcact) {
	*registerValue &= ~(0x7 << 13);
	*registerValue |= (tcact << 13);
}


uint32_t gptmShiReadGptmtbmrTbmr_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core])) >> 0) & 0x3);
}

uint32_t gptmShiReadUIGptmtbmrTbmr_(uint32_t const registerValue) {
	return ((registerValue >> 0) & 0x3);
}


void gptmShiWriteGptmtbmrTbmr_(enum HalGptmCores const core, enum GptmGptmtbmrTbmrValues_ const tbmr) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x3 << 0);
	registerValue |= (tbmr << 0);

	*((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmtbmrTbmr_(uint32_t * const registerValue, enum GptmGptmtbmrTbmrValues_ const tbmr) {
	*registerValue &= ~(0x3 << 0);
	*registerValue |= (tbmr << 0);
}


uint32_t gptmShiReadGptmtbmrTbcmr_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core])) >> 2) & 0x1);
}

uint32_t gptmShiReadUIGptmtbmrTbcmr_(uint32_t const registerValue) {
	return ((registerValue >> 2) & 0x1);
}


void gptmShiWriteGptmtbmrTbcmr_(enum HalGptmCores const core, enum GptmGptmtbmrTbcmrValues_ const tbcmr) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 2);
	registerValue |= (tbcmr << 2);

	*((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmtbmrTbcmr_(uint32_t * const registerValue, enum GptmGptmtbmrTbcmrValues_ const tbcmr) {
	*registerValue &= ~(0x1 << 2);
	*registerValue |= (tbcmr << 2);
}


uint32_t gptmShiReadGptmtbmrTbams_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core])) >> 3) & 0x1);
}

uint32_t gptmShiReadUIGptmtbmrTbams_(uint32_t const registerValue) {
	return ((registerValue >> 3) & 0x1);
}


void gptmShiWriteGptmtbmrTbams_(enum HalGptmCores const core, enum GptmGptmtbmrTbamsValues_ const tbams) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 3);
	registerValue |= (tbams << 3);

	*((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmtbmrTbams_(uint32_t * const registerValue, enum GptmGptmtbmrTbamsValues_ const tbams) {
	*registerValue &= ~(0x1 << 3);
	*registerValue |= (tbams << 3);
}


uint32_t gptmShiReadGptmtbmrTbcdir_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core])) >> 4) & 0x1);
}

uint32_t gptmShiReadUIGptmtbmrTbcdir_(uint32_t const registerValue) {
	return ((registerValue >> 4) & 0x1);
}


void gptmShiWriteGptmtbmrTbcdir_(enum HalGptmCores const core, enum GptmGptmtbmrTbcdirValues_ const tbcdir) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 4);
	registerValue |= (tbcdir << 4);

	*((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmtbmrTbcdir_(uint32_t * const registerValue, enum GptmGptmtbmrTbcdirValues_ const tbcdir) {
	*registerValue &= ~(0x1 << 4);
	*registerValue |= (tbcdir << 4);
}


uint32_t gptmShiReadGptmtbmrTbmie_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core])) >> 5) & 0x1);
}

uint32_t gptmShiReadUIGptmtbmrTbmie_(uint32_t const registerValue) {
	return ((registerValue >> 5) & 0x1);
}


void gptmShiWriteGptmtbmrTbmie_(enum HalGptmCores const core, enum GptmGptmtbmrTbmieValues_ const tbmie) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 5);
	registerValue |= (tbmie << 5);

	*((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmtbmrTbmie_(uint32_t * const registerValue, enum GptmGptmtbmrTbmieValues_ const tbmie) {
	*registerValue &= ~(0x1 << 5);
	*registerValue |= (tbmie << 5);
}


uint32_t gptmShiReadGptmtbmrTbwot_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core])) >> 6) & 0x1);
}

uint32_t gptmShiReadUIGptmtbmrTbwot_(uint32_t const registerValue) {
	return ((registerValue >> 6) & 0x1);
}


void gptmShiWriteGptmtbmrTbwot_(enum HalGptmCores const core, enum GptmGptmtbmrTbwotValues_ const tbwot) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 6);
	registerValue |= (tbwot << 6);

	*((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmtbmrTbwot_(uint32_t * const registerValue, enum GptmGptmtbmrTbwotValues_ const tbwot) {
	*registerValue &= ~(0x1 << 6);
	*registerValue |= (tbwot << 6);
}


uint32_t gptmShiReadGptmtbmrTbsnaps_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core])) >> 7) & 0x1);
}

uint32_t gptmShiReadUIGptmtbmrTbsnaps_(uint32_t const registerValue) {
	return ((registerValue >> 7) & 0x1);
}


void gptmShiWriteGptmtbmrTbsnaps_(enum HalGptmCores const core, enum GptmGptmtbmrTbsnapsValues_ const tbsnaps) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 7);
	registerValue |= (tbsnaps << 7);

	*((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmtbmrTbsnaps_(uint32_t * const registerValue, enum GptmGptmtbmrTbsnapsValues_ const tbsnaps) {
	*registerValue &= ~(0x1 << 7);
	*registerValue |= (tbsnaps << 7);
}


uint32_t gptmShiReadGptmtbmrTbild_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core])) >> 8) & 0x1);
}

uint32_t gptmShiReadUIGptmtbmrTbild_(uint32_t const registerValue) {
	return ((registerValue >> 8) & 0x1);
}


void gptmShiWriteGptmtbmrTbild_(enum HalGptmCores const core, enum GptmGptmtbmrTbildValues_ const tbild) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 8);
	registerValue |= (tbild << 8);

	*((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmtbmrTbild_(uint32_t * const registerValue, enum GptmGptmtbmrTbildValues_ const tbild) {
	*registerValue &= ~(0x1 << 8);
	*registerValue |= (tbild << 8);
}


uint32_t gptmShiReadGptmtbmrTbpwmie_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core])) >> 9) & 0x1);
}

uint32_t gptmShiReadUIGptmtbmrTbpwmie_(uint32_t const registerValue) {
	return ((registerValue >> 9) & 0x1);
}


void gptmShiWriteGptmtbmrTbpwmie_(enum HalGptmCores const core, enum GptmGptmtbmrTbpwmieValues_ const tbpwmie) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 9);
	registerValue |= (tbpwmie << 9);

	*((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmtbmrTbpwmie_(uint32_t * const registerValue, enum GptmGptmtbmrTbpwmieValues_ const tbpwmie) {
	*registerValue &= ~(0x1 << 9);
	*registerValue |= (tbpwmie << 9);
}


uint32_t gptmShiReadGptmtbmrTbmrsu_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core])) >> 10) & 0x1);
}

uint32_t gptmShiReadUIGptmtbmrTbmrsu_(uint32_t const registerValue) {
	return ((registerValue >> 10) & 0x1);
}


void gptmShiWriteGptmtbmrTbmrsu_(enum HalGptmCores const core, enum GptmGptmtbmrTbmrsuValues_ const tbmrsu) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 10);
	registerValue |= (tbmrsu << 10);

	*((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmtbmrTbmrsu_(uint32_t * const registerValue, enum GptmGptmtbmrTbmrsuValues_ const tbmrsu) {
	*registerValue &= ~(0x1 << 10);
	*registerValue |= (tbmrsu << 10);
}


uint32_t gptmShiReadGptmtbmrTbplo_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core])) >> 11) & 0x1);
}

uint32_t gptmShiReadUIGptmtbmrTbplo_(uint32_t const registerValue) {
	return ((registerValue >> 11) & 0x1);
}


void gptmShiWriteGptmtbmrTbplo_(enum HalGptmCores const core, enum GptmGptmtbmrTbploValues_ const tbplo) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 11);
	registerValue |= (tbplo << 11);

	*((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmtbmrTbplo_(uint32_t * const registerValue, enum GptmGptmtbmrTbploValues_ const tbplo) {
	*registerValue &= ~(0x1 << 11);
	*registerValue |= (tbplo << 11);
}


uint32_t gptmShiReadGptmtbmrTbcintd_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core])) >> 12) & 0x1);
}

uint32_t gptmShiReadUIGptmtbmrTbcintd_(uint32_t const registerValue) {
	return ((registerValue >> 12) & 0x1);
}


void gptmShiWriteGptmtbmrTbcintd_(enum HalGptmCores const core, enum GptmGptmtbmrTbcintdValues_ const tbcintd) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 12);
	registerValue |= (tbcintd << 12);

	*((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmtbmrTbcintd_(uint32_t * const registerValue, enum GptmGptmtbmrTbcintdValues_ const tbcintd) {
	*registerValue &= ~(0x1 << 12);
	*registerValue |= (tbcintd << 12);
}


uint32_t gptmShiReadGptmtbmrTcact_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core])) >> 13) & 0x7);
}

uint32_t gptmShiReadUIGptmtbmrTcact_(uint32_t const registerValue) {
	return ((registerValue >> 13) & 0x7);
}


void gptmShiWriteGptmtbmrTcact_(enum HalGptmCores const core, enum GptmGptmtbmrTcactValues_ const tcact) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x7 << 13);
	registerValue |= (tcact << 13);

	*((volatile uint32_t *)(gptmGptmtbmr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmtbmrTcact_(uint32_t * const registerValue, enum GptmGptmtbmrTcactValues_ const tcact) {
	*registerValue &= ~(0x7 << 13);
	*registerValue |= (tcact << 13);
}


uint32_t gptmShiReadGptmctlTaen_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmctl_ + gptmCoreBaseAddresses_[core])) >> 0) & 0x1);
}

uint32_t gptmShiReadUIGptmctlTaen_(uint32_t const registerValue) {
	return ((registerValue >> 0) & 0x1);
}


void gptmShiWriteGptmctlTaen_(enum HalGptmCores const core, enum GptmGptmctlTaenValues_ const taen) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmctl_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 0);
	registerValue |= (taen << 0);

	*((volatile uint32_t *)(gptmGptmctl_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmctlTaen_(uint32_t * const registerValue, enum GptmGptmctlTaenValues_ const taen) {
	*registerValue &= ~(0x1 << 0);
	*registerValue |= (taen << 0);
}


uint32_t gptmShiReadGptmctlTastall_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmctl_ + gptmCoreBaseAddresses_[core])) >> 1) & 0x1);
}

uint32_t gptmShiReadUIGptmctlTastall_(uint32_t const registerValue) {
	return ((registerValue >> 1) & 0x1);
}


void gptmShiWriteGptmctlTastall_(enum HalGptmCores const core, enum GptmGptmctlTastallValues_ const tastall) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmctl_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 1);
	registerValue |= (tastall << 1);

	*((volatile uint32_t *)(gptmGptmctl_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmctlTastall_(uint32_t * const registerValue, enum GptmGptmctlTastallValues_ const tastall) {
	*registerValue &= ~(0x1 << 1);
	*registerValue |= (tastall << 1);
}


uint32_t gptmShiReadGptmctlTaevent_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmctl_ + gptmCoreBaseAddresses_[core])) >> 2) & 0x3);
}

uint32_t gptmShiReadUIGptmctlTaevent_(uint32_t const registerValue) {
	return ((registerValue >> 2) & 0x3);
}


void gptmShiWriteGptmctlTaevent_(enum HalGptmCores const core, enum GptmGptmctlTaeventValues_ const taevent) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmctl_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x3 << 2);
	registerValue |= (taevent << 2);

	*((volatile uint32_t *)(gptmGptmctl_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmctlTaevent_(uint32_t * const registerValue, enum GptmGptmctlTaeventValues_ const taevent) {
	*registerValue &= ~(0x3 << 2);
	*registerValue |= (taevent << 2);
}


uint32_t gptmShiReadGptmctlRtcen_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmctl_ + gptmCoreBaseAddresses_[core])) >> 4) & 0x1);
}

uint32_t gptmShiReadUIGptmctlRtcen_(uint32_t const registerValue) {
	return ((registerValue >> 4) & 0x1);
}


void gptmShiWriteGptmctlRtcen_(enum HalGptmCores const core, enum GptmGptmctlRtcenValues_ const rtcen) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmctl_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 4);
	registerValue |= (rtcen << 4);

	*((volatile uint32_t *)(gptmGptmctl_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmctlRtcen_(uint32_t * const registerValue, enum GptmGptmctlRtcenValues_ const rtcen) {
	*registerValue &= ~(0x1 << 4);
	*registerValue |= (rtcen << 4);
}


uint32_t gptmShiReadGptmctlTaote_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmctl_ + gptmCoreBaseAddresses_[core])) >> 5) & 0x1);
}

uint32_t gptmShiReadUIGptmctlTaote_(uint32_t const registerValue) {
	return ((registerValue >> 5) & 0x1);
}


void gptmShiWriteGptmctlTaote_(enum HalGptmCores const core, enum GptmGptmctlTaoteValues_ const taote) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmctl_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 5);
	registerValue |= (taote << 5);

	*((volatile uint32_t *)(gptmGptmctl_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmctlTaote_(uint32_t * const registerValue, enum GptmGptmctlTaoteValues_ const taote) {
	*registerValue &= ~(0x1 << 5);
	*registerValue |= (taote << 5);
}


uint32_t gptmShiReadGptmctlTapwml_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmctl_ + gptmCoreBaseAddresses_[core])) >> 6) & 0x1);
}

uint32_t gptmShiReadUIGptmctlTapwml_(uint32_t const registerValue) {
	return ((registerValue >> 6) & 0x1);
}


void gptmShiWriteGptmctlTapwml_(enum HalGptmCores const core, enum GptmGptmctlTapwmlValues_ const tapwml) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmctl_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 6);
	registerValue |= (tapwml << 6);

	*((volatile uint32_t *)(gptmGptmctl_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmctlTapwml_(uint32_t * const registerValue, enum GptmGptmctlTapwmlValues_ const tapwml) {
	*registerValue &= ~(0x1 << 6);
	*registerValue |= (tapwml << 6);
}


uint32_t gptmShiReadGptmctlTben_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmctl_ + gptmCoreBaseAddresses_[core])) >> 8) & 0x1);
}

uint32_t gptmShiReadUIGptmctlTben_(uint32_t const registerValue) {
	return ((registerValue >> 8) & 0x1);
}


void gptmShiWriteGptmctlTben_(enum HalGptmCores const core, enum GptmGptmctlTbenValues_ const tben) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmctl_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 8);
	registerValue |= (tben << 8);

	*((volatile uint32_t *)(gptmGptmctl_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmctlTben_(uint32_t * const registerValue, enum GptmGptmctlTbenValues_ const tben) {
	*registerValue &= ~(0x1 << 8);
	*registerValue |= (tben << 8);
}


uint32_t gptmShiReadGptmctlTbstall_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmctl_ + gptmCoreBaseAddresses_[core])) >> 9) & 0x1);
}

uint32_t gptmShiReadUIGptmctlTbstall_(uint32_t const registerValue) {
	return ((registerValue >> 9) & 0x1);
}


void gptmShiWriteGptmctlTbstall_(enum HalGptmCores const core, enum GptmGptmctlTbstallValues_ const tbstall) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmctl_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 9);
	registerValue |= (tbstall << 9);

	*((volatile uint32_t *)(gptmGptmctl_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmctlTbstall_(uint32_t * const registerValue, enum GptmGptmctlTbstallValues_ const tbstall) {
	*registerValue &= ~(0x1 << 9);
	*registerValue |= (tbstall << 9);
}


uint32_t gptmShiReadGptmctlTbevent_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmctl_ + gptmCoreBaseAddresses_[core])) >> 10) & 0x3);
}

uint32_t gptmShiReadUIGptmctlTbevent_(uint32_t const registerValue) {
	return ((registerValue >> 10) & 0x3);
}


void gptmShiWriteGptmctlTbevent_(enum HalGptmCores const core, enum GptmGptmctlTbeventValues_ const tbevent) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmctl_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x3 << 10);
	registerValue |= (tbevent << 10);

	*((volatile uint32_t *)(gptmGptmctl_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmctlTbevent_(uint32_t * const registerValue, enum GptmGptmctlTbeventValues_ const tbevent) {
	*registerValue &= ~(0x3 << 10);
	*registerValue |= (tbevent << 10);
}


uint32_t gptmShiReadGptmctlTbote_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmctl_ + gptmCoreBaseAddresses_[core])) >> 13) & 0x1);
}

uint32_t gptmShiReadUIGptmctlTbote_(uint32_t const registerValue) {
	return ((registerValue >> 13) & 0x1);
}


void gptmShiWriteGptmctlTbote_(enum HalGptmCores const core, enum GptmGptmctlTboteValues_ const tbote) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmctl_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 13);
	registerValue |= (tbote << 13);

	*((volatile uint32_t *)(gptmGptmctl_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmctlTbote_(uint32_t * const registerValue, enum GptmGptmctlTboteValues_ const tbote) {
	*registerValue &= ~(0x1 << 13);
	*registerValue |= (tbote << 13);
}


uint32_t gptmShiReadGptmctlTbpwml_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmctl_ + gptmCoreBaseAddresses_[core])) >> 14) & 0x1);
}

uint32_t gptmShiReadUIGptmctlTbpwml_(uint32_t const registerValue) {
	return ((registerValue >> 14) & 0x1);
}


void gptmShiWriteGptmctlTbpwml_(enum HalGptmCores const core, enum GptmGptmctlTbpwmlValues_ const tbpwml) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmctl_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 14);
	registerValue |= (tbpwml << 14);

	*((volatile uint32_t *)(gptmGptmctl_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmctlTbpwml_(uint32_t * const registerValue, enum GptmGptmctlTbpwmlValues_ const tbpwml) {
	*registerValue &= ~(0x1 << 14);
	*registerValue |= (tbpwml << 14);
}


void gptmShiWriteGptmsyncSynct0_(enum HalGptmCores const core, enum GptmGptmsyncSynct0Values_ const synct0) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmsync_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x3 << 0);
	registerValue |= (synct0 << 0);

	*((volatile uint32_t *)(gptmGptmsync_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmsyncSynct0_(uint32_t * const registerValue, enum GptmGptmsyncSynct0Values_ const synct0) {
	*registerValue &= ~(0x3 << 0);
	*registerValue |= (synct0 << 0);
}


void gptmShiWriteGptmsyncSynct1_(enum HalGptmCores const core, enum GptmGptmsyncSynct1Values_ const synct1) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmsync_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x3 << 2);
	registerValue |= (synct1 << 2);

	*((volatile uint32_t *)(gptmGptmsync_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmsyncSynct1_(uint32_t * const registerValue, enum GptmGptmsyncSynct1Values_ const synct1) {
	*registerValue &= ~(0x3 << 2);
	*registerValue |= (synct1 << 2);
}


void gptmShiWriteGptmsyncSynct2_(enum HalGptmCores const core, enum GptmGptmsyncSynct2Values_ const synct2) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmsync_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x3 << 4);
	registerValue |= (synct2 << 4);

	*((volatile uint32_t *)(gptmGptmsync_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmsyncSynct2_(uint32_t * const registerValue, enum GptmGptmsyncSynct2Values_ const synct2) {
	*registerValue &= ~(0x3 << 4);
	*registerValue |= (synct2 << 4);
}


void gptmShiWriteGptmsyncSynct3_(enum HalGptmCores const core, enum GptmGptmsyncSynct3Values_ const synct3) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmsync_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x3 << 6);
	registerValue |= (synct3 << 6);

	*((volatile uint32_t *)(gptmGptmsync_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmsyncSynct3_(uint32_t * const registerValue, enum GptmGptmsyncSynct3Values_ const synct3) {
	*registerValue &= ~(0x3 << 6);
	*registerValue |= (synct3 << 6);
}


void gptmShiWriteGptmsyncSynct4_(enum HalGptmCores const core, enum GptmGptmsyncSynct4Values_ const synct4) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmsync_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x3 << 8);
	registerValue |= (synct4 << 8);

	*((volatile uint32_t *)(gptmGptmsync_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmsyncSynct4_(uint32_t * const registerValue, enum GptmGptmsyncSynct4Values_ const synct4) {
	*registerValue &= ~(0x3 << 8);
	*registerValue |= (synct4 << 8);
}


void gptmShiWriteGptmsyncSynct5_(enum HalGptmCores const core, enum GptmGptmsyncSynct5Values_ const synct5) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmsync_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x3 << 10);
	registerValue |= (synct5 << 10);

	*((volatile uint32_t *)(gptmGptmsync_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmsyncSynct5_(uint32_t * const registerValue, enum GptmGptmsyncSynct5Values_ const synct5) {
	*registerValue &= ~(0x3 << 10);
	*registerValue |= (synct5 << 10);
}


void gptmShiWriteGptmsyncSynct6_(enum HalGptmCores const core, enum GptmGptmsyncSynct6Values_ const synct6) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmsync_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x3 << 12);
	registerValue |= (synct6 << 12);

	*((volatile uint32_t *)(gptmGptmsync_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmsyncSynct6_(uint32_t * const registerValue, enum GptmGptmsyncSynct6Values_ const synct6) {
	*registerValue &= ~(0x3 << 12);
	*registerValue |= (synct6 << 12);
}


void gptmShiWriteGptmsyncSynct7_(enum HalGptmCores const core, enum GptmGptmsyncSynct7Values_ const synct7) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmsync_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x3 << 14);
	registerValue |= (synct7 << 14);

	*((volatile uint32_t *)(gptmGptmsync_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmsyncSynct7_(uint32_t * const registerValue, enum GptmGptmsyncSynct7Values_ const synct7) {
	*registerValue &= ~(0x3 << 14);
	*registerValue |= (synct7 << 14);
}


uint32_t gptmShiReadGptmimrTatoim_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmimr_ + gptmCoreBaseAddresses_[core])) >> 0) & 0x1);
}

uint32_t gptmShiReadUIGptmimrTatoim_(uint32_t const registerValue) {
	return ((registerValue >> 0) & 0x1);
}


void gptmShiWriteGptmimrTatoim_(enum HalGptmCores const core, enum GptmGptmimrTatoimValues_ const tatoim) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmimr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 0);
	registerValue |= (tatoim << 0);

	*((volatile uint32_t *)(gptmGptmimr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmimrTatoim_(uint32_t * const registerValue, enum GptmGptmimrTatoimValues_ const tatoim) {
	*registerValue &= ~(0x1 << 0);
	*registerValue |= (tatoim << 0);
}


uint32_t gptmShiReadGptmimrCamim_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmimr_ + gptmCoreBaseAddresses_[core])) >> 1) & 0x1);
}

uint32_t gptmShiReadUIGptmimrCamim_(uint32_t const registerValue) {
	return ((registerValue >> 1) & 0x1);
}


void gptmShiWriteGptmimrCamim_(enum HalGptmCores const core, enum GptmGptmimrCamimValues_ const camim) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmimr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 1);
	registerValue |= (camim << 1);

	*((volatile uint32_t *)(gptmGptmimr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmimrCamim_(uint32_t * const registerValue, enum GptmGptmimrCamimValues_ const camim) {
	*registerValue &= ~(0x1 << 1);
	*registerValue |= (camim << 1);
}


uint32_t gptmShiReadGptmimrCaeim_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmimr_ + gptmCoreBaseAddresses_[core])) >> 2) & 0x1);
}

uint32_t gptmShiReadUIGptmimrCaeim_(uint32_t const registerValue) {
	return ((registerValue >> 2) & 0x1);
}


void gptmShiWriteGptmimrCaeim_(enum HalGptmCores const core, enum GptmGptmimrCaeimValues_ const caeim) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmimr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 2);
	registerValue |= (caeim << 2);

	*((volatile uint32_t *)(gptmGptmimr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmimrCaeim_(uint32_t * const registerValue, enum GptmGptmimrCaeimValues_ const caeim) {
	*registerValue &= ~(0x1 << 2);
	*registerValue |= (caeim << 2);
}


uint32_t gptmShiReadGptmimrRtcim_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmimr_ + gptmCoreBaseAddresses_[core])) >> 3) & 0x1);
}

uint32_t gptmShiReadUIGptmimrRtcim_(uint32_t const registerValue) {
	return ((registerValue >> 3) & 0x1);
}


void gptmShiWriteGptmimrRtcim_(enum HalGptmCores const core, enum GptmGptmimrRtcimValues_ const rtcim) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmimr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 3);
	registerValue |= (rtcim << 3);

	*((volatile uint32_t *)(gptmGptmimr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmimrRtcim_(uint32_t * const registerValue, enum GptmGptmimrRtcimValues_ const rtcim) {
	*registerValue &= ~(0x1 << 3);
	*registerValue |= (rtcim << 3);
}


uint32_t gptmShiReadGptmimrTamim_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmimr_ + gptmCoreBaseAddresses_[core])) >> 4) & 0x1);
}

uint32_t gptmShiReadUIGptmimrTamim_(uint32_t const registerValue) {
	return ((registerValue >> 4) & 0x1);
}


void gptmShiWriteGptmimrTamim_(enum HalGptmCores const core, enum GptmGptmimrTamimValues_ const tamim) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmimr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 4);
	registerValue |= (tamim << 4);

	*((volatile uint32_t *)(gptmGptmimr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmimrTamim_(uint32_t * const registerValue, enum GptmGptmimrTamimValues_ const tamim) {
	*registerValue &= ~(0x1 << 4);
	*registerValue |= (tamim << 4);
}


uint32_t gptmShiReadGptmimrDmaaim_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmimr_ + gptmCoreBaseAddresses_[core])) >> 5) & 0x1);
}

uint32_t gptmShiReadUIGptmimrDmaaim_(uint32_t const registerValue) {
	return ((registerValue >> 5) & 0x1);
}


void gptmShiWriteGptmimrDmaaim_(enum HalGptmCores const core, enum GptmGptmimrDmaaimValues_ const dmaaim) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmimr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 5);
	registerValue |= (dmaaim << 5);

	*((volatile uint32_t *)(gptmGptmimr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmimrDmaaim_(uint32_t * const registerValue, enum GptmGptmimrDmaaimValues_ const dmaaim) {
	*registerValue &= ~(0x1 << 5);
	*registerValue |= (dmaaim << 5);
}


uint32_t gptmShiReadGptmimrTbtoim_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmimr_ + gptmCoreBaseAddresses_[core])) >> 8) & 0x1);
}

uint32_t gptmShiReadUIGptmimrTbtoim_(uint32_t const registerValue) {
	return ((registerValue >> 8) & 0x1);
}


void gptmShiWriteGptmimrTbtoim_(enum HalGptmCores const core, enum GptmGptmimrTbtoimValues_ const tbtoim) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmimr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 8);
	registerValue |= (tbtoim << 8);

	*((volatile uint32_t *)(gptmGptmimr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmimrTbtoim_(uint32_t * const registerValue, enum GptmGptmimrTbtoimValues_ const tbtoim) {
	*registerValue &= ~(0x1 << 8);
	*registerValue |= (tbtoim << 8);
}


uint32_t gptmShiReadGptmimrCbmim_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmimr_ + gptmCoreBaseAddresses_[core])) >> 9) & 0x1);
}

uint32_t gptmShiReadUIGptmimrCbmim_(uint32_t const registerValue) {
	return ((registerValue >> 9) & 0x1);
}


void gptmShiWriteGptmimrCbmim_(enum HalGptmCores const core, enum GptmGptmimrCbmimValues_ const cbmim) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmimr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 9);
	registerValue |= (cbmim << 9);

	*((volatile uint32_t *)(gptmGptmimr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmimrCbmim_(uint32_t * const registerValue, enum GptmGptmimrCbmimValues_ const cbmim) {
	*registerValue &= ~(0x1 << 9);
	*registerValue |= (cbmim << 9);
}


uint32_t gptmShiReadGptmimrCbeim_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmimr_ + gptmCoreBaseAddresses_[core])) >> 10) & 0x1);
}

uint32_t gptmShiReadUIGptmimrCbeim_(uint32_t const registerValue) {
	return ((registerValue >> 10) & 0x1);
}


void gptmShiWriteGptmimrCbeim_(enum HalGptmCores const core, enum GptmGptmimrCbeimValues_ const cbeim) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmimr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 10);
	registerValue |= (cbeim << 10);

	*((volatile uint32_t *)(gptmGptmimr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmimrCbeim_(uint32_t * const registerValue, enum GptmGptmimrCbeimValues_ const cbeim) {
	*registerValue &= ~(0x1 << 10);
	*registerValue |= (cbeim << 10);
}


uint32_t gptmShiReadGptmimrTbmim_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmimr_ + gptmCoreBaseAddresses_[core])) >> 11) & 0x1);
}

uint32_t gptmShiReadUIGptmimrTbmim_(uint32_t const registerValue) {
	return ((registerValue >> 11) & 0x1);
}


void gptmShiWriteGptmimrTbmim_(enum HalGptmCores const core, enum GptmGptmimrTbmimValues_ const tbmim) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmimr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 11);
	registerValue |= (tbmim << 11);

	*((volatile uint32_t *)(gptmGptmimr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmimrTbmim_(uint32_t * const registerValue, enum GptmGptmimrTbmimValues_ const tbmim) {
	*registerValue &= ~(0x1 << 11);
	*registerValue |= (tbmim << 11);
}


uint32_t gptmShiReadGptmimrDmabim_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmimr_ + gptmCoreBaseAddresses_[core])) >> 13) & 0x1);
}

uint32_t gptmShiReadUIGptmimrDmabim_(uint32_t const registerValue) {
	return ((registerValue >> 13) & 0x1);
}


void gptmShiWriteGptmimrDmabim_(enum HalGptmCores const core, enum GptmGptmimrDmabimValues_ const dmabim) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmimr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 13);
	registerValue |= (dmabim << 13);

	*((volatile uint32_t *)(gptmGptmimr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmimrDmabim_(uint32_t * const registerValue, enum GptmGptmimrDmabimValues_ const dmabim) {
	*registerValue &= ~(0x1 << 13);
	*registerValue |= (dmabim << 13);
}


uint32_t gptmShiReadGptmrisTatoris_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmris_ + gptmCoreBaseAddresses_[core])) >> 0) & 0x1);
}

uint32_t gptmShiReadUIGptmrisTatoris_(uint32_t const registerValue) {
	return ((registerValue >> 0) & 0x1);
}


uint32_t gptmShiReadGptmrisCamris_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmris_ + gptmCoreBaseAddresses_[core])) >> 1) & 0x1);
}

uint32_t gptmShiReadUIGptmrisCamris_(uint32_t const registerValue) {
	return ((registerValue >> 1) & 0x1);
}


uint32_t gptmShiReadGptmrisCaeris_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmris_ + gptmCoreBaseAddresses_[core])) >> 2) & 0x1);
}

uint32_t gptmShiReadUIGptmrisCaeris_(uint32_t const registerValue) {
	return ((registerValue >> 2) & 0x1);
}


uint32_t gptmShiReadGptmrisRtcris_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmris_ + gptmCoreBaseAddresses_[core])) >> 3) & 0x1);
}

uint32_t gptmShiReadUIGptmrisRtcris_(uint32_t const registerValue) {
	return ((registerValue >> 3) & 0x1);
}


uint32_t gptmShiReadGptmrisTamris_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmris_ + gptmCoreBaseAddresses_[core])) >> 4) & 0x1);
}

uint32_t gptmShiReadUIGptmrisTamris_(uint32_t const registerValue) {
	return ((registerValue >> 4) & 0x1);
}


uint32_t gptmShiReadGptmrisDmaaris_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmris_ + gptmCoreBaseAddresses_[core])) >> 5) & 0x1);
}

uint32_t gptmShiReadUIGptmrisDmaaris_(uint32_t const registerValue) {
	return ((registerValue >> 5) & 0x1);
}


uint32_t gptmShiReadGptmrisTbtoris_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmris_ + gptmCoreBaseAddresses_[core])) >> 8) & 0x1);
}

uint32_t gptmShiReadUIGptmrisTbtoris_(uint32_t const registerValue) {
	return ((registerValue >> 8) & 0x1);
}


uint32_t gptmShiReadGptmrisCbmris_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmris_ + gptmCoreBaseAddresses_[core])) >> 9) & 0x1);
}

uint32_t gptmShiReadUIGptmrisCbmris_(uint32_t const registerValue) {
	return ((registerValue >> 9) & 0x1);
}


uint32_t gptmShiReadGptmrisCberis_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmris_ + gptmCoreBaseAddresses_[core])) >> 10) & 0x1);
}

uint32_t gptmShiReadUIGptmrisCberis_(uint32_t const registerValue) {
	return ((registerValue >> 10) & 0x1);
}


uint32_t gptmShiReadGptmrisTbmris_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmris_ + gptmCoreBaseAddresses_[core])) >> 11) & 0x1);
}

uint32_t gptmShiReadUIGptmrisTbmris_(uint32_t const registerValue) {
	return ((registerValue >> 11) & 0x1);
}


uint32_t gptmShiReadGptmrisDmabris_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmris_ + gptmCoreBaseAddresses_[core])) >> 13) & 0x1);
}

uint32_t gptmShiReadUIGptmrisDmabris_(uint32_t const registerValue) {
	return ((registerValue >> 13) & 0x1);
}


uint32_t gptmShiReadGptmmisTatomis_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmmis_ + gptmCoreBaseAddresses_[core])) >> 0) & 0x1);
}

uint32_t gptmShiReadUIGptmmisTatomis_(uint32_t const registerValue) {
	return ((registerValue >> 0) & 0x1);
}


uint32_t gptmShiReadGptmmisCammis_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmmis_ + gptmCoreBaseAddresses_[core])) >> 1) & 0x1);
}

uint32_t gptmShiReadUIGptmmisCammis_(uint32_t const registerValue) {
	return ((registerValue >> 1) & 0x1);
}


uint32_t gptmShiReadGptmmisCaemis_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmmis_ + gptmCoreBaseAddresses_[core])) >> 2) & 0x1);
}

uint32_t gptmShiReadUIGptmmisCaemis_(uint32_t const registerValue) {
	return ((registerValue >> 2) & 0x1);
}


uint32_t gptmShiReadGptmmisRtcmis_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmmis_ + gptmCoreBaseAddresses_[core])) >> 3) & 0x1);
}

uint32_t gptmShiReadUIGptmmisRtcmis_(uint32_t const registerValue) {
	return ((registerValue >> 3) & 0x1);
}


uint32_t gptmShiReadGptmmisTammis_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmmis_ + gptmCoreBaseAddresses_[core])) >> 4) & 0x1);
}

uint32_t gptmShiReadUIGptmmisTammis_(uint32_t const registerValue) {
	return ((registerValue >> 4) & 0x1);
}


uint32_t gptmShiReadGptmmisDmaamis_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmmis_ + gptmCoreBaseAddresses_[core])) >> 5) & 0x1);
}

uint32_t gptmShiReadUIGptmmisDmaamis_(uint32_t const registerValue) {
	return ((registerValue >> 5) & 0x1);
}


uint32_t gptmShiReadGptmmisTbtomis_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmmis_ + gptmCoreBaseAddresses_[core])) >> 8) & 0x1);
}

uint32_t gptmShiReadUIGptmmisTbtomis_(uint32_t const registerValue) {
	return ((registerValue >> 8) & 0x1);
}


uint32_t gptmShiReadGptmmisCbmmis_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmmis_ + gptmCoreBaseAddresses_[core])) >> 9) & 0x1);
}

uint32_t gptmShiReadUIGptmmisCbmmis_(uint32_t const registerValue) {
	return ((registerValue >> 9) & 0x1);
}


uint32_t gptmShiReadGptmmisCbemis_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmmis_ + gptmCoreBaseAddresses_[core])) >> 10) & 0x1);
}

uint32_t gptmShiReadUIGptmmisCbemis_(uint32_t const registerValue) {
	return ((registerValue >> 10) & 0x1);
}


uint32_t gptmShiReadGptmmisTbmmis_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmmis_ + gptmCoreBaseAddresses_[core])) >> 11) & 0x1);
}

uint32_t gptmShiReadUIGptmmisTbmmis_(uint32_t const registerValue) {
	return ((registerValue >> 11) & 0x1);
}


uint32_t gptmShiReadGptmmisDmabmis_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmmis_ + gptmCoreBaseAddresses_[core])) >> 13) & 0x1);
}

uint32_t gptmShiReadUIGptmmisDmabmis_(uint32_t const registerValue) {
	return ((registerValue >> 13) & 0x1);
}


uint32_t gptmShiReadGptmtailrTailr_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtailr_ + gptmCoreBaseAddresses_[core])) >> 0) & 0xffffffff);
}

uint32_t gptmShiReadUIGptmtailrTailr_(uint32_t const registerValue) {
	return ((registerValue >> 0) & 0xffffffff);
}


void gptmShiWriteGptmtailrTailr_(enum HalGptmCores const core, uint32_t const tailr) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmtailr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0xffffffff << 0);
	registerValue |= (tailr << 0);

	*((volatile uint32_t *)(gptmGptmtailr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmtailrTailr_(uint32_t * const registerValue, uint32_t const tailr) {
	*registerValue &= ~(0xffffffff << 0);
	*registerValue |= (tailr << 0);
}


uint32_t gptmShiReadGptmtbilrTbilr_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtbilr_ + gptmCoreBaseAddresses_[core])) >> 0) & 0xffffffff);
}

uint32_t gptmShiReadUIGptmtbilrTbilr_(uint32_t const registerValue) {
	return ((registerValue >> 0) & 0xffffffff);
}


void gptmShiWriteGptmtbilrTbilr_(enum HalGptmCores const core, uint32_t const tbilr) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmtbilr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0xffffffff << 0);
	registerValue |= (tbilr << 0);

	*((volatile uint32_t *)(gptmGptmtbilr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmtbilrTbilr_(uint32_t * const registerValue, uint32_t const tbilr) {
	*registerValue &= ~(0xffffffff << 0);
	*registerValue |= (tbilr << 0);
}


uint32_t gptmShiReadGptmtamatchrTamr_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtamatchr_ + gptmCoreBaseAddresses_[core])) >> 0) & 0xffffffff);
}

uint32_t gptmShiReadUIGptmtamatchrTamr_(uint32_t const registerValue) {
	return ((registerValue >> 0) & 0xffffffff);
}


void gptmShiWriteGptmtamatchrTamr_(enum HalGptmCores const core, uint32_t const tamr) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmtamatchr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0xffffffff << 0);
	registerValue |= (tamr << 0);

	*((volatile uint32_t *)(gptmGptmtamatchr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmtamatchrTamr_(uint32_t * const registerValue, uint32_t const tamr) {
	*registerValue &= ~(0xffffffff << 0);
	*registerValue |= (tamr << 0);
}


uint32_t gptmShiReadGptmtbmatchrTbmr_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtbmatchr_ + gptmCoreBaseAddresses_[core])) >> 0) & 0xffffffff);
}

uint32_t gptmShiReadUIGptmtbmatchrTbmr_(uint32_t const registerValue) {
	return ((registerValue >> 0) & 0xffffffff);
}


void gptmShiWriteGptmtbmatchrTbmr_(enum HalGptmCores const core, uint32_t const tbmr) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmtbmatchr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0xffffffff << 0);
	registerValue |= (tbmr << 0);

	*((volatile uint32_t *)(gptmGptmtbmatchr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmtbmatchrTbmr_(uint32_t * const registerValue, uint32_t const tbmr) {
	*registerValue &= ~(0xffffffff << 0);
	*registerValue |= (tbmr << 0);
}


uint32_t gptmShiReadGptmtaprTapsr_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtapr_ + gptmCoreBaseAddresses_[core])) >> 0) & 0xff);
}

uint32_t gptmShiReadUIGptmtaprTapsr_(uint32_t const registerValue) {
	return ((registerValue >> 0) & 0xff);
}


void gptmShiWriteGptmtaprTapsr_(enum HalGptmCores const core, uint32_t const tapsr) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmtapr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0xff << 0);
	registerValue |= (tapsr << 0);

	*((volatile uint32_t *)(gptmGptmtapr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmtaprTapsr_(uint32_t * const registerValue, uint32_t const tapsr) {
	*registerValue &= ~(0xff << 0);
	*registerValue |= (tapsr << 0);
}


uint32_t gptmShiReadGptmtbprTbpsr_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtbpr_ + gptmCoreBaseAddresses_[core])) >> 0) & 0xff);
}

uint32_t gptmShiReadUIGptmtbprTbpsr_(uint32_t const registerValue) {
	return ((registerValue >> 0) & 0xff);
}


void gptmShiWriteGptmtbprTbpsr_(enum HalGptmCores const core, uint32_t const tbpsr) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmtbpr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0xff << 0);
	registerValue |= (tbpsr << 0);

	*((volatile uint32_t *)(gptmGptmtbpr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmtbprTbpsr_(uint32_t * const registerValue, uint32_t const tbpsr) {
	*registerValue &= ~(0xff << 0);
	*registerValue |= (tbpsr << 0);
}


uint32_t gptmShiReadGptmtapmrTapsmr_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtapmr_ + gptmCoreBaseAddresses_[core])) >> 0) & 0xff);
}

uint32_t gptmShiReadUIGptmtapmrTapsmr_(uint32_t const registerValue) {
	return ((registerValue >> 0) & 0xff);
}


void gptmShiWriteGptmtapmrTapsmr_(enum HalGptmCores const core, uint32_t const tapsmr) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmtapmr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0xff << 0);
	registerValue |= (tapsmr << 0);

	*((volatile uint32_t *)(gptmGptmtapmr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmtapmrTapsmr_(uint32_t * const registerValue, uint32_t const tapsmr) {
	*registerValue &= ~(0xff << 0);
	*registerValue |= (tapsmr << 0);
}


uint32_t gptmShiReadGptmtbpmrTbpsmr_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtbpmr_ + gptmCoreBaseAddresses_[core])) >> 0) & 0xff);
}

uint32_t gptmShiReadUIGptmtbpmrTbpsmr_(uint32_t const registerValue) {
	return ((registerValue >> 0) & 0xff);
}


void gptmShiWriteGptmtbpmrTbpsmr_(enum HalGptmCores const core, uint32_t const tbpsmr) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmtbpmr_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0xff << 0);
	registerValue |= (tbpsmr << 0);

	*((volatile uint32_t *)(gptmGptmtbpmr_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmtbpmrTbpsmr_(uint32_t * const registerValue, uint32_t const tbpsmr) {
	*registerValue &= ~(0xff << 0);
	*registerValue |= (tbpsmr << 0);
}


uint32_t gptmShiReadGptmtarTar_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtar_ + gptmCoreBaseAddresses_[core])) >> 0) & 0xffffffff);
}

uint32_t gptmShiReadUIGptmtarTar_(uint32_t const registerValue) {
	return ((registerValue >> 0) & 0xffffffff);
}


uint32_t gptmShiReadGptmtbrTbr_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtbr_ + gptmCoreBaseAddresses_[core])) >> 0) & 0xffffffff);
}

uint32_t gptmShiReadUIGptmtbrTbr_(uint32_t const registerValue) {
	return ((registerValue >> 0) & 0xffffffff);
}


uint32_t gptmShiReadGptmtavTav_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtav_ + gptmCoreBaseAddresses_[core])) >> 0) & 0xffffffff);
}

uint32_t gptmShiReadUIGptmtavTav_(uint32_t const registerValue) {
	return ((registerValue >> 0) & 0xffffffff);
}


void gptmShiWriteGptmtavTav_(enum HalGptmCores const core, uint32_t const tav) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmtav_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0xffffffff << 0);
	registerValue |= (tav << 0);

	*((volatile uint32_t *)(gptmGptmtav_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmtavTav_(uint32_t * const registerValue, uint32_t const tav) {
	*registerValue &= ~(0xffffffff << 0);
	*registerValue |= (tav << 0);
}


uint32_t gptmShiReadGptmtbvTbv_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtbv_ + gptmCoreBaseAddresses_[core])) >> 0) & 0xffffffff);
}

uint32_t gptmShiReadUIGptmtbvTbv_(uint32_t const registerValue) {
	return ((registerValue >> 0) & 0xffffffff);
}


void gptmShiWriteGptmtbvTbv_(enum HalGptmCores const core, uint32_t const tbv) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmtbv_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0xffffffff << 0);
	registerValue |= (tbv << 0);

	*((volatile uint32_t *)(gptmGptmtbv_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmtbvTbv_(uint32_t * const registerValue, uint32_t const tbv) {
	*registerValue &= ~(0xffffffff << 0);
	*registerValue |= (tbv << 0);
}


uint32_t gptmShiReadGptmrtcpdRtcpd_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmrtcpd_ + gptmCoreBaseAddresses_[core])) >> 0) & 0xffff);
}

uint32_t gptmShiReadUIGptmrtcpdRtcpd_(uint32_t const registerValue) {
	return ((registerValue >> 0) & 0xffff);
}


uint32_t gptmShiReadGptmtapsPss_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtaps_ + gptmCoreBaseAddresses_[core])) >> 0) & 0xffff);
}

uint32_t gptmShiReadUIGptmtapsPss_(uint32_t const registerValue) {
	return ((registerValue >> 0) & 0xffff);
}


uint32_t gptmShiReadGptmtbpsPss_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmtbps_ + gptmCoreBaseAddresses_[core])) >> 0) & 0xffff);
}

uint32_t gptmShiReadUIGptmtbpsPss_(uint32_t const registerValue) {
	return ((registerValue >> 0) & 0xffff);
}


uint32_t gptmShiReadGptmdmaevTatodmaen_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmdmaev_ + gptmCoreBaseAddresses_[core])) >> 0) & 0x1);
}

uint32_t gptmShiReadUIGptmdmaevTatodmaen_(uint32_t const registerValue) {
	return ((registerValue >> 0) & 0x1);
}


void gptmShiWriteGptmdmaevTatodmaen_(enum HalGptmCores const core, enum GptmGptmdmaevTatodmaenValues_ const tatodmaen) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmdmaev_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 0);
	registerValue |= (tatodmaen << 0);

	*((volatile uint32_t *)(gptmGptmdmaev_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmdmaevTatodmaen_(uint32_t * const registerValue, enum GptmGptmdmaevTatodmaenValues_ const tatodmaen) {
	*registerValue &= ~(0x1 << 0);
	*registerValue |= (tatodmaen << 0);
}


uint32_t gptmShiReadGptmdmaevCamdmaen_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmdmaev_ + gptmCoreBaseAddresses_[core])) >> 1) & 0x1);
}

uint32_t gptmShiReadUIGptmdmaevCamdmaen_(uint32_t const registerValue) {
	return ((registerValue >> 1) & 0x1);
}


void gptmShiWriteGptmdmaevCamdmaen_(enum HalGptmCores const core, enum GptmGptmdmaevCamdmaenValues_ const camdmaen) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmdmaev_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 1);
	registerValue |= (camdmaen << 1);

	*((volatile uint32_t *)(gptmGptmdmaev_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmdmaevCamdmaen_(uint32_t * const registerValue, enum GptmGptmdmaevCamdmaenValues_ const camdmaen) {
	*registerValue &= ~(0x1 << 1);
	*registerValue |= (camdmaen << 1);
}


uint32_t gptmShiReadGptmdmaevCaedmaen_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmdmaev_ + gptmCoreBaseAddresses_[core])) >> 2) & 0x1);
}

uint32_t gptmShiReadUIGptmdmaevCaedmaen_(uint32_t const registerValue) {
	return ((registerValue >> 2) & 0x1);
}


void gptmShiWriteGptmdmaevCaedmaen_(enum HalGptmCores const core, enum GptmGptmdmaevCaedmaenValues_ const caedmaen) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmdmaev_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 2);
	registerValue |= (caedmaen << 2);

	*((volatile uint32_t *)(gptmGptmdmaev_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmdmaevCaedmaen_(uint32_t * const registerValue, enum GptmGptmdmaevCaedmaenValues_ const caedmaen) {
	*registerValue &= ~(0x1 << 2);
	*registerValue |= (caedmaen << 2);
}


uint32_t gptmShiReadGptmdmaevRtcdmaen_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmdmaev_ + gptmCoreBaseAddresses_[core])) >> 3) & 0x1);
}

uint32_t gptmShiReadUIGptmdmaevRtcdmaen_(uint32_t const registerValue) {
	return ((registerValue >> 3) & 0x1);
}


void gptmShiWriteGptmdmaevRtcdmaen_(enum HalGptmCores const core, enum GptmGptmdmaevRtcdmaenValues_ const rtcdmaen) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmdmaev_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 3);
	registerValue |= (rtcdmaen << 3);

	*((volatile uint32_t *)(gptmGptmdmaev_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmdmaevRtcdmaen_(uint32_t * const registerValue, enum GptmGptmdmaevRtcdmaenValues_ const rtcdmaen) {
	*registerValue &= ~(0x1 << 3);
	*registerValue |= (rtcdmaen << 3);
}


uint32_t gptmShiReadGptmdmaevTamdmaen_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmdmaev_ + gptmCoreBaseAddresses_[core])) >> 4) & 0x1);
}

uint32_t gptmShiReadUIGptmdmaevTamdmaen_(uint32_t const registerValue) {
	return ((registerValue >> 4) & 0x1);
}


void gptmShiWriteGptmdmaevTamdmaen_(enum HalGptmCores const core, enum GptmGptmdmaevTamdmaenValues_ const tamdmaen) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmdmaev_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 4);
	registerValue |= (tamdmaen << 4);

	*((volatile uint32_t *)(gptmGptmdmaev_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmdmaevTamdmaen_(uint32_t * const registerValue, enum GptmGptmdmaevTamdmaenValues_ const tamdmaen) {
	*registerValue &= ~(0x1 << 4);
	*registerValue |= (tamdmaen << 4);
}


uint32_t gptmShiReadGptmdmaevTbtodmaen_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmdmaev_ + gptmCoreBaseAddresses_[core])) >> 8) & 0x1);
}

uint32_t gptmShiReadUIGptmdmaevTbtodmaen_(uint32_t const registerValue) {
	return ((registerValue >> 8) & 0x1);
}


void gptmShiWriteGptmdmaevTbtodmaen_(enum HalGptmCores const core, enum GptmGptmdmaevTbtodmaenValues_ const tbtodmaen) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmdmaev_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 8);
	registerValue |= (tbtodmaen << 8);

	*((volatile uint32_t *)(gptmGptmdmaev_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmdmaevTbtodmaen_(uint32_t * const registerValue, enum GptmGptmdmaevTbtodmaenValues_ const tbtodmaen) {
	*registerValue &= ~(0x1 << 8);
	*registerValue |= (tbtodmaen << 8);
}


uint32_t gptmShiReadGptmdmaevCbmdmaen_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmdmaev_ + gptmCoreBaseAddresses_[core])) >> 9) & 0x1);
}

uint32_t gptmShiReadUIGptmdmaevCbmdmaen_(uint32_t const registerValue) {
	return ((registerValue >> 9) & 0x1);
}


void gptmShiWriteGptmdmaevCbmdmaen_(enum HalGptmCores const core, enum GptmGptmdmaevCbmdmaenValues_ const cbmdmaen) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmdmaev_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 9);
	registerValue |= (cbmdmaen << 9);

	*((volatile uint32_t *)(gptmGptmdmaev_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmdmaevCbmdmaen_(uint32_t * const registerValue, enum GptmGptmdmaevCbmdmaenValues_ const cbmdmaen) {
	*registerValue &= ~(0x1 << 9);
	*registerValue |= (cbmdmaen << 9);
}


uint32_t gptmShiReadGptmdmaevCbedmaen_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmdmaev_ + gptmCoreBaseAddresses_[core])) >> 10) & 0x1);
}

uint32_t gptmShiReadUIGptmdmaevCbedmaen_(uint32_t const registerValue) {
	return ((registerValue >> 10) & 0x1);
}


void gptmShiWriteGptmdmaevCbedmaen_(enum HalGptmCores const core, enum GptmGptmdmaevCbedmaenValues_ const cbedmaen) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmdmaev_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 10);
	registerValue |= (cbedmaen << 10);

	*((volatile uint32_t *)(gptmGptmdmaev_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmdmaevCbedmaen_(uint32_t * const registerValue, enum GptmGptmdmaevCbedmaenValues_ const cbedmaen) {
	*registerValue &= ~(0x1 << 10);
	*registerValue |= (cbedmaen << 10);
}


uint32_t gptmShiReadGptmdmaevTbmdmaen_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmdmaev_ + gptmCoreBaseAddresses_[core])) >> 11) & 0x1);
}

uint32_t gptmShiReadUIGptmdmaevTbmdmaen_(uint32_t const registerValue) {
	return ((registerValue >> 11) & 0x1);
}


void gptmShiWriteGptmdmaevTbmdmaen_(enum HalGptmCores const core, enum GptmGptmdmaevTbmdmaenValues_ const tbmdmaen) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmdmaev_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 11);
	registerValue |= (tbmdmaen << 11);

	*((volatile uint32_t *)(gptmGptmdmaev_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmdmaevTbmdmaen_(uint32_t * const registerValue, enum GptmGptmdmaevTbmdmaenValues_ const tbmdmaen) {
	*registerValue &= ~(0x1 << 11);
	*registerValue |= (tbmdmaen << 11);
}


uint32_t gptmShiReadGptmadcevTatoadcen_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmadcev_ + gptmCoreBaseAddresses_[core])) >> 0) & 0x1);
}

uint32_t gptmShiReadUIGptmadcevTatoadcen_(uint32_t const registerValue) {
	return ((registerValue >> 0) & 0x1);
}


void gptmShiWriteGptmadcevTatoadcen_(enum HalGptmCores const core, enum GptmGptmadcevTatoadcenValues_ const tatoadcen) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmadcev_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 0);
	registerValue |= (tatoadcen << 0);

	*((volatile uint32_t *)(gptmGptmadcev_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmadcevTatoadcen_(uint32_t * const registerValue, enum GptmGptmadcevTatoadcenValues_ const tatoadcen) {
	*registerValue &= ~(0x1 << 0);
	*registerValue |= (tatoadcen << 0);
}


uint32_t gptmShiReadGptmadcevCamadcen_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmadcev_ + gptmCoreBaseAddresses_[core])) >> 1) & 0x1);
}

uint32_t gptmShiReadUIGptmadcevCamadcen_(uint32_t const registerValue) {
	return ((registerValue >> 1) & 0x1);
}


void gptmShiWriteGptmadcevCamadcen_(enum HalGptmCores const core, enum GptmGptmadcevCamadcenValues_ const camadcen) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmadcev_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 1);
	registerValue |= (camadcen << 1);

	*((volatile uint32_t *)(gptmGptmadcev_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmadcevCamadcen_(uint32_t * const registerValue, enum GptmGptmadcevCamadcenValues_ const camadcen) {
	*registerValue &= ~(0x1 << 1);
	*registerValue |= (camadcen << 1);
}


uint32_t gptmShiReadGptmadcevCaeadcen_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmadcev_ + gptmCoreBaseAddresses_[core])) >> 2) & 0x1);
}

uint32_t gptmShiReadUIGptmadcevCaeadcen_(uint32_t const registerValue) {
	return ((registerValue >> 2) & 0x1);
}


void gptmShiWriteGptmadcevCaeadcen_(enum HalGptmCores const core, enum GptmGptmadcevCaeadcenValues_ const caeadcen) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmadcev_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 2);
	registerValue |= (caeadcen << 2);

	*((volatile uint32_t *)(gptmGptmadcev_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmadcevCaeadcen_(uint32_t * const registerValue, enum GptmGptmadcevCaeadcenValues_ const caeadcen) {
	*registerValue &= ~(0x1 << 2);
	*registerValue |= (caeadcen << 2);
}


uint32_t gptmShiReadGptmadcevRtcadcen_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmadcev_ + gptmCoreBaseAddresses_[core])) >> 3) & 0x1);
}

uint32_t gptmShiReadUIGptmadcevRtcadcen_(uint32_t const registerValue) {
	return ((registerValue >> 3) & 0x1);
}


void gptmShiWriteGptmadcevRtcadcen_(enum HalGptmCores const core, enum GptmGptmadcevRtcadcenValues_ const rtcadcen) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmadcev_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 3);
	registerValue |= (rtcadcen << 3);

	*((volatile uint32_t *)(gptmGptmadcev_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmadcevRtcadcen_(uint32_t * const registerValue, enum GptmGptmadcevRtcadcenValues_ const rtcadcen) {
	*registerValue &= ~(0x1 << 3);
	*registerValue |= (rtcadcen << 3);
}


uint32_t gptmShiReadGptmadcevTamadcen_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmadcev_ + gptmCoreBaseAddresses_[core])) >> 4) & 0x1);
}

uint32_t gptmShiReadUIGptmadcevTamadcen_(uint32_t const registerValue) {
	return ((registerValue >> 4) & 0x1);
}


void gptmShiWriteGptmadcevTamadcen_(enum HalGptmCores const core, enum GptmGptmadcevTamadcenValues_ const tamadcen) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmadcev_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 4);
	registerValue |= (tamadcen << 4);

	*((volatile uint32_t *)(gptmGptmadcev_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmadcevTamadcen_(uint32_t * const registerValue, enum GptmGptmadcevTamadcenValues_ const tamadcen) {
	*registerValue &= ~(0x1 << 4);
	*registerValue |= (tamadcen << 4);
}


uint32_t gptmShiReadGptmadcevTbtoadcen_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmadcev_ + gptmCoreBaseAddresses_[core])) >> 8) & 0x1);
}

uint32_t gptmShiReadUIGptmadcevTbtoadcen_(uint32_t const registerValue) {
	return ((registerValue >> 8) & 0x1);
}


void gptmShiWriteGptmadcevTbtoadcen_(enum HalGptmCores const core, enum GptmGptmadcevTbtoadcenValues_ const tbtoadcen) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmadcev_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 8);
	registerValue |= (tbtoadcen << 8);

	*((volatile uint32_t *)(gptmGptmadcev_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmadcevTbtoadcen_(uint32_t * const registerValue, enum GptmGptmadcevTbtoadcenValues_ const tbtoadcen) {
	*registerValue &= ~(0x1 << 8);
	*registerValue |= (tbtoadcen << 8);
}


uint32_t gptmShiReadGptmadcevCbmadcen_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmadcev_ + gptmCoreBaseAddresses_[core])) >> 9) & 0x1);
}

uint32_t gptmShiReadUIGptmadcevCbmadcen_(uint32_t const registerValue) {
	return ((registerValue >> 9) & 0x1);
}


void gptmShiWriteGptmadcevCbmadcen_(enum HalGptmCores const core, enum GptmGptmadcevCbmadcenValues_ const cbmadcen) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmadcev_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 9);
	registerValue |= (cbmadcen << 9);

	*((volatile uint32_t *)(gptmGptmadcev_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmadcevCbmadcen_(uint32_t * const registerValue, enum GptmGptmadcevCbmadcenValues_ const cbmadcen) {
	*registerValue &= ~(0x1 << 9);
	*registerValue |= (cbmadcen << 9);
}


uint32_t gptmShiReadGptmadcevCbeadcen_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmadcev_ + gptmCoreBaseAddresses_[core])) >> 10) & 0x1);
}

uint32_t gptmShiReadUIGptmadcevCbeadcen_(uint32_t const registerValue) {
	return ((registerValue >> 10) & 0x1);
}


void gptmShiWriteGptmadcevCbeadcen_(enum HalGptmCores const core, enum GptmGptmadcevCbeadcenValues_ const cbeadcen) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmadcev_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 10);
	registerValue |= (cbeadcen << 10);

	*((volatile uint32_t *)(gptmGptmadcev_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmadcevCbeadcen_(uint32_t * const registerValue, enum GptmGptmadcevCbeadcenValues_ const cbeadcen) {
	*registerValue &= ~(0x1 << 10);
	*registerValue |= (cbeadcen << 10);
}


uint32_t gptmShiReadGptmadcevTbmadcen_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmadcev_ + gptmCoreBaseAddresses_[core])) >> 11) & 0x1);
}

uint32_t gptmShiReadUIGptmadcevTbmadcen_(uint32_t const registerValue) {
	return ((registerValue >> 11) & 0x1);
}


void gptmShiWriteGptmadcevTbmadcen_(enum HalGptmCores const core, enum GptmGptmadcevTbmadcenValues_ const tbmadcen) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmadcev_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 11);
	registerValue |= (tbmadcen << 11);

	*((volatile uint32_t *)(gptmGptmadcev_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmadcevTbmadcen_(uint32_t * const registerValue, enum GptmGptmadcevTbmadcenValues_ const tbmadcen) {
	*registerValue &= ~(0x1 << 11);
	*registerValue |= (tbmadcen << 11);
}


uint32_t gptmShiReadGptmppSize_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmpp_ + gptmCoreBaseAddresses_[core])) >> 0) & 0xf);
}

uint32_t gptmShiReadUIGptmppSize_(uint32_t const registerValue) {
	return ((registerValue >> 0) & 0xf);
}


void gptmShiWriteGptmppSize_(enum HalGptmCores const core, enum GptmGptmppSizeValues_ const size) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmpp_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0xf << 0);
	registerValue |= (size << 0);

	*((volatile uint32_t *)(gptmGptmpp_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmppSize_(uint32_t * const registerValue, enum GptmGptmppSizeValues_ const size) {
	*registerValue &= ~(0xf << 0);
	*registerValue |= (size << 0);
}


uint32_t gptmShiReadGptmppChain_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmpp_ + gptmCoreBaseAddresses_[core])) >> 4) & 0x1);
}

uint32_t gptmShiReadUIGptmppChain_(uint32_t const registerValue) {
	return ((registerValue >> 4) & 0x1);
}


void gptmShiWriteGptmppChain_(enum HalGptmCores const core, enum GptmGptmppChainValues_ const chain) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmpp_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 4);
	registerValue |= (chain << 4);

	*((volatile uint32_t *)(gptmGptmpp_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmppChain_(uint32_t * const registerValue, enum GptmGptmppChainValues_ const chain) {
	*registerValue &= ~(0x1 << 4);
	*registerValue |= (chain << 4);
}


uint32_t gptmShiReadGptmppSynccnt_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmpp_ + gptmCoreBaseAddresses_[core])) >> 5) & 0x1);
}

uint32_t gptmShiReadUIGptmppSynccnt_(uint32_t const registerValue) {
	return ((registerValue >> 5) & 0x1);
}


void gptmShiWriteGptmppSynccnt_(enum HalGptmCores const core, enum GptmGptmppSynccntValues_ const synccnt) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmpp_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 5);
	registerValue |= (synccnt << 5);

	*((volatile uint32_t *)(gptmGptmpp_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmppSynccnt_(uint32_t * const registerValue, enum GptmGptmppSynccntValues_ const synccnt) {
	*registerValue &= ~(0x1 << 5);
	*registerValue |= (synccnt << 5);
}


uint32_t gptmShiReadGptmppAltclk_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmpp_ + gptmCoreBaseAddresses_[core])) >> 6) & 0x1);
}

uint32_t gptmShiReadUIGptmppAltclk_(uint32_t const registerValue) {
	return ((registerValue >> 6) & 0x1);
}


void gptmShiWriteGptmppAltclk_(enum HalGptmCores const core, enum GptmGptmppAltclkValues_ const altclk) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmpp_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 6);
	registerValue |= (altclk << 6);

	*((volatile uint32_t *)(gptmGptmpp_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmppAltclk_(uint32_t * const registerValue, enum GptmGptmppAltclkValues_ const altclk) {
	*registerValue &= ~(0x1 << 6);
	*registerValue |= (altclk << 6);
}


uint32_t gptmShiReadGptmccAltclk_(enum HalGptmCores const core) {
	return ((*((volatile uint32_t *)(gptmGptmcc_ + gptmCoreBaseAddresses_[core])) >> 0) & 0x1);
}

uint32_t gptmShiReadUIGptmccAltclk_(uint32_t const registerValue) {
	return ((registerValue >> 0) & 0x1);
}


void gptmShiWriteGptmccAltclk_(enum HalGptmCores const core, enum GptmGptmccAltclkValues_ const altclk) {
	uint32_t registerValue = *((volatile uint32_t *)(gptmGptmcc_ + gptmCoreBaseAddresses_[core]));

	registerValue &= ~(0x1 << 0);
	registerValue |= (altclk << 0);

	*((volatile uint32_t *)(gptmGptmcc_ + gptmCoreBaseAddresses_[core])) = registerValue;
}

void gptmShiWriteUIGptmccAltclk_(uint32_t * const registerValue, enum GptmGptmccAltclkValues_ const altclk) {
	*registerValue &= ~(0x1 << 0);
	*registerValue |= (altclk << 0);
}


