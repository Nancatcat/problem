#define _CRT_SECURE_NO_WARNINGS 1
//ͷ�ļ��İ���
#include<stdio.h>
#include<string.h>
#include<time.h>

#include <stdlib.h>
#define ROW 3
#define COL 3
//��������
 void Initboard(char board[ROW][COL], int row, int col);
 void PlayerMove(char board[ROW][COL], int row, int col);
 void ComputerMove(char board[ROW][COL], int row, int col);
 char IsWin(char board[ROW][COL], int row, int col);
 void Displayboard(char board[ROW][COL], int row, int col);