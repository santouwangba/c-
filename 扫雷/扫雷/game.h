#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#include<stdlib.h>
#include<time.h>
//初始化数组
void Initboard(char board[ROWS][COLS], int rows, int cols,char ret);

//打印棋盘
void Displayboard(char board[ROWS][COLS], int row, int col);
//设置雷
void Setmine(char mine[ROWS][COLS], int row, int col);
//排查雷
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);