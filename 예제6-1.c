#include  <stdio.h>

int main(void)		//콘솔창 꼭 다 없애고 하기
{
	int a = 1;

	while (a < 10)
	{
		a = a * 2;
	}

	printf("a : %d\n", a);

	return 0;
}