/******************************************
*******�������ƣ�������Ϸ�������壨���˶�ս��
*******����    �������ʵ��ѧ ������
*******����������Visual Studio 2017
*******�������ڣ�2018.06.02
*******������ڣ�2018.06.10
*******************************************/
//#include "stdafx.h"
#include "stdio.h"
#include "graphics.h"
#include "conio.h"
#include "windows.h"
 
void init_system();//��ʼ��ϵͳ
void close_system();//�ر�ϵͳ
void init_globales();//��ʼ������
 
void play_chess();//��ʼ��������Ϸ
void gamestart();//��ʼ����
int  count_xyk_by_message(MOUSEMSG *m, int *x, int *y, int *a, int *b);//���������������״̬
int  judge(int a, int b, int c, int chess[][15]);//�ж�ʤ������
void regret(int x2, int y2, int chess[15][15], int chessbox[][2]);//����
 
void draw_chessmen(int x, int y, int num, int a, int b, int chess[][15]);//���ƺڰ�����
void draw_chessboard();//�����̡��˵���״̬�򣬻�����
void text();//���Ʊ���
void draw_menu();//���Ʋ˵�
void over_black();//���ƺ���ʤ����
void over_white();//���ư���ʤ����
void position();//����״̬��������
void text_black();//���ƺ���������
void text_white();//���ư���������
void draw_regret(int m, int n, int x2, int y2);//���л������
void draw_re(int x2, int y2);//���ƻ�������
 
