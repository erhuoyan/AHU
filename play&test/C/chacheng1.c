/*
 * =====================================================================================
 *
 *       Filename:  chacheng.c
 *
 *    Description:  �������
 *
 *        Version:  1.0
 *        Created:  2018��03��05�� 14ʱ26��06��
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
	printf("����������a:");
	scanf("%lf,%lf,%lf",&a,&b,&c);
	printf("����������b:");
	scanf("%lf,%lf,%lf",&d,&e,&f);
	x=b*f-c*e;
	y=c*d-a*f;
	z=a*e-b*d;
	printf("aXb=(%lf,%lf,%lf)\n",x,y,z);
    system("pause");

	return 0;
}


