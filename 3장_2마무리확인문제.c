#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	char ch;								//문자를 저장할 변수


	printf("문자입력 : ");					//입력 안내 메세지
	scanf("%c", &ch);						//변수ch에 문자 입력
	printf("%c의 아스키코드값은 %d입니다", ch, ch);

	return 0;
}