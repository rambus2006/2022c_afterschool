#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int check_prime(int n);


int main(void)
{
	int number, repeat;
	int n;

	printf("2�̻��� ������ �Է��ϼ��� : ");
	scanf_s("%d", &number);
	repeat = check_prime(n);

}

int check_prime(int n)
{
	
	int number=0;
	if (number / 2 == 0) {
		printf("�Ҽ��� �ƴմϴ�.");
	}
	else
	{
		printf("�Ҽ��Դϴ�.");
	}
}