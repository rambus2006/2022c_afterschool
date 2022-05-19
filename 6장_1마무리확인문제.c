
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 0;


	do
	{

		printf("원하는 숫자를 입력하세요");
		scanf("%d", &a);

	} while (a < 10);

	printf("프로그램을 종료하세요");

	return 0;
}