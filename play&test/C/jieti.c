#include<stdio.h>
int main()
{
	int a,b,c,i;
	printf("\nEnter the number of integers you want tu sum:\n");
	scanf("%d",&c);
	for(i=1;i<=c;++i)
	{
		a=1;
		b=1;
		printf("\n1");
		while(b<i)
		{
			a +=++b;
			printf(" + %d",b);
		}
		printf(" = %d",a);
	}
	printf("\n");
	return 0;
}