#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//��Ϸ����
void Game()
{
	printf("********************************\n");
	printf("***********   1.Paly   *********\n");
	printf("********************************\n");
	printf("***********   0.Exet   *********\n");
	printf("********************************\n");

}
//��Ϸ����
void GamePlay()
{	//����ɨ������
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };

    //��������
	IsitBoard(mine, ROWS, COLS, '0');
	//��ʾ����
	IsitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	DisplayBoard(show, ROW, COL);
	//���õ���
	SetMine(mine, ROW, COL);
	/*DisplayBoard(mine, ROW, COL);*/
	//�Ų���
	FindMine(mine, show, ROW, COL);
	


	

}
//������
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//���������
	do
	{
		Game();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)//����ѭ��ѡ��
		{
			case 1:
			{	GamePlay();
				break;
			}
			case 0:
			{	printf("�˳��ɹ�\n");
				printf("\n");
				break;
			}
			default:	
			{	printf("�����������������\n");
				break;
			}
		}
	} while (input);
	return 0;
}