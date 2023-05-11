#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//交换两个变量（不创建临时变量）
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
//统计二进制中1的个数
//void Binary(int n)
//{
//	int i = 0;
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)//n%2的余数如果是1；则他的二进制位就是1；
//		{
//			count++;
//		}
//		n = n / 2;//去除已经计算过后的余数
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
//		n& (n - 1);//如果n中有1；必然可以&;当n不能&；则可以认为n中没有1
//		n = (n & (n - 1));
//		count++;//计数n&的次数，&了多少次则代表有几个1；
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
//打印整数二进制的奇数位和偶数位
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
//求两个数二进制中不同位的个数
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