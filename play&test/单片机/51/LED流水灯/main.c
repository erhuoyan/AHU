#include<reg52.h>
#include<intrins.h>
#define uint unsigned int
#define uchar unsigned char
uint j;
uchar aa;
void delay()
{
	uint i;
	for(i=50000;i>0;i--);
}
void main()
{
	aa=0xfe;
	while(1)
	{	for(j=7;j>0;j--)
		{
			P2=aa;
			delay();
			aa=_crol_(aa,1);
		 }
		 for(j=7;j>0;j--)
		 {
		 	P2=aa;
			delay();
			aa=_cror_(aa,1);
		 }
	}
}
