

#ifndef F_CPU

# define F_CPU 16000000UL 

#endif



#include<avr/io.h>        

#include<util/delay.h>    

#include "lcd.h"



#define LCD_DATA PORTB          

#define ctrl PORTD              
#define en PD7                 
#define rw PD6                  
#define rs PD5    


int main()

{

	DDRB=0xFF;            
	DDRD=0xE0;           
	init_LCD();        
	_delay_ms(10);       

	LCD_cmd(0x0C);          
	_delay_ms(10);
	
	LCD_Write_String("  Temperature  ");
	_delay_ms(100);

	LCD_cmd(0xC0);          // move cursor to the start of 2nd line

	_delay_ms(100);
		
	LCD_Write_String("   Allow or Not Allow   ");
		_delay_ms(100);

	LCD_cmd(0x01);          

	_delay_ms(1);

	
	return 0;

}

