#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void game()
{
	//创建两个数组
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//数组初始化
	Initboard(mine, ROWS, COLS,'0');
	Initboard(show, ROWS, COLS,'*');
	//打印棋盘
	//Displayboard(mine, ROW, COL);
	Displayboard(show, ROW, COL);
	//设置雷
	Setmine(mine, ROW, COL);
	//Displayboard(mine, ROW, COL);

	//排查雷
	Findmine(mine, show, ROW, COL);



}

void menu()
{
	printf("***************************\n");
	printf("*******   1.play   ********\n");
	printf("*******   0.exit   ********\n");
	printf("***************************\n");

}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请输入:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	
	return 0;
}