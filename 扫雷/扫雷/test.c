#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void game()
{
	//������������
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//�����ʼ��
	Initboard(mine, ROWS, COLS,'0');
	Initboard(show, ROWS, COLS,'*');
	//��ӡ����
	//Displayboard(mine, ROW, COL);
	Displayboard(show, ROW, COL);
	//������
	Setmine(mine, ROW, COL);
	//Displayboard(mine, ROW, COL);

	//�Ų���
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
		printf("������:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	
	return 0;
}