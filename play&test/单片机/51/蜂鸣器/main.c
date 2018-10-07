#include<reg52.h>
#define uint unsigned int
sbit beep=P1^5;
void delay(uint);
void main()
{
	while(1)
	{
	 	beep=~beep;
	 	delay(10);
	 }
}


void delay(uint i)
{
	while (i--);	
}	 