/*
 * LED_interface.h
 *
 *  Author: Nada
 */ 

#ifndef LED_INTERFACE_H_
#define  LED_INTERFACE_H_

/* ERROR STATE*/
typedef enum
{
	LED_OK,
	LED_NOTOK
}LED_errorstate;






/******************FUNCTION DECLARATION*******************/

LED_errorstate LED_init     (uint8_t led_pinnum, uint8_t led_port);
LED_errorstate LED_on       (uint8_t led_pinnum, uint8_t led_port);
LED_errorstate LED_off      (uint8_t led_pinnum, uint8_t led_port);
LED_errorstate LED_toggle   (uint8_t led_pinnum, uint8_t led_port);















#endif 