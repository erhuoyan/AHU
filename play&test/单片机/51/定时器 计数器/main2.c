#include<reg52.h>

#define uint unsigned int 
#define uchar unsigned char

sbit wela=P2^7;
sbit dula=P2^6;
sbit led1=P1^0;

uchar code table[]={
0x3f,0x06,0x5b,0x4f,
0x66,0x6d,0x7d,0x07,
0x7f,0x6f,0x77,0x7c,
0x39,0x5e,0x79,0x71};

uchar num,num1,num2,shi,ge;


void delay(uint);
void display(uchar,uchar);
void timerinit();
void main()
{
	timerinit();
	led1=0;
	while(1)
	{
	 	display(shi,ge);
	}
}

void display(uchar shi,uchar ge)
{
	
	dula=1;
	P0=table[shi];
	dula=0;
	P0=0xff;
	wela=1;
	P0=0xfe;
	wela=0;
	delay(5);
	
	dula=1;
	P0=table[ge];
	dula=0;
	P0=0xff;
	wela=1;
	P0=0xfd;
	wela=0;
	delay(5); 	
}


void delay(uint xms)
{
 	uint i,j;
	for(i=xms ;i>0;i--)
		for(j=110;j>0;j--);
}

void timerinit()
{
	TMOD|=0X11;

	TH0=0X4C;
	TL0=0X00;
	TH1=0X4C;
	TL1=0X00;

	EA=1;
	ET0=1;
	ET1=1;
	TR0=1;
	TR1=1;
}

void timer0() interrupt 1
{
	TH0=0X4C;
	TL0=0X00;
	num1++;
	if(num1==10)
	{
		num1=0;
		led1=~led1;
	}	
}

void timer1() interrupt 3
{
	TH1=0X4C;
	TL1=0X00;
	num2++;
	if(num2==20)
	{	 
		num2=0;
		num++;
		if(num==60)
		{
			num=0;
		}
		shi=num/10;
		ge=num%10;	 	
	}	
}



 