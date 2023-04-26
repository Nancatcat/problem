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
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = x - 1;i <= x + 1;i++)//ͨ��ѭ����������������Χ�Ƿ��е���
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (board[i][j] == '1')
			{
				count++;//����
			}
		}
	}
	return count;
}
void ExplosionSpread(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y, int* pw)
{
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
				}
			}
		}
		else
		{
			(*pw)++;
			show[x][y] = num + '0';//������
		}
	}
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS] ,int row, int col)
{
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
				break;
			}
			else 
			{
				if (mine[x][y] == ' ')
				{
					printf("�������ѱ��Ų飬����������\n");//�ظ�����
					continue;
					
				}
				else//������ȷ������Χ���и���
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
	if (win == row * col - EASY_COUNT)//ʤ������
	{
		system("cls");
		printf("��ϲ�㣬���׳ɹ�!\n");
		DisplayBoard(show, ROW, COL);
		return;
	}

}  

