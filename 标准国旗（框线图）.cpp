//#include <graphics.h>
//#include <conio.h>
//#include<cmath>
//#define P 3.141592653589
//POINT pts[4];
//void printstar(int r,double i,int x,int y)
//{
//	double j = 2 * P / 5;
//	for (int m = 0; m < 5; m++)
//	{
//		pts[m].x = x + cos(i + j*m)*r;
//		pts[m].y = y - sin(i + j * m)*r;
//	}
//	
//	for (int i = 0; i < 2; i++)
//	{
//		line(pts[i].x, pts[i].y, pts[i + 3].x, pts[i + 3].y);
//		line(pts[i].x, pts[i].y, pts[i + 2].x, pts[i + 2].y);
//	}
//	line(pts[2].x, pts[2].y, pts[4].x, pts[4].y);
//	circle(x,y,r);
//}
//int main()
//{
//	initgraph(640, 480);
//	HWND hwnd = GetHWnd();
//	 //设置窗口标题文字
//	SetWindowText(hwnd, "标准国旗（框线图）");
//	setbkcolor(WHITE);
//	cleardevice();
//	int r = 0;
//	double i;
//	setlinecolor(RED);
//	rectangle(20,40,620,440);
//	line(20,240,620,240);//|
//	line(320, 40, 320, 440);//-
//	for (int i = 20; i < 320; i += 20)
//	{
//		line(i, 40, i, 240);
//	}
//	for (int i = 40; i < 240; i += 20)
//	{
//		line(20, i, 320, i);
//	}
//	setlinecolor(BLACK);
//	r = 60;
//	printstar( r, P/2, 120, 140);
//	i=atan(0.6);
//
//	line(120, 140, 220, 80);
//	line(120, 140, 260, 120);
//	line(120, 140, 260, 180);
//	line(120, 140, 220,220);
//
//	r = 20;
//	printstar(r, i+P, 220, 80);
//
//	i = atan(0.14285);
//	printstar(r, i+P , 260, 120);
//
//	i = atan(0.2857);
//	printstar(r, P-i , 260, 180);
//
//	i = atan(0.8);
//	printstar(r, P-i  , 220, 220);
//
//	/*setfillcolor(YELLOW);
//
//	floodfill(320,240,RED,0);*/
//	_getch();
//	closegraph();
//	return 0;
//}