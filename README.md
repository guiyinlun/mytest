# mytest

这是我在学习easyX过程中的一些程序小作业

**七巧板小猫**

七巧板是一种古老的中国传统智力玩具，其历史至少可以追溯到公元前一世纪，到了明代基本定型。明、清两代在中国民间广泛流传，清陆以湉《冷庐杂识》卷一中写道：近又有七巧图，其式五，其数七，其变化之式多至千余。体物肖形，随手变幻，盖游戏之具，足以排闷破寂，故世俗皆喜为之。” 在 18 世纪，七巧板流传到了国外。李约瑟说它是东方最古老的消遣品之一，至今英国剑桥大学的图书馆里还珍藏着一部《七巧新谱》。

<img src="https://user-images.githubusercontent.com/98374648/169778843-970219bb-431e-4fb4-883c-d067b25f501a.png" width="500" height="500"><br/>

**国旗框线图**

绘制一个标准国旗的框线图，要求精确地计算出国旗中的每个元素的大小、位置、旋转角度等

![image](https://user-images.githubusercontent.com/98374648/169779085-e38f9f16-5e22-4c78-9323-7cbe7012a8df.png)

**枫叶**

double a[5] = { 0.35173,  0.35338, 0.5,    0.5154,   0.00364 };<br/>
double b[5] = { 0.35537, -0.3537,  0,     -0.0018,   0 };<br/>
double c[5] = { -0.35537,  0.35373, 0,      0.00157,  0 };<br/>
double d[5] = { 0.35173,  0.35338, 0.5,    0.58795,  0.57832 };<br/>
double e[5] = { 0.3545,   0.2879,  0.25,   0.2501,   0.5016 };<br/>
double f[5] = { 0.5,      0.1528,  0.462,  0.1054,   0.0606 };<br/>
double p[5] = { 0.1773,   0.38,    0.1773, 0.2091,   0.0563 };<br/>
随机两个小于1000大于0的点<br/>
int x = rand() % 999 + 1;<br/>
int y= rand() % 999 + 1;<br/>
	for (int i = 0; i < 99999; i++)<br/>
	{<br/>
		int j = rand() % 9999;<br/>
		if (j < 1773) n = 0;<br/>
		else if (j < 5573) n = 1;<br/>
		else if (j< 7346) n = 2;<br/>
		else if (j < 9437) n = 3;<br/>
		else if (j < 10000) n = 4;<br/>

		m = a[n] * x + b[n] * y + e[n] * 1000;
		q =c[n] * x + d[n] * y + f[n] * 1000;
		x = m;
		y = q;
		putpixel(x, y, RED);

<img src="https://user-images.githubusercontent.com/98374648/169779415-232e3665-6e95-416f-adbf-20d23104ecad.png" width="500" height="500"><br/>


**模拟太阳、地球、月亮三个天体的运动**

画一个红色色的圆表示太阳。

画一个蓝色的圆表示地球。地球以椭圆形轨道围绕太阳旋转。

再画一个黄色的小圆表示月亮，月亮以椭圆轨道围绕地球旋转。

https://user-images.githubusercontent.com/98374648/169783023-3edb918e-fdb5-4a5e-b175-a68006ade943.mp4

**钟**

绘制一个当前时间的钟表

https://user-images.githubusercontent.com/98374648/169783036-e950f8a5-fae6-4369-81dd-8978219d7058.mp4

**视觉错误图案**

绘制让人视觉错误的图案

图案1

![image](https://user-images.githubusercontent.com/98374648/170673182-40d4a1a8-b149-4bb8-affa-a84a02964642.png)


图案2

![image](https://user-images.githubusercontent.com/98374648/170673297-07ddb365-e6e7-442e-b4d2-60c0686229f8.png)

**加减反弹球**

反弹的随机颜色小球，按“+”好增加一个小球，减号反之

https://user-images.githubusercontent.com/98374648/170676132-c509a558-bcbc-40b8-a6b1-5105e799192c.mp4

**物理反弹球**

模拟一个物理小球抛出的过程，开始给小球设置一个水平初速度和一个垂直初速度，让它在 框内运动，碰撞一次减少部分速度最后停下

https://user-images.githubusercontent.com/98374648/170677641-f6488f2e-130e-46ee-9db7-3510d9c3c958.mp4





