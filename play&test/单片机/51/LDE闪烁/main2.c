#include<reg52.h>
#define uint unsigned int
sbit led1=P2^0;
void delay()
{
	uint i;
	for(i=50000;i>0;i--);
}
void main()
{
	while(1)
	{
		led1=0;
		delay();
		led1=1;
		delay();	
	}
}	