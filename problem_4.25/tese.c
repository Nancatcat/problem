#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//主程序
void Game()
{	//存放地雷
	char mine[ROWS][COLS] = { 0 };
	//排查出地雷
	char show[ROWS][COLS] = { 0 };
	//初始化棋盘
	IsitBoard(mine, ROWS, COLS,'0');
	IsitBoard(show, ROWS, COLS,'*');
	//打印棋盘
	DisplayBoard(show, ROW, COL);
	// 布置地雷
	SetMine(mine, ROW, COL);
	//排查雷
	FindMine(mine, show, ROW, COL);
    
	
}
<<<<<<< HEAD
void menu()//游戏菜单
=======
void menu()
>>>>>>> 479042ab77c6869aafa2d669b9a0cdfe578a7a7b
{
	printf("**************************\n");
	printf("**************************\n");
	printf("*******1.paay  0.exit*****\n");
	printf("**************************\n");
	printf("**************************\n");

}
int main()
{
	int input = 0;
<<<<<<< HEAD
	srand((unsigned int)time(NULL));//设置随机数
	do
	{
		menu();//调用游戏菜单
		printf("请选择>");//输出选择话语
		scanf("%d", &input);//输入选择
		switch (input)//选择分支
		{
		case 1:
			//游戏函数
			Game();//调用游戏函数
			break;
		case 0:
			printf("退出游戏\n");//退出游戏
			break;
		default:
			printf("输入错误，请重新输入\n");//重新循环
=======
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//游戏函数
			Game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
>>>>>>> 479042ab77c6869aafa2d669b9a0cdfe578a7a7b
			break;
		}
	} while (input);
		return 0;
}