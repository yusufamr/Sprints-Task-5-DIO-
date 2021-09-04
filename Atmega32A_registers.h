/*
* Atmega32A_registers.h
*
* Created: 9/3/2021 11:55:45 AM
*  Author: user
*/


#ifndef ATMEGA32A_REGISTERS_H_
#define ATMEGA32A_REGISTERS_H_
#include "TypeDefs.h"
/************************************************************************/
/*							PORTA                                       */
/************************************************************************/
#define PortA_Data (*(volatile uint8 *)(0x3B)) /* Data of Port */
#define PortA_DDR (*(volatile uint8 *)(0x3A)) /* responsible for direction of port */
#define PortA_Pin (*(volatile uint8 *)(0x39)) /* Read data of Port */
/************************************************************************/
/*							PORTB                                       */
/************************************************************************/
#define PortB_Data (*(volatile uint8 *)(0x38)) /* Data of Port */
#define PortB_DDR (*(volatile uint8 *)(0x37))/* responsible for direction of port */
#define PortB_Pin (*(volatile uint8 *)(0x36))/* Read data of Port */
/************************************************************************/
/*							PORTC                                       */
/************************************************************************/
#define PortC_Data (*(volatile uint8 *)(0x35))/* Data of Port */
#define PortC_DDR (*(volatile uint8 *)(0x34))/* responsible for direction of port */
#define PortC_Pin (*(volatile uint8 *)(0x33))/* Read data of Port */
/************************************************************************/
/*							PORTD                                       */
/************************************************************************/
#define PortD_Data (*(volatile uint8 *)(0x32))/* Data of Port */
#define PortD_DDR (*(volatile uint8 *)(0x31))/* responsible for direction of port */
#define PortD_Pin (*(volatile uint8 *)(0x30))/* Read data of Port */



#endif /* ATMEGA32A_REGISTERS_H_ */