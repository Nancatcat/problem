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
void menu()
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
			break;
		}
	} while (input);
		return 0;
}