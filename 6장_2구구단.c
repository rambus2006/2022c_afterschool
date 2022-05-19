#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 2; i <=9; i++)			//2단부터 9단까지의 단
	{
		for (j = 1; j <= 9; j++)
		{
			printf("%d*%d=%d\n", i,j, i*j);
		}
		printf("==========\n");
	}
	return 0;
}