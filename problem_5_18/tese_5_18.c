#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = n;//起始瓶子数
//	while (n>=2)
//	{
//		sum += n / 2;//累加
//		n = (n / 2) +( n % 2);//如果又余数，则代表还有饼子，相加起来，如果没有，则正好被整除或者已经赋值为0
//
//	}
//	printf("%d", sum);
//	return 0;
//}
//计算器
void nume()
{
	printf("*****************************\n");
	printf("*****************************\n");
	printf("**********1.Add   2.Sub******\n");
	printf("**********3.Mul   4.Div******\n");
	printf("**********   0.exet    ******\n");
	printf("*****************************\n");

}
int  Add(int x,int y)//加法
{
	return ( x + y);
}
int  Sub(int x ,int y)//减法
{
	return ( x - y);
}
int  Mul(int x, int y)//乘法
{
	return(x * y);
}
int  Div(int x,int y)//除法
{
	return ( x / y);
}
void class(int (*pf)(int,int))
{
	int x = 0;
	int y = 0;
	printf("请输入要计算的数字>");
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
//		printf("请选择>");
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
//			printf("退出成功\n");
//			break;
//		}
//		default:
//		{
//			printf("选择错误，请重新输入\n");
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
//		printf("请选择>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出成功\n");
//			break;
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			int x = 0;
//			int y = 0;
//			printf("请输入操作数>");
//			scanf("%d %d", &x, & y);
//			int ret = (*p1)[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("选择错误，重新输入\n");
//		}
//
//
//	} while (input);
//	return 0;
//
//}
//冒泡排序
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