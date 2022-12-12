/*
 * main.c
 *
 *  Created on: Sep 19, 2021
 *      Author: Dell
 */
#include"avr/io.h"
#include"util/delay.h"
#define GIT_BIT(REG,BIT)  ((REG>>BIT) &1)
int main(void)
{
	/*define portD as input for 8-DIP switch*/
	DDRD=0x00;
	/*define portB as output for 8-Led*/
	DDRB=0xff;
	/*make pull up mode is on  for dip switch */
	PORTD=0xff;
	while(1)
	{
		PORTB=0;
		if(GIT_BIT(PIND,0)  ==0)
		{
			PORTB=0xff;
			_delay_ms(500);
			PORTB=0x00;
			_delay_ms(500);

		}
		else if(GIT_BIT(PIND,1)  ==0)
		{
			PORTB=0x01;
			for(char i=0;i<=7;i++)
			{
				_delay_ms(250);
				PORTB = PORTB<< 1;

			}
			_delay_ms(250);
		}
		else if (GIT_BIT(PIND,2)  ==0)
		{
			PORTB=0x80;
			for(char i=0;i<=7;i++)
			{
				_delay_ms(250);
				PORTB = PORTB>> 1;

			}
			_delay_ms(250);
		}
		else if(GIT_BIT(PIND,3)  ==0)
		{
			for(char i=0;i<=3;i++)
			{
				PORTB=(1<<i | 128>>i);
				_delay_ms(300);
			}
		}
		else if (GIT_BIT(PIND,4)  ==0)
		{
			for(char i=0;i<=3;i++)
			{
				PORTB=(16<<i | 8>>i);
				_delay_ms(300);
			}

		}
		else if (GIT_BIT(PIND,5)  ==0)
		{
			PORTB=1;
			for(char i=0;i<=7;i++)
			{
				PORTB=PORTB | (1<<i);
				_delay_ms(250);
			}
		}
		else if (GIT_BIT(PIND,6)  ==0)
		{
			for(char i=0;i<=7;i++)
			{
				PORTB=1<<i;
				_delay_ms(300);
			}
		}
		else if (GIT_BIT(PIND,7)  ==0)
		{
			for(char i=0;i<=3;i++)
			{
				PORTB=(1<<i | 128>>i);
				_delay_ms(300);
			}
			for(char i=0;i<=3;i++)
			{
				PORTB=(16<<i | 8>>i);
				_delay_ms(300);
			}
		}

	}
}

