#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void Reverse_arr(char* p1, char* p2)//������
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
	char arr[101] = { 0 };//��������
	gets(arr, 100, stdin);//�����ַ���
	handleEnterAfterBuf(arr);
	char* p = arr;//��¼�����ַ�����ʼλ�õ�ָ�룻
	while (*p != '\0')
	{
		char* p1 = p;//��¼������ʼλ�õ�ָ�룻
		char* p2 = p;//��¼���ʽ���λ�õ�ָ�룻
		while (*p2 != ' ' && *p2 != '\0')
		{
			p2++;
		}
		Reverse_arr(p1, p2-1);//������
		if (*p2 !='\0')
		{
			p = p2 + 1;
		}
		else
		{
			p = p2;
		}
	}

	int len = strlen(arr);//�����ַ�������
	Reverse_arr(arr,arr+len-1);
	printf("%s\n", arr);
	return 0;
}

//void handleEnterAfterBuf(char buf[])//����ȥ��fgets��ȡ�����е�\n
//{   //�ڲ��� buf��ָ����ַ�����������һ�γ����ַ� c��һ���޷����ַ�����λ�� ��ָ��ָ�����λ��
//	char* find = strchr(buf, '\n');  //�ҳ�data�е�"\n"
//	if (find) //ָ��ָ�������滻
//		*find = '\0';   //�滻  
//}
