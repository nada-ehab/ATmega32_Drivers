//*
 * LED_program.c
 *
 * 
 *  Author: Nada
 */ 

#include "../../LIB/STD_Types.h"
#include "../../LIB/registers.h"
#include "../../MCAL/DIO/DIO.interface.h"
#include "LED_interface.h"


LED_errorstate LED_init     (uint8_t led_pinnum, uint8_t led_port)
{
	if(DIO_voidSetPinDirection(led_port,led_pinnum,DIO_PORT_OUTPUT)
	{
		return LED_OK;
	}
	else
	{
		return LED_NOTOK;
	}
	
}

LED_errorstate LED_on       (uint8_t led_pinnum, uint8_t led_port)
{
	LED_init(led_pinnum,led_port);
	if(DIO_voidSetPinValue(led_port,led_pinnum,DIO_PINVAL_HIGH))  return LED_OK;
	return LED_NOTOK;
}

LED_errorstate LED_on       (uint8_t led_pinnum, uint8_t led_port)
{
	LED_init(led_pinnum,led_port);
	if(DIO_voidSetPinValue(led_port,led_pinnum,DIO_PINVAL_LOW))  return LED_OK;
	return LED_NOTOK;
}

LED_errorstate LED_toggle   (uint8_t led_pinnum, uint8_t led_port)
{
	LED_init(led_pinnum,led_port);
	if(DIO_voidTogglePin(led_port,led_pinnum,DIO_PINVAL_HIGH))  return LED_OK;
	return LED_NOTOK;
}