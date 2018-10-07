#include<stdio.h>
int a[101],n;                             //定义全局变量

void quicksort(int left, int right)
{
    int i,j,t,temp;
    if(left>right)
        return;


    temp=a[left];                         //temp中存入基准数
    i=left;
    j=right;
    while(i!=j)
    {
		//先从右向左找
        while(a[j]>=temp && i<j)
        j--;
		//再从左向右找
        while(a[i]<=temp && i<j)
        i++;

		//交换两个数在数组中的位置
        if(i<j)                      	//当左右两数没有相遇时
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
	//最终将基准数归位
    a[left]=a[i];
    a[i]=temp;
    quicksort(left,i-1); 				//继续处理左边的
    quicksort(i+1,right); 				//继续处理右边的
}
int main()
{
    int i,j;
	//读入数据
    scanf("%d",&n);
    for (i=1;i<=n;i++)
        scanf("%d",&a[i]);


    quicksort(1,n);                    //调用子函数

	//输出排序结果
    for (i=1;i<=n;i++)
        printf("%d ",a[i]);
	printf("\n");
    return 0;
}
