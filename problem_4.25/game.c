#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//��ʼ������
void IsitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	memset(&board[0][0], set, rows * cols * sizeof(board[0][0]));
}
//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col) 
{
	int i = 0;
	int j = 0;
	printf("-------ɨ��--------\n");
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
	int count = EASY_COUNT;//��ȡͷ�ļ��е��׵�����
	while (count)//�Ե�������Ϊʵ��ѭ��
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;//���������������������
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;//�ɹ�����һ�μ���һ��ѭ������,ֱ���˳�ѭ��
		}
	}
}
int GetMineCount(char board[ROWS][COLS], int x, int y)//���׼���
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
	for (i = x - 1;i <= x + 1;i++)//ͨ��ѭ����������������Χ�Ƿ��е���
=======
	for (i = x - 1;i <= x + 1;i++)
>>>>>>> 479042ab77c6869aafa2d669b9a0cdfe578a7a7b
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (board[i][j] == '1')
			{
<<<<<<< HEAD
				count++;//����
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
	if (x >= 1 && x <= row&&y >= 1 && y <= col)//�ж������Ƿ�Ϸ�
	{
		int num = GetMineCount(mine, x, y);//�ж��Ƿ�ѭ���ı���
		if (num == 0)
		{
			(*pw)++;//ʤ������
			show[x][y] = ' ';//���û�е�����ֵ�ո�
			int i = 0;
			int j = 0;
			for (i = x - 1; i <= x + 1; i++)//�������ѭ��
			{
				for (j = y - 1; j <= y + 1; j++)
				{
					if (show[i][j] == '*')//�ݹ����������������Χ�е���ʱ��ֹͣ����
						ExplosionSpread(mine, show, row, col, i, j, pw);//ͨ���ݹ麯�����������ж���Χ���
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
			show[x][y] = num + '0';//������
=======
			show[x][y] = num + '0';
>>>>>>> 479042ab77c6869aafa2d669b9a0cdfe578a7a7b
		}
	}
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS] ,int row, int col)
{
<<<<<<< HEAD
	int x = 0;//������������
	int y = 0;//������������
	int win = 0;
	int* pw = &win;//����ʤ���������ҰѴ��������ָ����
	while (win < row * col - EASY_COUNT)//ʤ������Ϊ����*����-10����������
	{
		printf("������Ҫ�Ų������>");
		scanf("%d %d", &x, &y);//����
		
		if (x >= 1 && x <= row || y >= 1 && y <= col)//�ж������Ƿ�Ϸ�
		{
			if (mine[x][y] == '1')//�����������е���
			{
				system("cls");//�����Ļ
				printf("���ź����㱻ը���ˣ�\n");
				DisplayBoard(mine, ROW, COL);	//��ӡ��������		
=======
	int x = 0;
	int y = 0;
	int win = 0;
	int* pw = &win;
	while (win < row * col - EASY_COUNT)
	{
		printf("������Ҫ�Ų������>");
		scanf("%d %d", &x, &y);
		
		if (x >= 1 && x <= row || y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				system("cls");
				printf("���ź����㱻ը���ˣ�\n");
				DisplayBoard(mine, ROW, COL);			
>>>>>>> 479042ab77c6869aafa2d669b9a0cdfe578a7a7b
				break;
			}
			else 
			{
				if (mine[x][y] == ' ')
				{
<<<<<<< HEAD
					printf("�������ѱ��Ų飬����������\n");//�ظ�����
					continue;
					
				}
				else//������ȷ������Χ���и���
=======
					printf("�������ѱ��Ų飬����������\n");
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
			printf("�����������������!\n");

		}
	}
<<<<<<< HEAD
	if (win == row * col - EASY_COUNT)//ʤ������
=======
	if (win == row * col - EASY_COUNT)
>>>>>>> 479042ab77c6869aafa2d669b9a0cdfe578a7a7b
	{
		system("cls");
		printf("��ϲ�㣬���׳ɹ�!\n");
		DisplayBoard(show, ROW, COL);
		return;
	}

}  

