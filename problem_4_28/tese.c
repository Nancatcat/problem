#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void Blubble(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for(j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//
//	}
//	
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0;i < 10; i++)
//	{	
//		scanf("%d", &arr[i]);
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Blubble(arr,sz);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//int Mystrlen(char * str)
//{
//	int ret = 0;
//	while (*str != '\0')
//	{
//		ret++;
//		str++;
//	}
//	return ret;
//}
//void reverse(char *str)
//{
//	char tmp = *str;
//	int len = Mystrlen(str);
//	*str = *(str + len - 1); 
//	*(str + len - 1) = '\0';
//	if (Mystrlen(str + 1) >= 2)
//		reverse(str + 1);
//	*(str + len - 1) = tmp;
//	
//} 
//int main()
//{
//	char arr[] = "abcdef";
//	reverse(arr);
//	printf("%s", arr);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < 32; i++)
//	{	
//		if (((n >> i)&1)==1)
//		{
//			ret++;
//		}
//
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			ret++;
//		}
//		n=n / 2;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 0;
//	while (n)
//	{
//		ret++;
//		n = n &n - 1;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//
