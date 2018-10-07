#include<stdio.h>
int main()
{
	int a[1001]={0},n,i,j,t;
	j=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&t);
		a[t]=1; 					//标记出现过的书号
	}
	for(i=1;i<=1000;i++)
	{
		if(a[i]==1) 				//如果这个书号出现过则打印出来
		{
			printf("%d ",i);
			j++;
			
		}
				
	}
	printf("\n");
	printf("%d\n",j);
	return 0;

}
