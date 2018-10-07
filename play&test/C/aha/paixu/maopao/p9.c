#include<stdio.h>
int main()
{
	int a[100],i,j,t,n;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
			scanf("%d",&a[i]);
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}	
		for(i=1;i<=n;i++)
		{
			printf("%d ",a[i]);
		}
	
	printf("\n");
	return 0;
}
