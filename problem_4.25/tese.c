#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//������
void Game()
{	//��ŵ���
	char mine[ROWS][COLS] = { 0 };
	//�Ų������
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	IsitBoard(mine, ROWS, COLS,'0');
	IsitBoard(show, ROWS, COLS,'*');
	//��ӡ����
	DisplayBoard(show, ROW, COL);
	// ���õ���
	SetMine(mine, ROW, COL);
	//�Ų���
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
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//��Ϸ����
			Game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
		return 0;
}