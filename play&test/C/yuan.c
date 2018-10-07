#include<stdio.h>
#include <math.h>
void main()
{
	float x,y,r;
	int key;
	printf("input x,y:\n");
	scanf("%f,%f",&x,&y);
	r=sqrt(x*x+y*y);
	if (r>1)   key = 2;
	else if (r==1)
		key=1;
	    else 
			key = 0;
	printf ("(%.1f %.1f):%d\n",x,y,key);	
}