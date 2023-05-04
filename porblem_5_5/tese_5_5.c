#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int x = 0;
//	int y = 0;	
//	int count = 0;
//	scanf("%d %d,", &x, &y);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((x >> i) != (y >> i)) {
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
// int main()
//{
//	int x = 0;
//	int y = 0;
//	int count = 0;
//	scanf("%d %d,", &x, &y);
//	int i = x^y;//^相同为零，相异为一
//	while (i)
//	{
//		i = i & (i - 1);
//		count++;
//	}
//
//	printf("%d\n", count);
//	return 0;
//}
//for循环计算
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d", &n);
//	for (i = 0; i < 32; i++)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	printf("%d", count);
//}
// //用&计算
//int main() 
//{
//	unsigned int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1 == 1))
//		{
//			count++;
//		}
//
//	}
//	printf("%d", count);
//	return 0;
//}
//神奇算法
//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", & n);
//	while (n)
//	{
//		n = ((n - 1) & n);
//		count++;
//		
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i =30; i >=0; i-=2)
//	{
//		printf("%d ", (n >> i & 1));
//	}
//	printf("\n");
//	for (i = 31; i >=1; i -= 2)
//	{
//		printf("%d ", (n >> i & 1));
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//				{
//					printf("*");
//				}
//				else if(i + j == n - 1)
//				{
//					printf("*");
//				}
//				else
//				{
//				printf(" ");
//}
//			}
//			printf("\n");
//		}
//	}
//	
//	return 0;
//}
//int year(int n)
//
//{
//	return  ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0));
//	
//}
//int main()
//{
//	int y = 0;
//	int n = 0;
//	int r = 0;
//	int day[13] = { 0,31,28,31,30,31,30,31,30,31,30,31,30 };
//	while (scanf("%d %d", &n, &y) == 2)
//	{
//		int r = *(day+y);//这里也可以写成r=day[y]
//		if (year(n) == 1&&y==2)
//		{
//			r++;
//		}
//		printf("%d\n", r);
//	}
//	return 0;
//}