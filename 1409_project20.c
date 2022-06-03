#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int a, int b);
int minus(int a, int b);
int multiple(int a, int b);
int divide(int a, int b);

int main(void)
{
	int num1 = 0, num2 = 0, res = 0;
	char op;

	printf("사칙연산 입력(정수) : ");
	scanf_s("%d %c %d", &num1, &op, &num2);


	printf("%d %c %d = %d\n", num1, op, num2, res);
	return 0;

}

int sum(int a, int b)
{
	
}