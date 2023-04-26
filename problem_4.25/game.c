#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//初始化函数
void IsitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	memset(&board[0][0], set, rows * cols * sizeof(board[0][0]));
}
//打印数组
void DisplayBoard(char board[ROWS][COLS], int row, int col) 
{
	int i = 0;
	int j = 0;
	printf("-------扫雷--------\n");
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row;i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
			
		}
		printf("\n");
	}
}
void SetMine(char mine[ROWS][COLS], int row, int col)
{
<<<<<<< HEAD
	int count = EASY_COUNT;//获取头文件中地雷的数量
	while (count)//以地雷数量为实际循环
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;//设置随机数安放在棋盘中
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;//成功安放一次减少一次循环次数,直至退出循环
		}
	}
}
int GetMineCount(char board[ROWS][COLS], int x, int y)//地雷计数
=======
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
int GetMineCount(char board[ROWS][COLS], int x, int y)
>>>>>>> 479042ab77c6869aafa2d669b9a0cdfe578a7a7b
{
	int i = 0;
	int j = 0;
	int count = 0;
<<<<<<< HEAD
	for (i = x - 1;i <= x + 1;i++)//通过循环计数输入坐标周围是否有地雷
=======
	for (i = x - 1;i <= x + 1;i++)
>>>>>>> 479042ab77c6869aafa2d669b9a0cdfe578a7a7b
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (board[i][j] == '1')
			{
<<<<<<< HEAD
				count++;//计数
=======
				count++;
>>>>>>> 479042ab77c6869aafa2d669b9a0cdfe578a7a7b
			}
		}
	}
	return count;
}
void ExplosionSpread(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y, int* pw)
{
<<<<<<< HEAD
	if (x >= 1 && x <= row&&y >= 1 && y <= col)//判断输入是否合法
	{
		int num = GetMineCount(mine, x, y);//判断是否循环的变量
		if (num == 0)
		{
			(*pw)++;//胜利条件
			show[x][y] = ' ';//如果没有地雷则赋值空格
			int i = 0;
			int j = 0;
			for (i = x - 1; i <= x + 1; i++)//进入二次循环
			{
				for (j = y - 1; j <= y + 1; j++)
				{
					if (show[i][j] == '*')//递归的限制条件，当周围有地雷时，停止跳出
						ExplosionSpread(mine, show, row, col, i, j, pw);//通过递归函数本身不服按判定周围情况
=======
	if (x >= 1 && x <= row&&y >= 1 && y <= col)
	{
		int num = GetMineCount(mine, x, y);
		if (num == 0)
		{
			(*pw)++;
			show[x][y] = ' ';
			int i = 0;
			int j = 0;
			for (i = x - 1; i <= x + 1; i++)
			{
				for (j = y - 1; j <= y + 1; j++)
				{
					if (show[i][j] == '*')
						ExplosionSpread(mine, show, row, col, i, j, pw);
>>>>>>> 479042ab77c6869aafa2d669b9a0cdfe578a7a7b
				}
			}
		}
		else
		{
			(*pw)++;
<<<<<<< HEAD
			show[x][y] = num + '0';//地雷数
=======
			show[x][y] = num + '0';
>>>>>>> 479042ab77c6869aafa2d669b9a0cdfe578a7a7b
		}
	}
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS] ,int row, int col)
{
<<<<<<< HEAD
	int x = 0;//玩家输入的行数
	int y = 0;//玩家输入的列数
	int win = 0;
	int* pw = &win;//设置胜利条件，且把创建存放在指针内
	while (win < row * col - EASY_COUNT)//胜利条件为行数*列数-10（地雷数）
	{
		printf("请输入要排查的坐标>");
		scanf("%d %d", &x, &y);//输入
		
		if (x >= 1 && x <= row || y >= 1 && y <= col)//判断输入是否合法
		{
			if (mine[x][y] == '1')//当输入坐标有地雷
			{
				system("cls");//清空屏幕
				printf("很遗憾，你被炸死了！\n");
				DisplayBoard(mine, ROW, COL);	//打印地雷棋盘		
=======
	int x = 0;
	int y = 0;
	int win = 0;
	int* pw = &win;
	while (win < row * col - EASY_COUNT)
	{
		printf("请输入要排查的坐标>");
		scanf("%d %d", &x, &y);
		
		if (x >= 1 && x <= row || y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				system("cls");
				printf("很遗憾，你被炸死了！\n");
				DisplayBoard(mine, ROW, COL);			
>>>>>>> 479042ab77c6869aafa2d669b9a0cdfe578a7a7b
				break;
			}
			else 
			{
				if (mine[x][y] == ' ')
				{
<<<<<<< HEAD
					printf("此坐标已被排查，请重新输入\n");//重复输入
					continue;
					
				}
				else//输入正确，且周围还有格子
=======
					printf("此坐标已被排查，请重新输入\n");
					continue;
					
				}
				else
>>>>>>> 479042ab77c6869aafa2d669b9a0cdfe578a7a7b
				{
					ExplosionSpread(mine,show, row, col, x, y, pw);
					DisplayBoard(show, ROW, COL);
				}
			}
		}
		else
		{
			printf("输入错误，请重新输入!\n");

		}
	}
<<<<<<< HEAD
	if (win == row * col - EASY_COUNT)//胜利条件
=======
	if (win == row * col - EASY_COUNT)
>>>>>>> 479042ab77c6869aafa2d669b9a0cdfe578a7a7b
	{
		system("cls");
		printf("恭喜你，排雷成功!\n");
		DisplayBoard(show, ROW, COL);
		return;
	}

}  

