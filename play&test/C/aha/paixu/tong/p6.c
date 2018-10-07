#include<stdio.h>
int main()
{
  int book[1001]={0},i,j,t,n;
  scanf("%d",&n);//表示接下来有n个数
  for (i=1;i<=n;i++)
  {
    scanf("%d",&t);
    book[t]++;
  }
  for(i=1000;i>=0;i--)
   for(j=1;j<=book[i];j++)
   {
     printf("%d ",i);
   }
   printf("\n");
   return 0;
}
