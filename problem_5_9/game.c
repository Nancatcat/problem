#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//初始化数组
void IsitBoard(char board[ROWS][COLS], int row, int col, char set)
{
	memset(&board[0][0], set, row * col * sizeof(board[0][0]));
}
//打印数组
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	printf("-------扫雷-------\n");
	for (i = 0; i <=col; i++)
	{
		printf("%d ", i);//打印数字标识
	}
	printf("\n");
	for (i = 1; i <=row; i++)//打印行数
	{
		printf("%d ", i);//打印数字标识
		int j = 0;
		for (j = 1; j <=col; j++)//打印列数
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

//设置地雷
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	//设置随机数
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}



int GetMineCount(char mine [ROWS][COLS], int x, int y)
{ 
	int count = 0;
	int i = 0;
	int j = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (mine[i][j] == '1')
			{	count++;
			}
		}
	}
	return count;
}


void ExplosionSpread(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y, int* p)
{

	if (x >= 1 && x <= row && y >= 1 && y <= col)
	{
		int num = GetMineCount(mine, x, y);
		if (num == 0)
		{
			(*p)++;
			show[x][y] = ' ';
			int i = 0;
			int j = 0;
			for (i = x - 1; i <= x + 1; i++)
			{
				for (j = y - 1; j <= y + 1; j++)
				{
					if (show[i][j] == '*')
					{
						ExplosionSpread(mine, show, row, col, i, j, p);
					}
				}
			}
		}
		else
		{
			(*p)++;
			show[x][y] = num + '0';
		}

	}
}
	


//游戏循环
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	int* p = &win;
	while (win < row * col - EASY_COUNT)
	{
		printf("请输入要排查的坐标>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y<= col)
		{
			if (mine[x][y] == '1')
			{
				system("cls");
				printf("对不起，您被炸死了\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else if (mine[x][y] == ' ')
			{
				printf("此坐标已被排查，请重新输入\n");
				continue;
			}
			else
			{
				ExplosionSpread(mine, show, row, col, x, y, p);
				DisplayBoard(show, ROW, COL);
				

			}
		}
		else
		{
			printf("输入错误，请重新输入\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜您，您胜利了\n");
		DisplayBoard(show, ROW, COL);
		return ;
	}

}

