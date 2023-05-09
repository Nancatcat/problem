#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//游戏界面
void Game()
{
	printf("********************************\n");
	printf("***********   1.Paly   *********\n");
	printf("********************************\n");
	printf("***********   0.Exet   *********\n");
	printf("********************************\n");

}
//游戏函数
void GamePlay()
{	//创建扫雷数组
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };

    //隐藏数组
	IsitBoard(mine, ROWS, COLS, '0');
	//显示数组
	IsitBoard(show, ROWS, COLS, '*');
	//打印数组
	DisplayBoard(show, ROW, COL);
	//设置地雷
	SetMine(mine, ROW, COL);
	/*DisplayBoard(mine, ROW, COL);*/
	//排查雷
	FindMine(mine, show, ROW, COL);
	


	

}
//主程序
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//生成随机数
	do
	{
		Game();
		printf("请选择>");
		scanf("%d", &input);
		switch (input)//控制循环选择
		{
			case 1:
			{	GamePlay();
				break;
			}
			case 0:
			{	printf("退出成功\n");
				printf("\n");
				break;
			}
			default:	
			{	printf("输入错误。请重新输入\n");
				break;
			}
		}
	} while (input);
	return 0;
}