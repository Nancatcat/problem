#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int i = 0;
//    int j = 0;
//    scanf("%d %d", &n, &m);
//    int arr1[1000] = { 0 };
//    int arr2[1000] = { 0 };
//    for (i = 0; i < n; i++)
//     {
//        scanf("%d", &arr1[i]);
//     }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    int arr3[1000] = { 0 };
//    for (i = 0; i < n + m; i++)
//    {     
//        if (i < n)
//        {
//           arr3[i] = arr1[i];
//        }
//        if (i >= n)
//        {
//            arr3[i] = arr2[i-n];
//        }
//       
//    }
//    for (i = 0; i < (n + m) - 1; i++)
//    {
//        for (j = 0; j < (n + m) - i - 1; j++)
//        {
//            if (arr3[j] > arr3[j + 1])
//            {
//                int tmp = arr3[j];
//                arr3[j] = arr3[j + 1];
//                arr3[j + 1] = tmp;
//            }
//        }
//
//    }
//    for (i = 0; i < n + m; i++)
//    {
//        printf("%d ", arr3[i]);
//    }
//
//    return 0;
//}
//输入一个整数序列，判断是否是有序序列，有序，指序列中的整数从小到大排序或者从大到小排序(相同元素也视为有序)。
//输出为一行，如果序列有序输出sorted，否则输出unsorted。

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10] = { 0 };
//	int i = 0;
//	int flang1 = 0;
//	int flang2 = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		if (arr[i] <= arr[i + 1])
//		{
//			flang1++;
//		}
//		if (arr[i] >= arr[i + 1])
//		{
//			flang2++;
//		}
//	}
//	if (flang1 == (n-1))
//	{
//		printf("sorted\n");
//	}
//	else if (flang2 == (n - 1))
//	{
//		printf("sorted\n");
//	}
//	
//	else 
//	{
//		printf("unsorted\n");
//	}
//	return 0;
//}
//KiKi想获得某年某月有多少天，请帮他编程实现。输入年份和月份，计算这一年这个月有多少天。
//int Add(int y)
//{
//	return ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0));
//}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (scanf("%d %d", &year, &month) != EOF)
//	{
//		int ret = Add(year);
//		if (month == 2 && ret == 1)
//		{
//			printf("%d\n", day[month] + 1);
//		}
//		else
//		{
//			printf("%d\n", day[month]);
//		}
//	}
//
//
//	return 0;
//}
int main()
{	//arr为岛，未知人数为n，假设有100个人，即arr[100]已知最少有一个蓝眼睛即a>0,每天只有一班船票，
	int arr[100];
	int a = n;
	int day = 0;
	while (a > 0)
	{
		if (a == 1)
		{
			day = 1;//当蓝眼睛看了所有人发现都不是蓝眼睛后，又因为必定有n个蓝眼睛，即会意识到自己是蓝眼睛，所以即day=1
		}
		if (a == 2)//当蓝眼睛发现有蓝眼睛后，双方都认为对方会上船，但当第二天发现没有上船切周围没有其他蓝眼睛，则自己也是蓝眼睛，所以a=1+1,
		{
			day = (a-1) + 1;
		}
		if(a==3)//同理当蓝眼睛发现有蓝眼睛后，双方都认为对方会上船，但当第二天发现没有上船，则自己也是蓝眼睛，所以a=1+1,
		{

	}
	}
}


//已知最少有一个蓝眼睛
a > 0;
a==1
//当周围没有蓝眼睛时切蓝眼睛必定大于0时，
//这个判断的意思是周围没有蓝眼睛（0），
//自己必定会忽视自己是蓝眼睛（-1），
//当周围没有蓝眼睛切必定有蓝眼睛时+1，自己认识到了自己是蓝眼睛
b = (1-1)+1;
//由此可得公式 当a==2时，
//首先必定发现周围有一个（1），切自己会忽视自己（-1），当第二天没有人上船时+1
//且周围没有新增加蓝眼睛，则自己是蓝眼睛（+1），即
b=(2-1)+1
//a==3时
b = (3- 1)+1 + 1;