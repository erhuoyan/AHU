#include<reg52.h>
#include<intrins.h>

#define uchar unsigned char
#define uint unsigned int

void delay(uint xms);

void main()
{
	uint i;
	uchar aa;
	aa=0xfe;
	while(1)
	{
		P1=aa;
		for(i=8;i>1;i--)
		{
			delay(500);
			aa=_crol_(aa,1);
			P1=aa;
		}
		for(i=8;i>1;i--)
		{
			aa=_cror_(aa,1);
			delay(500);
			P1=aa;
		}

	}

	
}

void delay(uint xms)
{
	uint i,j;
	for(i=xms;i>0;i--)
		for(j=110;j>0;j--);
}		   