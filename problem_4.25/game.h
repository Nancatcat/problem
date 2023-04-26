#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

<<<<<<< HEAD
#define EASY_COUNT 10//定义地雷数
#define ROW 9//定义打印的行数
#define COL 9//定义打印的列数
#define COLS COL+2//实际行数
#define ROWS ROW+2//实际列数
void InitBoard (char board[ROWS][COLS],int row,int col);//初始化棋盘数组
void DisplayBoard(char board[ROWS][COLS],int row,int col);//打印棋盘数组
void SetMine(char board[ROWS][COLS],int row,int col);//布置地雷
void FindMine(char board[ROWS][COLS],int row,int col);//排查雷
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
