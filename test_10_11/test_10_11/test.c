#define __CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
	int k = 0;
	int j = 0;
	for (j = 2; j <=sqrt(n); j++)
	{
		if (n % j == 0)
		{
			k = 0;
			break;
		}
		
	}
	if (j>sqrt(n))
	{
		k = 1;
	}
	return k;
}

int main()
{
	int k = 0;
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i=i+2)
	{
		if (k=is_prime(i) == 1)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf(" \n%d", count);
	return 0;
}