#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = n;//��ʼƿ����
//	while (n>=2)
//	{
//		sum += n / 2;//�ۼ�
//		n = (n / 2) +( n % 2);//�����������������б��ӣ�������������û�У������ñ����������Ѿ���ֵΪ0
//
//	}
//	printf("%d", sum);
//	return 0;
//}
//������
void nume()
{
	printf("*****************************\n");
	printf("*****************************\n");
	printf("**********1.Add   2.Sub******\n");
	printf("**********3.Mul   4.Div******\n");
	printf("**********   0.exet    ******\n");
	printf("*****************************\n");

}
int  Add(int x,int y)//�ӷ�
{
	return ( x + y);
}
int  Sub(int x ,int y)//����
{
	return ( x - y);
}
int  Mul(int x, int y)//�˷�
{
	return(x * y);
}
int  Div(int x,int y)//����
{
	return ( x / y);
}
void class(int (*pf)(int,int))
{
	int x = 0;
	int y = 0;
	printf("������Ҫ���������>");
	scanf("%d %d", &x, &y);
	int ret = pf(x, y);
	printf("%d\n", ret);
 }
//int main()
//{
//	nume();
//	int input = 0;
//	do
//	{
//		
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//		{	class(Add);
//			break;
//		}
//		case 2:
//		{
//			class(Sub);
//			break;
//		}
//		case 3:
//		{
//			class(Mul);
//			break;
//		}
//		case 4:
//		{
//			class(Div);
//			break;
//		}
//		case 0:
//		{
//			printf("�˳��ɹ�\n");
//			break;
//		}
//		default:
//		{
//			printf("ѡ���������������\n");
//		}
//		}
//	} while (input);
//
//		return 0;
//	
//}
//int main()
//{
//	
//	int input = 0;
//	int (*p[])(int,int) = { 0,Add,Sub,Mul,Div };
//	int (*(*p1)[])(int,int)= &p;
//	do {
//		nume();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("�˳��ɹ�\n");
//			break;
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			int x = 0;
//			int y = 0;
//			printf("�����������>");
//			scanf("%d %d", &x, & y);
//			int ret = (*p1)[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("ѡ�������������\n");
//		}
//
//
//	} while (input);
//	return 0;
//
//}
//ð������
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz-1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp =arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] =tmp;
			}
		}
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;

//qsort(void *base ,void sz, void width,int (*)(const void* e1,const void*e2)