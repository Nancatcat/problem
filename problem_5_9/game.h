#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<time.h>


#define ROW 9
#define COL	9
#define ROWS  ROW+2
#define COLS COL+2
#define EASY_COUNT 10//定义地雷数


//初始化数组
void IsitBoard(char board[ROWS][COLS],int row,int col ,char set);
//打印数组
void DisplayBoard(char board[ROWS][COLS], int row, int col);
//设置地雷
void SetMine(char board[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);