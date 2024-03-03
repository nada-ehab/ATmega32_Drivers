/*
 * _7SEG_program.c
 *
 * Created: 9/23/2023 9:00:42 AM
 *  Author: HomePC
 */ 
#include "../../lib/STD_math.h"
#include "../../LIB/STD_Types.h"

#include "../../MCAL/DIO/DIO.interface.h"
#include "SEG_interface.h"

uint8_t arr[]={0b1111110, 0b0110000,0b1101101,0b1111001,0b0110011,0b1011011,0b1011111,0b1110000,0b1111111,0b1111011};


SEG_errorstate seg_init(uint8_t seg_port)
{
	 uint8_t seg_pinnum=0;
	for(seg_pinnum =DIO_PINVAL_LOW ; seg_pinnum<=DIO_PIN7;seg_pinnum++)
	{
		DIO_voidSetPinValue(seg_port,seg_pinnum,DIO_PINVAL_HIGH);
	}
	return SEG_OK;	
}

SEG_errorstate seg_set(uint8_t seg_port, uint8_t seg_pinnum, uint16_t num)
{
	seg_init(seg_port);
	
	if(num>=0 && num<=9)
	{
		switch(num)
		{
		   case 0:  DIO_voidSetPinValue(seg_port,DIO_PIN0,DIO_PINVAL_HIGH);
		            DIO_voidSetPinValue(seg_port,DIO_PIN1,DIO_PINVAL_HIGH);
		            DIO_voidSetPinValue(seg_port,DIO_PIN2,DIO_PINVAL_HIGH);
					DIO_voidSetPinValue(seg_port,DIO_PIN3,DIO_PINVAL_HIGH);
					DIO_voidSetPinValue(seg_port,DIO_PIN4,DIO_PINVAL_HIGH);
					DIO_voidSetPinValue(seg_port,DIO_PIN5,DIO_PINVAL_HIGH);
					break;
					
		   case 1:  DIO_voidSetPinValue(seg_port,DIO_PIN1,DIO_PINVAL_HIGH);
		            DIO_voidSetPinValue(seg_port,DIO_PIN2,DIO_PINVAL_HIGH);
					break;
				  
		   case 2: DIO_voidSetPinValue(seg_port,DIO_PIN0,DIO_PINVAL_HIGH);
	               DIO_voidSetPinValue(seg_port,DIO_PIN1,DIO_PINVAL_HIGH);
	          	   DIO_voidSetPinValue(seg_port,DIO_PIN2,DIO_PINVAL_HIGH);
		           DIO_voidSetPinValue(seg_port,DIO_PIN4,DIO_PINVAL_HIGH);
		           DIO_voidSetPinValue(seg_port,DIO_PIN6,DIO_PINVAL_HIGH);
		           break;
				   
				   
		  case 3: DIO_voidSetPinValue(seg_port,DIO_PIN0,DIO_PINVAL_HIGH);
		          DIO_voidSetPinValue(seg_port,DIO_PIN1,DIO_PINVAL_HIGH);
		          DIO_voidSetPinValue(seg_port,DIO_PIN2,DIO_PINVAL_HIGH);
		          DIO_voidSetPinValue(seg_port,DIO_PIN3,DIO_PINVAL_HIGH);
		          DIO_voidSetPinValue(seg_port,DIO_PIN6,DIO_PINVAL_HIGH);
				  break;   
					
		 case 4: DIO_voidSetPinValue(seg_port,DIO_PIN1,DIO_PINVAL_HIGH);
		         DIO_voidSetPinValue(seg_port,DIO_PIN2,DIO_PINVAL_HIGH);
		         DIO_voidSetPinValue(seg_port,DIO_PIN5,DIO_PINVAL_HIGH);
		         DIO_voidSetPinValue(seg_port,DIO_PIN6,DIO_PINVAL_HIGH);
				   break;		
				   
				   
	   	case 5:	 DIO_voidSetPinValue(seg_port,DIO_PIN0,DIO_PINVAL_HIGH);
		         DIO_voidSetPinValue(seg_port,DIO_PIN2,DIO_PINVAL_HIGH);
		         DIO_voidSetPinValue(seg_port,DIO_PIN3,DIO_PINVAL_HIGH);
		         DIO_voidSetPinValue(seg_port,DIO_PIN5,DIO_PINVAL_HIGH);
                 DIO_voidSetPinValue(seg_port,DIO_PIN6,DIO_PINVAL_HIGH); break;	
						   
		case 6: DIO_voidSetPinValue(seg_port,DIO_PIN0,DIO_PINVAL_HIGH);
		        DIO_voidSetPinValue(seg_port,DIO_PIN2,DIO_PINVAL_HIGH);
		        DIO_voidSetPinValue(seg_port,DIO_PIN3,DIO_PINVAL_HIGH);
		        DIO_voidSetPinValue(seg_port,DIO_PIN4,DIO_PINVAL_HIGH);
		        DIO_voidSetPinValue(seg_port,DIO_PIN5,DIO_PINVAL_HIGH);
		        DIO_voidSetPinValue(seg_port,DIO_PIN6,DIO_PINVAL_HIGH);
				break;		   		   
				   
	   	case 7: DIO_voidSetPinValue(seg_port,DIO_PIN0,DIO_PINVAL_HIGH);
	         	DIO_voidSetPinValue(seg_port,DIO_PIN1,DIO_PINVAL_HIGH);
	        	DIO_voidSetPinValue(seg_port,DIO_PIN2,DIO_PINVAL_HIGH);
				break;	
					 
		case 8: DIO_voidSetPinValue(seg_port,DIO_PIN0,DIO_PINVAL_HIGH);
		        DIO_voidSetPinValue(seg_port,DIO_PIN1,DIO_PINVAL_HIGH);
		        DIO_voidSetPinValue(seg_port,DIO_PIN2,DIO_PINVAL_HIGH);
		        DIO_voidSetPinValue(seg_port,DIO_PIN3,DIO_PINVAL_HIGH);
		        DIO_voidSetPinValue(seg_port,DIO_PIN4,DIO_PINVAL_HIGH);
		        DIO_voidSetPinValue(seg_port,DIO_PIN5,DIO_PINVAL_HIGH);
				DIO_voidSetPinValue(seg_port,DIO_PIN6,DIO_PINVAL_HIGH);
			    break;
			
		case 9: DIO_voidSetPinValue(seg_port,DIO_PIN0,DIO_PINVAL_HIGH);
	         	DIO_voidSetPinValue(seg_port,DIO_PIN1,DIO_PINVAL_HIGH);
	        	DIO_voidSetPinValue(seg_port,DIO_PIN2,DIO_PINVAL_HIGH);
	        	DIO_voidSetPinValue(seg_port,DIO_PIN3,DIO_PINVAL_HIGH);
		        DIO_voidSetPinValue(seg_port,DIO_PIN5,DIO_PINVAL_HIGH);
		        DIO_voidSetPinValue(seg_port,DIO_PIN6,DIO_PINVAL_HIGH);
				break;
					
		}
		
	return SEG_OK;}
	else
	{
		return SEG_NOTOK;
	}
}