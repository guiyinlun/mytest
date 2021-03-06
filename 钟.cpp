//#include <graphics.h>
//#include <conio.h>
//#include <math.h>
//
//#define PI 3.14159265359
//
//void Draw(int hour, int minute, int second)
//{
//	double a_hour, a_min, a_sec;					// 时、分、秒针的弧度值
//	int x_hour, y_hour, x_min, y_min, x_sec, y_sec;	// 时、分、秒针的末端位置
//
//	// 计算时、分、秒针的弧度值
//	a_sec = second * 2 * PI / 60;
//	a_min = minute * 2 * PI / 60 + a_sec / 60;
//	a_hour = hour * 2 * PI / 12 + a_min / 12;
//
//	// 计算时、分、秒针的末端位置
//	x_sec = 320 + (int)(120 * sin(a_sec));
//	y_sec = 240 - (int)(120 * cos(a_sec));
//	x_min = 320 + (int)(100 * sin(a_min));
//	y_min = 240 - (int)(100 * cos(a_min));
//	x_hour = 320 + (int)(70 * sin(a_hour));
//	y_hour = 240 - (int)(70 * cos(a_hour));
//
//	// 画时针
//	setlinestyle(PS_SOLID, 10, NULL);
//	setlinecolor(WHITE);
//	line(320, 240, x_hour, y_hour);
//
//	// 画分针
//	setlinestyle(PS_SOLID, 6, NULL);
//	setlinecolor(LIGHTGRAY);
//	line(320, 240, x_min, y_min);
//
//	// 画秒针
//	setlinestyle(PS_SOLID, 2, NULL);
//	setlinecolor(RED);
//	line(320, 240, x_sec, y_sec);
//}
//
//int main()
//{
//	initgraph(640, 480);		// 初始化 640 x 480 的绘图窗口
//
//	// 绘制一个简单的表盘
//	circle(320, 240, 2);
//	circle(320, 240, 60);
//	circle(320, 240, 160);
//	outtextxy(296, 310, _T("BestAns"));
//	outtextxy(312, 75, _T("12"));
//	outtextxy(315, 395, _T("6"));
//	outtextxy(155, 235, _T("9"));
//	outtextxy(475, 235, _T("3"));
//	// 设置 XOR 绘图模式
//	setrop2(R2_XORPEN);			// 设置 XOR 绘图模式
//
//	// 绘制表针
//	SYSTEMTIME ti;				// 定义变量保存当前时间
//	while (!_kbhit())			// 按任意键退出钟表程序
//	{
//		GetLocalTime(&ti);		// 获取当前时间
//		Draw(ti.wHour, ti.wMinute, ti.wSecond);	// 画表针
//		Sleep(1000);							// 延时 1 秒
//		Draw(ti.wHour, ti.wMinute, ti.wSecond);	// 擦表针（擦表针和画表针的过程是一样的）
//	}
//
//	closegraph();				// 关闭绘图窗口
//	return 0;
//}