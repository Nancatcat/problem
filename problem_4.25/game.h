#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#define EASY_COUNT 10//���������
#define ROW 9//�����ӡ������
#define COL 9//�����ӡ������
#define COLS COL+2//ʵ������
#define ROWS ROW+2//ʵ������
void InitBoard (char board[ROWS][COLS],int row,int col);//��ʼ����������
void DisplayBoard(char board[ROWS][COLS],int row,int col);//��ӡ��������
void SetMine(char board[ROWS][COLS],int row,int col);//���õ���
void FindMine(char board[ROWS][COLS],int row,int col);//�Ų���