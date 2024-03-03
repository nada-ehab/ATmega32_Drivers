/*
 * _7SEG_interface.h
 *
 * Created: 9/23/2023 9:01:20 AM
 *  Author: HomePC
 */ 
#ifndef SEG_INTERFACE_H_
#define SEG_INTERFACE_H_




/* ERROR STATE*/

typedef enum
{
	SEG_OK,
	SEG_NOTOK
}SEG_errorstate;

typedef enum 
{
	A,B,C,D,E,F,G
}PINName;




/******************FUNCTION DECLARATION*******************/
SEG_errorstate seg_init(uint8_t seg_port);
SEG_errorstate seg_set(uint8_t seg_port, uint8_t seg_pinnum, uint16_t num);




#endif