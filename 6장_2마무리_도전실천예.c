#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, j, count = 0;
	int prime;
	int inputNum;

		printf("2 �̻� ������ �Է��ϼ��� : ");
		scanf("%d", &inputNum);

	for (i = 2; i <=inputNum; i++)
	{
		prime = 1;
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				prime = 0;
				break;
			}
		}
		
		if (prime == 1) {
			printf("%d\t", i);
			count++;
			if (count == 5) {
				printf("\n");
				count = 0;
			}
		}
	}
		return 0;
}