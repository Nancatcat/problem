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
	//���������Ҫһ����ά����
	char board[ROW][COL] = {0};
	//��ʼ������
	Initboard(board, ROW, COL);
	//��ʾ����
	Displayboard(board, ROW, COL);
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		//��ʾ����
		Displayboard(board, ROW, COL);
		//�ж���Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		
		//��������
		ComputerMove(board, ROW, COL);
		//��ʾ����
		Displayboard(board, ROW, COL);
		//�ж���Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
		
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
		
	}
	else if (ret == 'Q')
	{
		printf("ƽ��\n");
		
	}
}
int main()
{
	int i = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &i);
		switch (i)
		{
			int i = 0;
			scanf("%d", &i);
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}

	} while (i);

	return 0;
}