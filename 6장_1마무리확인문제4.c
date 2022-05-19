

#include <stdio.h>

int main(void)
{
	int i = 0;

	while (i < 5)				//while 형태
	{
		printf("Be happy!\n");
		i++;				//while 문에는 for문에서 탈출 하는 것이 while 문 안에 있음
	}

	return 0;
}