#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//��ʼ������
void IsitBoard(char board[ROWS][COLS], int row, int col, char set)
{
	memset(&board[0][0], set, row * col * sizeof(board[0][0]));
}
//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	printf("-------ɨ��-------\n");
	for (i = 0; i <=col; i++)
	{
		printf("%d ", i);//��ӡ���ֱ�ʶ
	}
	printf("\n");
	for (i = 1; i <=row; i++)//��ӡ����
	{
		printf("%d ", i);//��ӡ���ֱ�ʶ
		int j = 0;
		for (j = 1; j <=col; j++)//��ӡ����
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

//���õ���
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	//���������
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
	


//��Ϸѭ��
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	int* p = &win;
	while (win < row * col - EASY_COUNT)
	{
		printf("������Ҫ�Ų������>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y<= col)
		{
			if (mine[x][y] == '1')
			{
				system("cls");
				printf("�Բ�������ը����\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else if (mine[x][y] == ' ')
			{
				printf("�������ѱ��Ų飬����������\n");
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
			printf("�����������������\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ������ʤ����\n");
		DisplayBoard(show, ROW, COL);
		return ;
	}

}

