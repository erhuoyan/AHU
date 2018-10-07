#include<reg52.h>
#define uint unsigned int
//sbit led1 = P2^0;
uint i;
void main()
{
	while(1)
	{
		//led1=0;
		P2=0x55;
		for(i=50000;i>0;i--);
		//led1=1;
		P2=0xaa;
		for(i=50000;i>0;i--);
	}
}