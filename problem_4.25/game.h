#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

<<<<<<< HEAD
#define EASY_COUNT 10//���������
#define ROW 9//�����ӡ������
#define COL 9//�����ӡ������
#define COLS COL+2//ʵ������
#define ROWS ROW+2//ʵ������
void InitBoard (char board[ROWS][COLS],int row,int col);//��ʼ����������
void DisplayBoard(char board[ROWS][COLS],int row,int col);//��ӡ��������
void SetMine(char board[ROWS][COLS],int row,int col);//���õ���
void FindMine(char board[ROWS][COLS],int row,int col);//�Ų���
=======
#define EASY_COUNT 10
#define ROW 9
#define COL 9
#define COLS COL+2
#define ROWS ROW+2
void InitBoard (char board[ROWS][COLS],int row,int col);
void DisplayBoard(char board[ROWS][COLS],int row,int col);
void SetMine(char board[ROWS][COLS],int row,int col);
void FindMine(char board[ROWS][COLS],int row,int col);
>>>>>>> 479042ab77c6869aafa2d669b9a0cdfe578a7a7b
