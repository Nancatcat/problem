#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#define EASY_COUNT 10
#define ROW 9
#define COL 9
#define COLS COL+2
#define ROWS ROW+2
void InitBoard (char board[ROWS][COLS],int row,int col);
void DisplayBoard(char board[ROWS][COLS],int row,int col);
void SetMine(char board[ROWS][COLS],int row,int col);
void FindMine(char board[ROWS][COLS],int row,int col);