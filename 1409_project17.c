#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_multiplication_table(int num);

//���ͳ� ���� ǰ
int main(void)
{
	int num;

	printf("���ϴ� �������� �Է��ϼ��� : ");
	scanf_s("%d", &num);
	print_multiplication_table(num);

	return 0;
}

void print_multiplication_table(int num)
{
	int a;
	for (a = 1; a <= 9; a+=1)
	{
		printf("%d*%d = %d\n", num, a, num * a);
	}
}