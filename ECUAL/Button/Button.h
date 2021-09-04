/*
* Button.h
*
* Created: 9/3/2021 1:51:03 PM
*  Author: user
*/


#ifndef BUTTON_H_
#define BUTTON_H_
#include "../../MCAL/DIO/DIO.h"
/*
* [Function name]:Button_init
* [Function description]:Used to initialize Button on which Port and On which Bit
* [Function Parameters]: Port -> to determine port , bit -> to determine pin on the port
*/
void Button_init(uint8 port,uint8 bit);
/*
* [Function name]:Button_read
* [Function description]: Used to check if button is pressed or not
* [Function Parameters]: Port -> to determine port , bit -> to determine pin on the port
*/
uint8 Button_read(uint8 port,uint8 bit);




#endif /* BUTTON_H_ */