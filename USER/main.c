#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "led.h"

 int main(void)
 {	
	u8 i = 0; 
	
	SysTick_Init(72);
	delay_init();	    
	LED_Init();
	uart_init(9600);
	 
	while(1)
	{
		  LED_Clear();
			delay_ms(500);
			Set_Led_Number(i);
			delay_ms(500);
		  
			i++;
	}
 }