int m_x0, m_y0, m_wh = 40, m_x01, m_y01;//��ս������
int m_x_box, m_y_box, m_x_box1, m_y_box1;//������ʼ����
int m_x_chess, m_y_chess, m_x_chess1, m_y_chess1;//����������
int m_row = 14, m_row1 = 15;
int num = 0;//����
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
== ��������init_system()
== ��  �ܣ���ʼ��ϵͳ
== ��  ������
== ����ֵ����
=================================================*/
void init_system()
{
	initgraph(1024, 768);
	init_globales();
}
/*================================================
== ��������close_system()
== ��  �ܣ��ر�ϵͳ
== ��  ������
== ����ֵ����
=================================================*/
void close_system()
{
	_getch();
	closegraph();
}
/*================================================
== ��������init_globales()
== ��  �ܣ���ʼ������
== ��  ������
== ����ֵ����
=================================================*/
void init_globales()
{
	m_x0 = 1024 / 2 - (m_row / 2) * m_wh;/*С����*/
	m_x01 = m_x0 + m_row * m_wh;
	m_y0 = 768 / 2 - (m_row / 2) * m_wh;
	m_y01 = m_y0 + m_row * m_wh;
 
	m_x_box = m_x0 - m_wh;/*������*/
	m_x_box1 = m_x01 + m_wh;
	m_y_box = m_y0 - m_wh * 2;
	m_y_box1 = m_y01 + m_wh;
 
	m_x_chess = m_x0 - m_wh / 2;/*����������*/
	m_y_chess = m_y0 - m_wh / 2;
	m_x_chess1 = m_x01 + m_wh / 2;
	m_y_chess1 = m_y01 + m_wh / 2;
}
/*================================================
== ��������draw_chessboard()
== ��  �ܣ������̡��˵���״̬�򣬻�����
== ��  ������
== ����ֵ����
=================================================*/
void draw_chessboard()
{
	int i;
//	loadimage(NULL, "E:\\����\\PICTURE\\123.jpg");
	setbkcolor(BLACK);
	cleardevice();/*�ñ���ɫ�����Ļ*/
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
 
	for (i = m_x0 + m_wh; i < m_x01; i += m_wh)//���ƽ�����
	{
		line(i, m_y0, i, m_y01);
	}
	for (i = m_y0 + m_wh; i < m_y01; i += m_wh)
	{
		line(m_x0, i, m_x01, i);
	}
 
	setlinecolor(BLACK);
	setfillcolor(BLACK);/*���ƻ�����ɫ�Լ������ɫ*/
 
	fillcircle(m_x0 + m_wh * 3, m_y0 + m_wh * 3, 3);//������λ
	fillcircle(m_x0 + m_wh * 11, m_y0 + m_wh * 3, 3);
	fillcircle(m_x0 + m_wh * 3, m_y0 + m_wh * 11, 3);
	fillcircle(m_x0 + m_wh * 11, m_y0 + m_wh * 11, 3);
	fillcircle(m_x0 + m_wh * 7, m_y0 + m_wh * 7, 3);
 
	draw_menu();/*���Ʋ˵�*/
	position();/*����״̬��*/
	text();/*���Ʊ���*/
}
/*================================================
== ��������play_chess()
== ��  �ܣ���ʼ��������Ϸ
== ��  ������
== ����ֵ����
=================================================*/
void play_chess()
{
	int x, y;//�������
	int pos;//���״̬
	int a, b;
	MOUSEMSG m;
	while (1)
	{
		m = GetMouseMsg();
		pos = count_xyk_by_message(&m, &x, &y, &a, &b);
 
		switch (m.uMsg)
		{
		case WM_LBUTTONDOWN:/*�б��������������*/
		{
			if (pos == MOUSE_POS_ELSE)  continue;//��������
			if (pos == MOUSE_POS_START) gamestart();//��ʼ����
			if (pos == GAME_OVER) exit(1);//��������
		}
		}
	}
}
/*================================================
== ��������gamestart()
== ��  �ܣ���ʼ����
== ��  ������
== ����ֵ����
=================================================*/
void gamestart()
{
	draw_chessboard();
 
	int chess[15][15] = { 0 };
	num = 0;
 
	int x1, y1;
	x1 = m_x0 + m_wh * (m_row + 2);
	y1 = m_y0 + m_wh * 5;
	TCHAR str[] = _T("������");
	settextstyle(m_wh, m_wh / 2 - 1, _T("����"));
	setbkmode(OPAQUE);
	settextcolor(WHITE);
	outtextxy(x1 + 1, y1, str);
 
	int x, y;//�������
	int pos;//���״̬
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
== ��������count_xyk_by_message(MOUSEMSG *m, int *x, int *y, int *a, int *b)
== ��  �ܣ����������������״̬
== ��  ����MOUSEMSG *m�������Ϣ
          int *x, int *y��������������
		  int *a, int *b��������Ӧ��ά�����±�
== ����ֵ��MOUSE_POS_AREA  ������������
          MOUSE_POS_START ���˵���ʼ����
		  MOUSE_POS_REGRET���˵����巽��
		  GAME_OVER       ���˵���������
		  MOUSE_POS_ELSE  ���ǹ�������
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
== ��������void regret(int x2, int y2, int chess[15][15],int chessbox[][2])
== ��  �ܣ�����
== ��  ����int x2, int y2���������ڵĽ��������
          int chess[15][15]�������������Ϣ���ж��Ǻڡ��ס����壩
		  int chessbox[][2]����һ���������±�
== ����ֵ����
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
== ��������draw_regret(int m, int n, int x2, int y2)
== ��  �ܣ��������л������
== ��  ����int m, int n���������ڽ�����±�
          int x2, int y2���������ڽ��������
== ����ֵ����
=================================================*/
void draw_regret(int m, int n, int x2, int y2)
{
	draw_re(x2, y2);
	if (m == 3 && n == 3)
	{
		setlinecolor(BLACK);
		setfillcolor(BLACK);/*���ƻ�����ɫ�Լ������ɫ*/
		fillcircle(m_x0 + m_wh * 3, m_y0 + m_wh * 3, 3);//������λ
	}
	if (m == 3 && n == 11)
	{
		setlinecolor(BLACK);
		setfillcolor(BLACK);/*���ƻ�����ɫ�Լ������ɫ*/
		fillcircle(m_x0 + m_wh * 11, m_y0 + m_wh * 3, 3);
	}
	if (m == 11 && n == 3)
	{
		setlinecolor(BLACK);
		setfillcolor(BLACK);/*���ƻ�����ɫ�Լ������ɫ*/
		fillcircle(m_x0 + m_wh * 3, m_y0 + m_wh * 11, 3);
	}
	if (m == 11 && n == 11)
	{
		setlinecolor(BLACK);
		setfillcolor(BLACK);/*���ƻ�����ɫ�Լ������ɫ*/
		fillcircle(m_x0 + m_wh * 11, m_y0 + m_wh * 11, 3);
	}
	if (m == 7 && n == 7)
	{
		setlinecolor(BLACK);
		setfillcolor(BLACK);/*���ƻ�����ɫ�Լ������ɫ*/
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
== ��������draw_re(int x2, int y2)
== ��  �ܣ����ƻ�������
== ��  ����int x2, int y2���������ڽ��������
== ����ֵ����
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
== ��������draw_chessmen(int x, int y, int num, int a, int b, int chess[][15])
== ��  �ܣ����ƺڰ�����
== ��  ����int x, int y   �����彻����������
          int num        ��������
          int a, int b   ������������±�
          int chess[][15]�������������Ϣ
== ����ֵ����
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
== ��������text()
== ��  �ܣ����Ʊ���
== ��  ������
== ����ֵ����
=================================================*/
void text()
{
	int x1, y1;
	TCHAR str[] = _T("�� �� ��");
	settextstyle(m_wh, m_wh, _T("����"));
	setbkcolor(RGB(172, 81, 24));
	settextcolor(BLACK);
	x1 = m_x0 + m_wh * 3;
	y1 = m_y0 - m_wh / 3 * 2 - 30;
	outtextxy(x1, y1, str);
}
/*================================================
== ��������judge(int a, int b, int c, int chess[][15])
== ��  �ܣ��ж�ʤ������
== ��  ����int a,int b   �������±꣨�����к��У�
          int c          ��������ɫ
		  int chess[][15]������������ɫ
== ����ֵ����
=================================================*/
int  judge(int a, int b, int c, int chess[][15])
{
	int i, j, n1, n2; //i ��ʾ�У�j��ʾ��
	while (1)
	{
		n1 = 0;
		n2 = 0;
		/*ˮƽ����ͳ��ͬ����ɫ���Ӹ���*/
		for (i = a, j = b; j >= 0; j--)
		{
			if (chess[i][j] == c)
				n1++;
			else
				break;
		}
		/*ˮƽ����ͳ��ͬ����ɫ���Ӹ���*/
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
		/*��ֱ����ͳ��ͬ����ɫ���Ӹ���*/
		n1 = 0;
		n2 = 0;
		for (i = a, j = b; i >= 0; i--)
		{
			if (chess[i][j] == c)
				n1++;
			else
				break;
		}
		/*��ֱ����ͳ��ͬ����ɫ���Ӹ���*/
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
		/*�����Ϸ�ͳ��ͬ����ɫ���Ӹ���*/
		n1 = 0;
		n2 = 0;
		for (i = a, j = b; i >= 0, j >= 0; i--, j--)
		{
			if (chess[i][j] == c)
				n1++;
			else
				break;
		}
		/*�����·�ͳ��ͬ����ɫ���Ӹ���*/
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
		/*�����Ϸ�ͳ��ͬ����ɫ���Ӹ���*/
		n1 = 0;
		n2 = 0;
		for (i = a, j = b; i >= 0, j <= m_row1; i--, j++)
		{
			if (chess[i][j] == c)
				n1++;
			else
				break;
		}
		/*�����·�ͳ��ͬ����ɫ���Ӹ���*/
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
== ��������draw_menu()
== ��  �ܣ����Ʋ˵�
== ��  ������
== ����ֵ����
=================================================*/
void draw_menu()
{
	int x, y;
 
	setlinestyle(PS_SOLID, 1);
	setlinecolor(WHITE);
 
	x = m_x0 - m_wh * 4;
	y = m_y0 + m_wh * 3;
	rectangle(x, y, x + m_wh * 2, y + m_wh);//��ʼ����
	setfillcolor(RGB(172, 81, 24));
	setfillstyle(BS_SOLID);
	floodfill(x + 1, y + 1, WHITE);
	TCHAR str1[] = _T("��ʼ");
	settextstyle(m_wh - 2, m_wh / 2 - 2, _T("����"));
	setbkcolor(RGB(172, 81, 24));
	settextcolor(BLACK);
	outtextxy(x + 4, y + 1, str1);
 
	x = x;
	y = y + m_wh * 2;
	rectangle(x, y, x + m_wh * 2, y + m_wh);//���巽��
	setfillcolor(RGB(172, 81, 24));
	setfillstyle(BS_SOLID);
	floodfill(x + 1, y + 1, WHITE);
	TCHAR str2[] = _T("����");
	settextstyle(m_wh - 2, m_wh / 2 - 2, _T("����"));
	setbkcolor(RGB(172, 81, 24));
	settextcolor(BLACK);
	outtextxy(x + 4, y + 1, str2);
 
	x = x;
	y = y + m_wh * 2;
	rectangle(x, y, x + m_wh * 2, y + m_wh);//��������
	setfillcolor(RGB(172, 81, 24));
	setfillstyle(BS_SOLID);
	floodfill(x + 1, y + 1, WHITE);
	TCHAR str3[] = _T("����");
	settextstyle(m_wh - 2, m_wh / 2 - 2, _T("����"));
	setbkcolor(RGB(172, 81, 24));
	settextcolor(BLACK);
	outtextxy(x + 4, y + 1, str3);
 
}
/*================================================
== ��������over_black()
== ��  �ܣ����ƺ���ʤ����
== ��  ������
== ����ֵ����
=================================================*/
void over_black()
{
	int x, y;
	x = m_x0 + m_wh * (m_row + 2);
	y = m_y0 + m_wh * 5;
	TCHAR str[] = _T("�ڷ�ʤ");
	settextstyle(m_wh, m_wh / 2 - 1, _T("����"));
	setbkmode(OPAQUE);
	settextcolor(WHITE);
	outtextxy(x + 1, y, str);
	TCHAR str1[] = _T("����ʼ����һ��");
	settextstyle(m_wh / 2, m_wh / 5 - 1, _T("����"));
	setbkmode(OPAQUE);
	settextcolor(WHITE);
	x = m_x0 + m_wh * (m_row + 2) + 7;
	y = m_y0 + m_wh * 6;
	outtextxy(x + 1, y, str1);
}
/*================================================
== ��������over_white()
== ��  �ܣ����ư���ʤ����
== ��  ������
== ����ֵ����
=================================================*/
void over_white()
{
	int x, y;
	x = m_x0 + m_wh * (m_row + 2);
	y = m_y0 + m_wh * 5;
	TCHAR str[] = _T("�׷�ʤ");
	settextstyle(m_wh, m_wh / 2 - 1, _T("����"));
	setbkmode(OPAQUE);
	settextcolor(WHITE);
	outtextxy(x + 1, y, str);
	TCHAR str1[] = _T("����ʼ����һ��");
	settextstyle(m_wh / 2, m_wh / 5 - 1, _T("����"));
	setbkmode(OPAQUE);
	settextcolor(WHITE);
	x = m_x0 + m_wh * (m_row + 2) + 7;
	y = m_y0 + m_wh * 6;
	outtextxy(x + 1, y, str1);
}
/*================================================
== ��������position()
== ��  �ܣ�����״̬��������
== ��  ������
== ����ֵ����
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
 
	TCHAR str1[] = _T("��ʾ");
	settextstyle(m_wh / 2, m_wh / 3, _T("����"));
	setbkmode(TRANSPARENT);
	settextcolor(WHITE);
	outtextxy(x + m_wh / 3 * 2, y + 2, str1);
 
	x = x;
	y = y + m_wh;
	TCHAR str[] = _T("������ʼ");
	settextstyle(m_wh, m_wh / 3 - 2, _T("����"));
	setbkmode(TRANSPARENT);
	settextcolor(WHITE);
	outtextxy(x, y, str);
 
 
}
/*================================================
== ��������text_black()
== ��  �ܣ����ƺ���������
== ��  ������
== ����ֵ����
=================================================*/
void text_black()
{
	int x, y;
	x = m_x0 + m_wh * (m_row + 2);
	y = m_y0 + m_wh * 5;
	TCHAR str[] = _T("������");
	settextstyle(m_wh, m_wh / 2 - 1, _T("����"));
	setbkmode(OPAQUE);
	settextcolor(WHITE);
	outtextxy(x + 1, y, str);
}
/*================================================
== ��������text_white()
== ��  �ܣ����ư���������
== ��  ������
== ����ֵ����
=================================================*/
void text_white()
{
	int x, y;
	x = m_x0 + m_wh * (m_row + 2);
	y = m_y0 + m_wh * 5;
	TCHAR str[] = _T("������");
	settextstyle(m_wh, m_wh / 2 - 1, _T("����"));
	setbkmode(OPAQUE);
	settextcolor(WHITE);
	outtextxy(x + 1, y, str);
}