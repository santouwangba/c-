#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void Initboard(char board[ROWS][COLS], int rows, int cols,char ret)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = ret;
		}
	}

}
void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-------------------------------\n");
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{	
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-------------------------------\n");

	
}
void Setmine(char mine[ROWS][COLS], int row, int col)
{
	
	int count = 10;
	while (count)
	{
		int x = rand() % 9 + 1;
		int y = rand() % 9 + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

static int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1]+
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0';

}
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//1.�����Ų������
	//2.�������ĺ�����
		//(1)������ף���Ϸ����
		//(2)��������ף�ͳ����Χ�׵ĸ��� ����Ϸ����
	int x = 0;
	int y = 0;
	int win = 0;
	
	while (win<col*row-10)
	{
		printf("�������Ų������:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź�����Ϸ����\n");
				Displayboard(mine, row, col);
				break;
			}
			else
			{
				int count = get_mine_count(mine, row, col);
				show[x][y] = count + '0';
				Displayboard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("���겻�Ϸ�������������\n");
		}
	}
}