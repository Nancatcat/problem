#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void Reverse_arr(char* p1, char* p2)//倒序函数
{
	while (p1 < p2)
	{
		char tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;
		p1++;
		p2--;
	}
}
void handleEnterAfterBuf(char buf[])
{
	char* p = strchr(buf, '\n');
		if(p)
		{
			*p = '\0';
		
		}
}
int main()
{
	char arr[101] = { 0 };//创建数组
	gets(arr, 100, stdin);//输入字符串
	handleEnterAfterBuf(arr);
	char* p = arr;//记录整个字符串起始位置的指针；
	while (*p != '\0')
	{
		char* p1 = p;//记录单词起始位置的指针；
		char* p2 = p;//记录单词结束位置的指针；
		while (*p2 != ' ' && *p2 != '\0')
		{
			p2++;
		}
		Reverse_arr(p1, p2-1);//倒序函数
		if (*p2 !='\0')
		{
			p = p2 + 1;
		}
		else
		{
			p = p2;
		}
	}

	int len = strlen(arr);//计算字符串长度
	Reverse_arr(arr,arr+len-1);
	printf("%s\n", arr);
	return 0;
}

//void handleEnterAfterBuf(char buf[])//用于去除fgets读取数据中的\n
//{   //在参数 buf所指向的字符串中搜索第一次出现字符 c（一个无符号字符）的位置 将指针指向这个位置
//	char* find = strchr(buf, '\n');  //找出data中的"\n"
//	if (find) //指针指向内容替换
//		*find = '\0';   //替换  
//}
