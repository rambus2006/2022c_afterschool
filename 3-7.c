#define _CRT _SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>						//문자열을 다룰 수 있는 string.h 헤더파일 포함

int main(void)							//char 배열에 문자열 복사
{
	char fruit[20] = "strawberry";		//strawberry로 초기화

	printf("%s\n", fruit);				//strawberry 출력
	strcpy(fruit, "banana");			//fruit에 banana복사
	printf("%s\n", fruit);				//banana출력

	return 0;
}
