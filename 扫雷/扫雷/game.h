#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#include<stdlib.h>
#include<time.h>
//��ʼ������
void Initboard(char board[ROWS][COLS], int rows, int cols,char ret);

//��ӡ����
void Displayboard(char board[ROWS][COLS], int row, int col);
//������
void Setmine(char mine[ROWS][COLS], int row, int col);
//�Ų���
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);