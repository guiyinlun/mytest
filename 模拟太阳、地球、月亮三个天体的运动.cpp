#include <graphics.h>
#include <conio.h>
#include<cmath>
#include <stdlib.h>
#include <stdio.h>
#define P 3.14

int main()
{
	initgraph(640, 480);
	HWND hwnd = GetHWnd();
	 //设置窗口标题文字
	SetWindowText(hwnd, "模拟太阳、地球、月亮三个天体的运动");

	setbkcolor(WHITE);
	cleardevice();
	setlinecolor(BLACK);
	
	settextcolor(BLACK);
	/*BeginBatchDraw();
	EndBatchDraw();*/
	setfillcolor(RGB(244, 66, 5));
	fillcircle(320,240,50);
	ellipse(320-200,240-100,320+200,240+100);
	
	BeginBatchDraw();
	double diq = 0;
	for (double i = 0; i <= 2 * P; i += 0.02)
	{
		setfillcolor(RGB(0, 122, 204));
		clearcircle(320 + cos(diq) * 200, 240 + sin(diq) * 100, 21);
		fillcircle(320+cos(i)*200, 240+sin(i)*100, 20);
		ellipse(320 + cos(i) * 200 - 60, 240 + sin(i) * 100 - 30, 320 + cos(i) * 200 + 60, 240 + sin(i) * 100 + 30);
		for (double j = 0; j <= 2 * P; j += 0.02)
		{
			setfillcolor(RGB(255, 242, 157));
			fillcircle(320 + cos(i) * 200 + cos(j) * 60, 240 + sin(i) * 100 + sin(j) * 30, 7);
			
			FlushBatchDraw();
			Sleep(1);
			
			clearcircle(320 + cos(i) * 200 + cos(j) * 60, 240 + sin(i) * 100 + sin(j) * 30, 8);

			
		}
		
		diq = i;
		FlushBatchDraw();
		
		Sleep(1);
	}
	EndBatchDraw();
	_getch();
	closegraph();
	return 0;
}