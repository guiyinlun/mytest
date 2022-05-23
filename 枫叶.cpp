//#include <graphics.h>
//#include <conio.h>
//#include<cmath>
//#include<ctime>
//#include<stdio.h>
//#include<iostream>
//using namespace std;
//#define num 50
//double a[5] = { 0.35173,  0.35338, 0.5,    0.5154,   0.00364 };
//double b[5] = { 0.35537, -0.3537,  0,     -0.0018,   0 };
//double c[5] = { -0.35537,  0.35373, 0,      0.00157,  0 };
//double d[5] = { 0.35173,  0.35338, 0.5,    0.58795,  0.57832 };
//double e[5] = { 0.3545,   0.2879,  0.25,   0.2501,   0.5016 };
//double f[5] = { 0.5,      0.1528,  0.462,  0.1054,   0.0606 };
//double p[5] = { 0.1773,   0.38,    0.1773, 0.2091,   0.0563 };
//
//int n = 0, x = 0, y = 0;
//double m,q;
//int main()
//{
//	initgraph(1000,1000);
//	HWND hwnd = GetHWnd();
//	//设置窗口标题文字
//	SetWindowText(hwnd, "枫叶");
//	//setrop2(R2_XORPEN);
//	srand(unsigned(time(NULL)));
//	//BeginBatchDraw();
//
//	int x = rand() % 999 + 1;
//	int y= rand() % 999 + 1;
//
//	for (int i = 0; i < 99999; i++)
//	{
//		int j = rand() % 9999;
//		if (j < 1773) n = 0;
//		else if (j < 5573) n = 1;
//		else if (j< 7346) n = 2;
//		else if (j < 9437) n = 3;
//		else if (j < 10000) n = 4;
//
//		m = a[n] * x + b[n] * y + e[n] * 1000;
//		q =c[n] * x + d[n] * y + f[n] * 1000;
//		x = m;
//		y = q;
//		putpixel(x, y, RED);
//
//	}
//	
//	//EndBatchDraw();
//	_getch();
//	closegraph();
//	return 0;
//}