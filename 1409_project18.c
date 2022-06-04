#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int check_prime(int n);


int main(void)
{
	int number, repeat;
	int n;

	printf("2이상의 정수를 입력하세요 : ");
	scanf_s("%d", &number);
	repeat = check_prime(n);

}

int check_prime(int n)
{
	
	int number=0;
	if (number / 2 == 0) {
		printf("소수가 아닙니다.");
	}
	else
	{
		printf("소수입니다.");
	}
}