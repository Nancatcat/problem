#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����������������������ʱ������
//void SWaP(int x, int y)
//{
//	x = x ^ y;
//	y = x ^ y;
//	x = x ^ y;
//	printf("%d %d", x, y);
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	SWaP(x, y);
//	return 0;
//}
// 
//ͳ�ƶ�������1�ĸ���
//void Binary(int n)
//{
//	int i = 0;
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)//n%2�����������1�������Ķ�����λ����1��
//		{
//			count++;
//		}
//		n = n / 2;//ȥ���Ѿ�������������
//	}
//	printf("%d", count);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Binary(n);
//	return 0;
//}
//void Binary(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (n & (1 << i))
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Binary(n);
//	return 0;
//} 
//void Binary(int	n)
//{
//	int i = 0;
//	int count = 0;
//	while (n)
//	{
//		n& (n - 1);//���n����1����Ȼ����&;��n����&���������Ϊn��û��1
//		n = (n & (n - 1));
//		count++;//����n&�Ĵ�����&�˶��ٴ�������м���1��
//		
//	}
//	printf("%d", count);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Binary(n);
//	return  0;
//}
//��ӡ���������Ƶ�����λ��ż��λ
//void Binary(int n)
//{
//	int i = 0;
//	for (i=30; i>=0; i-=2)
//	{
//		
//		printf("%d", 1 & (n >> i));
//	}
//	printf("\n");
//	for (i=31; i >=1; i -= 2)
//	{
//		
//		printf("%d", 1 & (n >> i));
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Binary(n);
//	return 0;
//}
//���������������в�ͬλ�ĸ���
//void Binary(int	n,int m)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n & (1 << i))!= (m & (1 << i)))
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n,&m);
//	Binary(n,m);
//	return  0;
//}