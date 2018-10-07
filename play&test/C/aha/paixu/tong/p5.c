#include<stdio.h>
int main()
{
    int a[11]={0},i,j,k;
    for (i=1;i<=5;i++)
    {
      scanf("%d\n",&k );    //把每一个数读到变量k中
      a[k]++;               //进行计数
    }
    for (i=10;i>=0;i--)
    {
      for (j=1;j<=a[i];j++)
      {
        printf("%d\t",i);
      }
    }
    //getchar();getchar();
	printf("\n");
    return 0;
}
