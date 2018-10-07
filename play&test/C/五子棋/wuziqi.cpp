/******************************************
*******程序名称：单机游戏：五子棋（人人对战）
*******作者    ：西安邮电大学 杨晓麟
*******开发环境：Visual Studio 2017
*******创建日期：2018.06.02
*******完成日期：2018.06.10
*******************************************/
//#include "stdafx.h"
#include "stdio.h"
#include "graphics.h"
#include "conio.h"
#include "windows.h"
 
void init_system();//初始化系统
void close_system();//关闭系统
void init_globales();//初始化参数
 
void play_chess();//开始五子棋游戏
void gamestart();//开始下棋
int  count_xyk_by_message(MOUSEMSG *m, int *x, int *y, int *a, int *b);//计算鼠标所在区域状态
int  judge(int a, int b, int c, int chess[][15]);//判断胜负条件
void regret(int x2, int y2, int chess[15][15], int chessbox[][2]);//悔棋
 
void draw_chessmen(int x, int y, int num, int a, int b, int chess[][15]);//绘制黑白棋子
void draw_chessboard();//画棋盘、菜单、状态框，画标题
void text();//绘制标题
void draw_menu();//绘制菜单
void over_black();//绘制黑棋胜字样
void over_white();//绘制白棋胜字样
void position();//绘制状态栏及内容
void text_black();//绘制黑棋下字样
void text_white();//绘制白棋下字样
void draw_regret(int m, int n, int x2, int y2);//所有悔棋情况
void draw_re(int x2, int y2);//绘制悔棋棋子
 
