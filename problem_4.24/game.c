#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("*******************\n");
	printf("******1.paly*******\n");
	printf("******0.exit*******\n");
	printf("*******************\n");
}
void game()
{
	int ret = 0;
	//存放数据需要一个二维数组
	char board[ROW][COL] = {0};
	//初始化棋盘
	Initboard(board, ROW, COL);
	//显示棋盘
	Displayboard(board, ROW, COL);
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		//显示棋盘
		Displayboard(board, ROW, COL);
		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		
		//电脑下棋
		ComputerMove(board, ROW, COL);
		//显示棋盘
		Displayboard(board, ROW, COL);
		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
		
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
		
	}
	else if (ret == 'Q')
	{
		printf("平局\n");
		
	}
}
int main()
{
	int i = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择>");
		scanf("%d", &i);
		switch (i)
		{
			int i = 0;
			scanf("%d", &i);
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}

	} while (i);

	return 0;
}