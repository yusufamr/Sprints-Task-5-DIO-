/*
* Button.c
*
* Created: 9/3/2021 1:50:54 PM
*  Author: user
*/
#include "Button.h"

void Button_init(uint8 port,uint8 bit)
{
	
	DIO_init_Pin(port,bit,0);/* initialize pin on port as input  */
	DIO_write_Pin(port,bit,1);/*Activate the internal pull up resistor*/
}
uint8 Button_read(uint8 port,uint8 bit)
{
	uint8 * data=0;/* variable to store Button status*/
	DIO_read(port,data);/* read Button status*/
	if (BIT_IS_CLEAR(*data,bit))/* if button is pressed then return 1 */
	{
		return 1;
	}
	else /* if button isn't pressed then return 0 */
	return 0;
	
}