//#include <graphics.h>
//#include <conio.h>
//#include<cmath>
//int main()
//{
//	// ³õÊ¼»¯»æÍ¼´°¿Ú
//	initgraph(640, 640);
//	int x=100;
//	setfillcolor(RGB(255, 255, 0));
//	POINT pts1[] = { {300, 50}, {300, 50+x}, {300+x/2, 50+x/2} };
//	fillpolygon(pts1, 3);
//
//	setfillcolor(RGB(255, 0, 255));
//	POINT pts2[] = { {300+x, 50}, {300+x, 50 + x}, {300 + x / 2, 50 + x / 2} };
//	fillpolygon(pts2, 3);
//
//	setfillcolor(RGB(146, 208, 80));
//	POINT pts3[] = { {300, 50 + x, }, {300 + x / 2, 50 + x / 2},  {300 + x, 50 + x} , {300 + x/2, 50 + x*3/2} };
//	fillpolygon(pts3, 4);
//
//	setfillcolor(RGB(0, 176, 240));
//	POINT pts4[] = { {300 + x / 2, 50 + x * 3 / 2}, {300 + x / 2, 50 + x * 7 / 2}, {300 -x / 2, 50 + x *5/ 2} };
//	fillpolygon(pts4, 3);
//
//	setfillcolor(RGB(139, 0, 255));
//	POINT pts5[] = { {300 + x / 2, 50 + x * 3 / 2},  {300 + x / 2, 50 + 3 * x / 2+sqrt(2)*x}, {300 + x/2+sqrt(2)*x/2 , 50 + 3 * x /2+sqrt(2)*x/2} };
//	fillpolygon(pts5, 3);
//
//	setfillcolor(RGB(255, 0, 0));
//	POINT pts6[] = { {300 - x / 2, 50 + x * 5 / 2}, {300 - x / 2 , 50 + 5 *x/ 2+sqrt(2)*x}, {300 -x/2+ sqrt(2)*x  , 50 + 5 * x / 2 + sqrt(2)*x} };
//	fillpolygon(pts6, 3);
//
//	setfillcolor(RGB(255, 165, 0));
//	POINT pts7[] = { {300 - x / 2 , 50 + 5 *x/ 2 + sqrt(2)*x}, {300 - 3*x / 2 , 50 + 5 * x / 2 + sqrt(2)*x}, {300 -2*x, 50 + (2 + sqrt(2))*x} ,{300 - x, 50 + (2 + sqrt(2))*x} };
//	fillpolygon(pts7, 4);
//
//	_getch();
//	closegraph();
//	return 0;
//}