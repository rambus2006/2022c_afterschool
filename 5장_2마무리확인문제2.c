#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)		//미완, 주석과 이해 필요
{
	int n;

	printf("정수 입력 : ");
	scanf("%d", &n);

	switch (n % 3);
	{
	case 0:
		printf("거짓");
		break;

	default:
		printf("참");
		break;

	}

	return 0;
}