int m_x0, m_y0, m_wh = 40, m_x01, m_y01;//对战区坐标
int m_x_box, m_y_box, m_x_box1, m_y_box1;//棋盘起始坐标
int m_x_chess, m_y_chess, m_x_chess1, m_y_chess1;//可下棋坐标
int m_row = 14, m_row1 = 15;
int num = 0;//步数
int chessbox[255][2];
 
 
#define GAME_RUNNING     1
#define GAME_OVER        0  
#define MOUSE_POS_ELSE   99
#define MOUSE_POS_AREA   1
#define NUM_BLACK        10
#define NUM_WHITE        20
#define MOUSE_POS_START  100
#define MOUSE_POS_REGRET 200
 
 
int  main()
{
	init_system();
 
	draw_chessboard();
 
	play_chess();
 
	close_system();
 
	return 0;
}
/*================================================
== 函数名：init_system()
== 功  能：初始化系统
== 参  数：无
== 返回值：无
=================================================*/
void init_system()
{
	initgraph(1024, 768);
	init_globales();
}
/*================================================
== 函数名：close_system()
== 功  能：关闭系统
== 参  数：无
== 返回值：无
=================================================*/
void close_system()
{
	_getch();
	closegraph();
}
/*================================================
== 函数名：init_globales()
== 功  能：初始化参数
== 参  数：无
== 返回值：无
=================================================*/
void init_globales()
{
	m_x0 = 1024 / 2 - (m_row / 2) * m_wh;/*小棋盘*/
	m_x01 = m_x0 + m_row * m_wh;
	m_y0 = 768 / 2 - (m_row / 2) * m_wh;
	m_y01 = m_y0 + m_row * m_wh;
 
	m_x_box = m_x0 - m_wh;/*大棋盘*/
	m_x_box1 = m_x01 + m_wh;
	m_y_box = m_y0 - m_wh * 2;
	m_y_box1 = m_y01 + m_wh;
 
	m_x_chess = m_x0 - m_wh / 2;/*可下棋区域*/
	m_y_chess = m_y0 - m_wh / 2;
	m_x_chess1 = m_x01 + m_wh / 2;
	m_y_chess1 = m_y01 + m_wh / 2;
}
/*================================================
== 函数名：draw_chessboard()
== 功  能：画棋盘、菜单、状态框，画标题
== 参  数：无
== 返回值：无
=================================================*/
void draw_chessboard()
{
	int i;
//	loadimage(NULL, "E:\\个人\\PICTURE\\123.jpg");
	setbkcolor(BLACK);
	cleardevice();/*用背景色清空屏幕*/
	setlinestyle(PS_SOLID, 1);
	setlinecolor(WHITE);
	rectangle(m_x_box, m_y_box, m_x_box1, m_y_box1);
	setfillcolor(RGB(172, 81, 24));
	setfillstyle(BS_SOLID);
	floodfill((m_x0 + m_x01) / 2, (m_y0 + m_y01) / 2, WHITE);
 
	setlinestyle(PS_SOLID, 2);
	setlinecolor(BLACK);
	rectangle(m_x0 - 4, m_y0 - 4, m_x01 + 4, m_y01 + 4);
 
	setlinestyle(PS_SOLID, 1);
	setlinecolor(BLACK);
	rectangle(m_x0, m_y0, m_x01, m_y01);
 
	for (i = m_x0 + m_wh; i < m_x01; i += m_wh)//绘制交叉线
	{
		line(i, m_y0, i, m_y01);
	}
	for (i = m_y0 + m_wh; i < m_y01; i += m_wh)
	{
		line(m_x0, i, m_x01, i);
	}
 
	setlinecolor(BLACK);
	setfillcolor(BLACK);/*绘制画笔颜色以及填充颜色*/
 
	fillcircle(m_x0 + m_wh * 3, m_y0 + m_wh * 3, 3);//绘制星位
	fillcircle(m_x0 + m_wh * 11, m_y0 + m_wh * 3, 3);
	fillcircle(m_x0 + m_wh * 3, m_y0 + m_wh * 11, 3);
	fillcircle(m_x0 + m_wh * 11, m_y0 + m_wh * 11, 3);
	fillcircle(m_x0 + m_wh * 7, m_y0 + m_wh * 7, 3);
 
	draw_menu();/*绘制菜单*/
	position();/*绘制状态框*/
	text();/*绘制标题*/
}
/*================================================
== 函数名：play_chess()
== 功  能：开始五子棋游戏
== 参  数：无
== 返回值：无
=================================================*/
void play_chess()
{
	int x, y;//鼠标坐标
	int pos;//鼠标状态
	int a, b;
	MOUSEMSG m;
	while (1)
	{
		m = GetMouseMsg();
		pos = count_xyk_by_message(&m, &x, &y, &a, &b);
 
		switch (m.uMsg)
		{
		case WM_LBUTTONDOWN:/*判别鼠标左键点击区域*/
		{
			if (pos == MOUSE_POS_ELSE)  continue;//其他区域
			if (pos == MOUSE_POS_START) gamestart();//开始方框
			if (pos == GAME_OVER) exit(1);//结束方框
		}
		}
	}
}
/*================================================
== 函数名：gamestart()
== 功  能：开始下棋
== 参  数：无
== 返回值：无
=================================================*/
void gamestart()
{
	draw_chessboard();
 
	int chess[15][15] = { 0 };
	num = 0;
 
	int x1, y1;
	x1 = m_x0 + m_wh * (m_row + 2);
	y1 = m_y0 + m_wh * 5;
	TCHAR str[] = _T("请下棋");
	settextstyle(m_wh, m_wh / 2 - 1, _T("楷体"));
	setbkmode(OPAQUE);
	settextcolor(WHITE);
	outtextxy(x1 + 1, y1, str);
 
	int x, y;//鼠标坐标
	int pos;//鼠标状态
	int x2, y2;
	int a, b;
	int mstate = GAME_RUNNING;
	MOUSEMSG m;
	IMAGE img;
 
	while (1)
	{
		m = GetMouseMsg();
		pos = count_xyk_by_message(&m, &x, &y, &a, &b);
 
		switch (m.uMsg)
		{
		case WM_LBUTTONDOWN:
		{
			if (pos == MOUSE_POS_AREA)
			{
				if (chess[a][b] == NUM_BLACK || chess[a][b] == NUM_WHITE) continue;
				else
				{
					draw_chessmen(x, y, num, a, b, chess);
					chessbox[num][0] = a;
					chessbox[num][1] = b;
					if (num % 2 == 0)
					{
						text_white();
					}
					if (num % 2 != 0)
					{
						text_black();
					}
					num++;
					x2 = x;
					y2 = y;
					if (judge(a, b, NUM_BLACK, chess))
					{
						over_black();
						return;
					}
					if (judge(a, b, NUM_WHITE, chess))
					{
						over_white();
						return;
					}
				}
			}
			if (pos == MOUSE_POS_REGRET)
			{
					regret(x2, y2, chess, chessbox);
			}
 
		}break;
		}
	}
}
/*============================================================================
== 函数名：count_xyk_by_message(MOUSEMSG *m, int *x, int *y, int *a, int *b)
== 功  能：计算鼠标所在区域状态
== 参  数：MOUSEMSG *m：鼠标信息
          int *x, int *y：交叉点横纵坐标
		  int *a, int *b：交叉点对应二维数组下标
== 返回值：MOUSE_POS_AREA  ：可下棋区域
          MOUSE_POS_START ：菜单开始方框
		  MOUSE_POS_REGRET：菜单悔棋方框
		  GAME_OVER       ：菜单结束方框
		  MOUSE_POS_ELSE  ：非功能区域
==============================================================================*/
int  count_xyk_by_message(MOUSEMSG *m, int *x, int *y, int *a, int *b)
{
	int x1, y1;
 
	x1 = m->x;
	y1 = m->y;
 
	if ((x1 >= m_x_chess && x1 <= m_x_chess1)
		&& (y1 >= m_y_chess && y1 <= m_y_chess1))
	{
		*x = m_x0 + (m->x - m_x_chess) / m_wh * m_wh;
		*y = m_y0 + (m->y - m_y_chess) / m_wh * m_wh;
 
		*b = (*x - m_x_chess) / m_wh;
		*a = (*y - m_y_chess) / m_wh;
 
		return (MOUSE_POS_AREA);
	}
 
	if ((x1 >= m_x0 - m_wh * 4 && x1 <= m_x0 - m_wh * 2)
		&& (y1 >= m_y0 + m_wh * 3 && y1 <= m_y0 + m_wh * 4))
		return (MOUSE_POS_START);
 
	if ((x1 >= m_x0 - m_wh * 4 && x1 <= m_x0 - m_wh * 2)
		&& (y1 >= m_y0 + m_wh * 5 && y1 <= m_y0 + m_wh * 6))
		return (MOUSE_POS_REGRET);
 
	if ((x1 >= m_x0 - m_wh * 4 && x1 <= m_x0 - m_wh * 2)
		&& (y1 >= m_y0 + m_wh * 7 && y1 <= m_y0 + m_wh * 8))
		return (GAME_OVER);
 
	return (MOUSE_POS_ELSE);
}
/*=========================================================================
== 函数名：void regret(int x2, int y2, int chess[15][15],int chessbox[][2])
== 功  能：悔棋
== 参  数：int x2, int y2：棋子所在的交叉点坐标
          int chess[15][15]：交叉点棋子信息（判定是黑、白、无棋）
		  int chessbox[][2]：上一棋子数组下标
== 返回值：无
==========================================================================*/
void regret(int x2, int y2, int chess[15][15],int chessbox[][2])
{
	int m, n;
	m = chessbox[num - 1][0];
	n = chessbox[num - 1][1];
	draw_regret(m, n, x2, y2);
	chess[m][n] = 0;
	num = num - 1;
 
	if (num % 2 == 0)
	{
		text_black();
	}
	if (num % 2 != 0)
	{
		text_white();
	}
}
/*================================================
== 函数名：draw_regret(int m, int n, int x2, int y2)
== 功  能：绘制所有悔棋情况
== 参  数：int m, int n：棋子所在交叉点下标
          int x2, int y2：棋子所在交叉点坐标
== 返回值：无
=================================================*/
void draw_regret(int m, int n, int x2, int y2)
{
	draw_re(x2, y2);
	if (m == 3 && n == 3)
	{
		setlinecolor(BLACK);
		setfillcolor(BLACK);/*绘制画笔颜色以及填充颜色*/
		fillcircle(m_x0 + m_wh * 3, m_y0 + m_wh * 3, 3);//绘制星位
	}
	if (m == 3 && n == 11)
	{
		setlinecolor(BLACK);
		setfillcolor(BLACK);/*绘制画笔颜色以及填充颜色*/
		fillcircle(m_x0 + m_wh * 11, m_y0 + m_wh * 3, 3);
	}
	if (m == 11 && n == 3)
	{
		setlinecolor(BLACK);
		setfillcolor(BLACK);/*绘制画笔颜色以及填充颜色*/
		fillcircle(m_x0 + m_wh * 3, m_y0 + m_wh * 11, 3);
	}
	if (m == 11 && n == 11)
	{
		setlinecolor(BLACK);
		setfillcolor(BLACK);/*绘制画笔颜色以及填充颜色*/
		fillcircle(m_x0 + m_wh * 11, m_y0 + m_wh * 11, 3);
	}
	if (m == 7 && n == 7)
	{
		setlinecolor(BLACK);
		setfillcolor(BLACK);/*绘制画笔颜色以及填充颜色*/
		fillcircle(x2, y2, 3);
	}
	if (m == 0 && n == 0)
	{
		setlinecolor(RGB(172, 81, 24));
		setlinestyle(PS_SOLID, 1);
		line(x2, y2, x2 - 15, y2);
		line(x2, y2, x2, y2 - 15);
		setlinestyle(PS_SOLID, 2);
		setlinecolor(BLACK);
		rectangle(m_x0 - 4, m_y0 - 4, m_x01 + 4, m_y01 + 4);
	}
	if (m == 0 && n == 14)
	{
		setlinecolor(RGB(172, 81, 24));
		setlinestyle(PS_SOLID, 1);
		line(x2, y2, x2 + 15, y2);
		line(x2, y2, x2, y2 - 15);
		setlinestyle(PS_SOLID, 2);
		setlinecolor(BLACK);
		rectangle(m_x0 - 4, m_y0 - 4, m_x01 + 4, m_y01 + 4);
	}
	if (m == 14 && n == 0)
	{
		setlinecolor(RGB(172, 81, 24));
		setlinestyle(PS_SOLID, 1);
		line(x2, y2, x2 - 15, y2);
		line(x2, y2, x2, y2 + 15);
		setlinestyle(PS_SOLID, 2);
		setlinecolor(BLACK);
		rectangle(m_x0 - 4, m_y0 - 4, m_x01 + 4, m_y01 + 4);
	}
	if (m == 14 && n == 14)
	{
		setlinecolor(RGB(172, 81, 24));
		setlinestyle(PS_SOLID, 1);
		line(x2, y2, x2 + 15, y2);
		line(x2, y2, x2, y2 + 15);
		setlinestyle(PS_SOLID, 2);
		setlinecolor(BLACK);
		rectangle(m_x0 - 4, m_y0 - 4, m_x01 + 4, m_y01 + 4);
	}
	if ((n > 0 && n < 14) && m == 0)
	{
		setlinecolor(RGB(172, 81, 24));
		setlinestyle(PS_SOLID, 1);
		line(x2, y2, x2, y2 - 15);
		setlinestyle(PS_SOLID, 2);
		setlinecolor(BLACK);
		rectangle(m_x0 - 4, m_y0 - 4, m_x01 + 4, m_y01 + 4);
	}
	if ((n > 0 && n < 14) && m == 14)
	{
		setlinecolor(RGB(172, 81, 24));
		setlinestyle(PS_SOLID, 1);
		line(x2, y2, x2, y2 + 15);
		setlinestyle(PS_SOLID, 2);
		setlinecolor(BLACK);
		rectangle(m_x0 - 4, m_y0 - 4, m_x01 + 4, m_y01 + 4);
	}
	if ((m > 0 && m < 14) && n == 0)
	{
		setlinecolor(RGB(172, 81, 24));
		setlinestyle(PS_SOLID, 1);
		line(x2, y2, x2 - 15, y2);
		setlinestyle(PS_SOLID, 2);
		setlinecolor(BLACK);
		rectangle(m_x0 - 4, m_y0 - 4, m_x01 + 4, m_y01 + 4);
	}
	if ((m > 0 && m < 14) && n == 14)
	{
		setlinecolor(RGB(172, 81, 24));
		setlinestyle(PS_SOLID, 1);
		line(x2, y2, x2 + 15, y2);
		setlinestyle(PS_SOLID, 2);
		setlinecolor(BLACK);
		rectangle(m_x0 - 4, m_y0 - 4, m_x01 + 4, m_y01 + 4);
	}
}
/*================================================
== 函数名：draw_re(int x2, int y2)
== 功  能：绘制悔棋棋子
== 参  数：int x2, int y2：棋子所在交叉点坐标
== 返回值：无
=================================================*/
void draw_re(int x2, int y2)
{
	setlinecolor(RGB(172, 81, 24));
	setfillcolor(RGB(172, 81, 24));
	fillcircle(x2, y2, 15);
	setlinecolor(BLACK);
	setlinestyle(PS_SOLID, 1); 
	line(x2 - 15, y2, x2 + 15, y2);
	line(x2, y2 - 15, x2, y2 + 15);
}
/*=============================================================================
== 函数名：draw_chessmen(int x, int y, int num, int a, int b, int chess[][15])
== 功  能：绘制黑白棋子
== 参  数：int x, int y   ：下棋交叉点横纵坐标
          int num        ：棋子数
          int a, int b   ：交叉点数组下标
          int chess[][15]：交叉点数组信息
== 返回值：无
===============================================================================*/
void draw_chessmen(int x, int y, int num, int a, int b, int chess[][15])
{
	if (num % 2 == 0)
	{
		setlinecolor(BLACK);
		setfillcolor(BLACK);
		fillcircle(x, y, 15);
		chess[a][b] = NUM_BLACK;
	}
 
	if (num % 2 != 0)
	{
		setlinecolor(WHITE);
		setfillcolor(WHITE);
		fillcircle(x, y, 15);
		chess[a][b] = NUM_WHITE;
	}
}
/*================================================
== 函数名：text()
== 功  能：绘制标题
== 参  数：无
== 返回值：无
=================================================*/
void text()
{
	int x1, y1;
	TCHAR str[] = _T("五 子 棋");
	settextstyle(m_wh, m_wh, _T("黑体"));
	setbkcolor(RGB(172, 81, 24));
	settextcolor(BLACK);
	x1 = m_x0 + m_wh * 3;
	y1 = m_y0 - m_wh / 3 * 2 - 30;
	outtextxy(x1, y1, str);
}
/*================================================
== 函数名：judge(int a, int b, int c, int chess[][15])
== 功  能：判断胜负条件
== 参  数：int a,int b   ：数组下标（代表行和列）
          int c          ：代表颜色
		  int chess[][15]：代表棋子颜色
== 返回值：无
=================================================*/
int  judge(int a, int b, int c, int chess[][15])
{
	int i, j, n1, n2; //i 表示行，j表示列
	while (1)
	{
		n1 = 0;
		n2 = 0;
		/*水平向左统计同种颜色棋子个数*/
		for (i = a, j = b; j >= 0; j--)
		{
			if (chess[i][j] == c)
				n1++;
			else
				break;
		}
		/*水平向右统计同种颜色棋子个数*/
		for (i = a, j = b; j <= m_row1; j++)
		{
			if (chess[i][j] == c)
				n2++;
			else
				break;
		}
		if (n1 + n2 - 1 >= 5)
		{
			return(1);
			break;
		}
		/*垂直向上统计同种颜色棋子个数*/
		n1 = 0;
		n2 = 0;
		for (i = a, j = b; i >= 0; i--)
		{
			if (chess[i][j] == c)
				n1++;
			else
				break;
		}
		/*垂直向下统计同种颜色棋子个数*/
		for (i = a, j = b; i <= m_row1; i++)
		{
			if (chess[i][j] == c)
				n2++;
			else
				break;
		}
		if (n1 + n2 - 1 >= 5)
		{
			return(1);
			break;
		}
		/*向左上方统计同种颜色棋子个数*/
		n1 = 0;
		n2 = 0;
		for (i = a, j = b; i >= 0, j >= 0; i--, j--)
		{
			if (chess[i][j] == c)
				n1++;
			else
				break;
		}
		/*向右下方统计同种颜色棋子个数*/
		for (i = a, j = b; i <= m_row1, j <= m_row1; i++, j++)
		{
			if (chess[i][j] == c)
				n2++;
			else
				break;
		}
		if (n1 + n2 - 1 >= 5)
		{
			return(1);
			break;
		}
		/*向右上方统计同种颜色棋子个数*/
		n1 = 0;
		n2 = 0;
		for (i = a, j = b; i >= 0, j <= m_row1; i--, j++)
		{
			if (chess[i][j] == c)
				n1++;
			else
				break;
		}
		/*向左下方统计同种颜色棋子个数*/
		for (i = a, j = b; i <= m_row1, j >= 0; i++, j--)
		{
			if (chess[i][j] == c)
				n2++;
			else
				break;
		}
 
		if (n1 + n2 - 1 >= 5)
		{
			return(1);
			break;
		}
		return(0);
		break;
	}
}
/*================================================
== 函数名：draw_menu()
== 功  能：绘制菜单
== 参  数：无
== 返回值：无
=================================================*/
void draw_menu()
{
	int x, y;
 
	setlinestyle(PS_SOLID, 1);
	setlinecolor(WHITE);
 
	x = m_x0 - m_wh * 4;
	y = m_y0 + m_wh * 3;
	rectangle(x, y, x + m_wh * 2, y + m_wh);//开始方框
	setfillcolor(RGB(172, 81, 24));
	setfillstyle(BS_SOLID);
	floodfill(x + 1, y + 1, WHITE);
	TCHAR str1[] = _T("开始");
	settextstyle(m_wh - 2, m_wh / 2 - 2, _T("楷体"));
	setbkcolor(RGB(172, 81, 24));
	settextcolor(BLACK);
	outtextxy(x + 4, y + 1, str1);
 
	x = x;
	y = y + m_wh * 2;
	rectangle(x, y, x + m_wh * 2, y + m_wh);//悔棋方框
	setfillcolor(RGB(172, 81, 24));
	setfillstyle(BS_SOLID);
	floodfill(x + 1, y + 1, WHITE);
	TCHAR str2[] = _T("悔棋");
	settextstyle(m_wh - 2, m_wh / 2 - 2, _T("楷体"));
	setbkcolor(RGB(172, 81, 24));
	settextcolor(BLACK);
	outtextxy(x + 4, y + 1, str2);
 
	x = x;
	y = y + m_wh * 2;
	rectangle(x, y, x + m_wh * 2, y + m_wh);//结束方框
	setfillcolor(RGB(172, 81, 24));
	setfillstyle(BS_SOLID);
	floodfill(x + 1, y + 1, WHITE);
	TCHAR str3[] = _T("结束");
	settextstyle(m_wh - 2, m_wh / 2 - 2, _T("楷体"));
	setbkcolor(RGB(172, 81, 24));
	settextcolor(BLACK);
	outtextxy(x + 4, y + 1, str3);
 
}
/*================================================
== 函数名：over_black()
== 功  能：绘制黑棋胜字样
== 参  数：无
== 返回值：无
=================================================*/
void over_black()
{
	int x, y;
	x = m_x0 + m_wh * (m_row + 2);
	y = m_y0 + m_wh * 5;
	TCHAR str[] = _T("黑方胜");
	settextstyle(m_wh, m_wh / 2 - 1, _T("楷体"));
	setbkmode(OPAQUE);
	settextcolor(WHITE);
	outtextxy(x + 1, y, str);
	TCHAR str1[] = _T("按开始再来一局");
	settextstyle(m_wh / 2, m_wh / 5 - 1, _T("黑体"));
	setbkmode(OPAQUE);
	settextcolor(WHITE);
	x = m_x0 + m_wh * (m_row + 2) + 7;
	y = m_y0 + m_wh * 6;
	outtextxy(x + 1, y, str1);
}
/*================================================
== 函数名：over_white()
== 功  能：绘制白棋胜字样
== 参  数：无
== 返回值：无
=================================================*/
void over_white()
{
	int x, y;
	x = m_x0 + m_wh * (m_row + 2);
	y = m_y0 + m_wh * 5;
	TCHAR str[] = _T("白方胜");
	settextstyle(m_wh, m_wh / 2 - 1, _T("楷体"));
	setbkmode(OPAQUE);
	settextcolor(WHITE);
	outtextxy(x + 1, y, str);
	TCHAR str1[] = _T("按开始再来一局");
	settextstyle(m_wh / 2, m_wh / 5 - 1, _T("黑体"));
	setbkmode(OPAQUE);
	settextcolor(WHITE);
	x = m_x0 + m_wh * (m_row + 2) + 7;
	y = m_y0 + m_wh * 6;
	outtextxy(x + 1, y, str1);
}
/*================================================
== 函数名：position()
== 功  能：绘制状态栏及内容
== 参  数：无
== 返回值：无
=================================================*/
void position()
{
	int x, y;
	x = m_x0 + m_wh * (m_row + 2);
	y = m_y0 + m_wh * 4;
	setlinecolor(WHITE);
	rectangle(x, y, x + m_wh * 3, y + m_wh * 3);
	setfillcolor(RGB(172, 81, 24));
	setfillstyle(BS_SOLID);
	floodfill(x + 1, y + 1, WHITE);
 
	TCHAR str1[] = _T("提示");
	settextstyle(m_wh / 2, m_wh / 3, _T("楷体"));
	setbkmode(TRANSPARENT);
	settextcolor(WHITE);
	outtextxy(x + m_wh / 3 * 2, y + 2, str1);
 
	x = x;
	y = y + m_wh;
	TCHAR str[] = _T("请点击开始");
	settextstyle(m_wh, m_wh / 3 - 2, _T("楷体"));
	setbkmode(TRANSPARENT);
	settextcolor(WHITE);
	outtextxy(x, y, str);
 
 
}
/*================================================
== 函数名：text_black()
== 功  能：绘制黑棋下字样
== 参  数：无
== 返回值：无
=================================================*/
void text_black()
{
	int x, y;
	x = m_x0 + m_wh * (m_row + 2);
	y = m_y0 + m_wh * 5;
	TCHAR str[] = _T("黑子下");
	settextstyle(m_wh, m_wh / 2 - 1, _T("楷体"));
	setbkmode(OPAQUE);
	settextcolor(WHITE);
	outtextxy(x + 1, y, str);
}
/*================================================
== 函数名：text_white()
== 功  能：绘制白棋下字样
== 参  数：无
== 返回值：无
=================================================*/
void text_white()
{
	int x, y;
	x = m_x0 + m_wh * (m_row + 2);
	y = m_y0 + m_wh * 5;
	TCHAR str[] = _T("白子下");
	settextstyle(m_wh, m_wh / 2 - 1, _T("楷体"));
	setbkmode(OPAQUE);
	settextcolor(WHITE);
	outtextxy(x + 1, y, str);
}