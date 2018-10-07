/*
 * =====================================================================================
 *
 *       Filename:  chacheng.c
 *
 *    Description:  向量叉乘
 *
 *        Version:  1.0
 *        Created:  2018年03月05日 14时26分06秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Gyan (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdio.h>
int main()
{
	double a,b,c,d,e,f,x,y,z;
	printf("请输入向量a:");
	scanf("%lf,%lf,%lf",&a,&b,&c);
	printf("请输入向量b:");
	scanf("%lf,%lf,%lf",&d,&e,&f);
	x=b*f-c*e;
	y=c*d-a*f;
	z=a*e-b*d;
	printf("aXb=(%lf,%lf,%lf)\n",x,y,z);
    system("pause");

	return 0;
}


