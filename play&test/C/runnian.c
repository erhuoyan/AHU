#include<stdio.h>
void main()
{
	int year,leap;
	printf("Which year ?\n");
	scanf("%d",&year);
	if (year %400==0)leap= 1;
	else 
		if(year%4==0)
			if(year%100==0)
				leap = 0;
			else leap =1;
		else leap =0;
	if(leap ==1)
		printf("%d年是闰年\n",year);
	else
		printf("%d年不是闰年\n",year);
}
