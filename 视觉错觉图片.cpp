//#include <graphics.h>
//#include <conio.h>
//int main()
//{
//	initgraph(640, 480);
//	HWND hwnd = GetHWnd();
//	//设置窗口标题文字
//	SetWindowText(hwnd, "视觉错觉图片");
//
//	setlinestyle(PS_SOLID , 10);
//	
//	setlinecolor(RGB(125, 125, 125));
//	BeginBatchDraw();
//	for (int i = 0; i < 12; i++)
//	{
//		line(23 + 54 * i, 0, 23 + 54 * i, 480);
//		if(i<9) line(0, 24 + 54 * i, 640, 24 + 54 * i);
//
//	}
//	setlinecolor(WHITE);
//	setfillcolor(WHITE);
//	for (int i = 0; i < 12; i++)
//	for (int j = 0; j < 9; j++)
//	fillcircle(18 + 5 + 54 * i, 24 + 54 * j, 3);
//	EndBatchDraw();
//	_getch();
//	closegraph();
//	return 0;
//}