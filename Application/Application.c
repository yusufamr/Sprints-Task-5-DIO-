/*
* Application.c
*
* Created: 9/4/2021 9:54:23 AM
*  Author: user
*/
#include "Application.h"
void Application()
{
	
	Led_init(0,0);/*initialize Led on Port A and pin 0*/
	Button_init(0,3);/*initialize button on Port A and pin 3*/
	Led_clear(0,0);/*switch off led */
	while (1)
	{
		/*if Button is pressed then switch on led*/
		if(Button_read(0,3))
		{
			Led_set(0,0);
		}
		else/*if button isn't pressed switch off led*/
		Led_clear(0,0);
	}
}
