#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void)								//scanf함수를 사용한 키보드 입력
{
	int a;

	scanf("%d", &a);						//변수a에 값 입력
	printf("입력된 값:%d\n", a);			//입력한 값 줄력

	return 0;
}