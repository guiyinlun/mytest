#include <graphics.h>
#include <conio.h>
#include<cmath>
#include<ctime>
#define P 3.141592653589
#define g 10  //m/s^2
void printball(int r,int x,int y, int left,int right,double vx,double vy,double t)
{             //球的半径，圆心坐标x，y，水平垂直方向控制，水平初速度，垂直初速度,每次运动时间
	fillcircle(20, 100, r);
	double I;
	double s=1;
	int count1=0,count2=0, count3 = 0, count4 = 0;
	while (1)
	{
		BeginBatchDraw();
		if(vy==0&&vx!=0)I = P / 2;
		else
		if (vx == 0&&vy!=0)I = 0;
		else 
		I = atan(vx / vy);

		if (left == 1) x = (x + vx * t)+0.5;			
		else if (left==0) x = (x - vx * t)+0.5;					
		if (right == 1) y = (y + vy * t + (g * t*t )/ 2)+0.5;
		else if (right == 0) y = (y - vy * t + (g * t*t) / 2)+0.5;

		if (x > 620 - r)
		{
			left = 0;
			x = 620 - r;
			count1++;
		}
		if (x < 20 + r)
		{
			left = 1;
			x = 20 + r;
			count1++;
		}
		if (y > 460 - r)
		{
			right = 0;
			y = 460 - r;
			count3++;
		}
		if (y < 20 + r) 
		{
			right = 1;
			y = 20 + r;
			count3++;
		}
		if (count2 != count1)
		{
			if (vx > 0)
				vx = vx - s * sin(I);
			if (vx < 0) vx = 0;
			if (vy > 0)
				vy = vy - s * cos(I);
			if (vy < 0) vy = 0;
			count2 = count1;
		}
		if (count4 != count3)
		{
			if (vx > 0)
				vx = vx - s * sin(I);
			if (vx < 0) vx = 0;
			if (vy > 0)
				vy = vy - s * cos(I);
			if (vy < 0) vy = 0;
			count4 = count3;
		}
		if (right == 1) vy = vy + g * t;
		else vy = vy - g * t;
		if (vy < 0) {
			vy = 0;
			right = 1;
		}
		cleardevice();
		rectangle(20, 20, 620, 460);
		fillcircle(x, y, r);
		FlushBatchDraw();
		Sleep(10);
		EndBatchDraw();
	}
}
int main()
{
	initgraph(640, 480);
	HWND hwnd = GetHWnd();
	 //设置窗口标题文字
	SetWindowText(hwnd, "物理反弹球");
	setbkcolor(WHITE);
	cleardevice();
	setlinecolor(BLACK);
	setfillcolor(BLACK);
	

	printball(10, 20, 100, 1, 1, 10, 10,0.2);
	
	_getch();
	closegraph();
	return 0;
}