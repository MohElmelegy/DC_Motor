
#include "avr/delay.h"
#include <avr/io.h>
#define F_CPU 8000000
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_Interface.h"

int main(void)
{
	DIO_VidSetPinDirection( PORTA ,  PIN2 ,  OUTPUT);
    while(1)
    {
        DIO_VidSetPinValue(PORTA ,PIN2 , HIGH);
		_delay_ms(5000);
		DIO_VidSetPinValue(PORTA ,PIN2,  LOW);
		_delay_ms(5000);
		
		
    }
}