#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//逆序排列后的单词，单词之间由空格分开，最后一个单词后换行。
//I love China	
//China love I
//void Reverse(char* left,char *right)
//{
//	
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	char* left = arr;
//
//	while (*left)
//	{
//		char*Initial = left;
//		char* end = left;
//		while(*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		Reverse(Initial, end - 1);
//		if (*end != '\0')
//		{
//			left=end + 1;
//		}
//		else
//		{
//			left = end;
//		}
//	}
//	int len = strlen(arr);
//	Reverse(arr,arr+len-1);
//	printf("%s\n", arr);
//	return 0;
//}
