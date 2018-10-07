#include<reg52.h>

#define uint unsigned int 
#define uchar unsigned char

sbit led1=P1^0;
uint i=0;

void timer0init()
{
	TMOD|=0X01;
	TH0=0X4C;
	TL0=0x00;
	EA=1;
	ET0=1;
	TR0=1;
}

void main()
{
	timer0init();
	while(1)
	{
		if(i==20)
		{
			i=0;
			led1=~led1;
		}
	}	
}

void timer0() interrupt 1
{

	TH0=0X4C;
	TL0=0x00;
	i++;
}