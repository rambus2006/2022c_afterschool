#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char name[20];				//이름을 저장할 배열*20바이트만큼 크기 잡는 것 잊지 말기
	int age;					//나이를 저장할 변수
	double ke;					//키를 저장할 변수

	printf("이름 입력 : ");
	scanf("%s", &name);					//배열명으로 이름 입력,&없음
	printf("나이와 키(cm) 입력 : ");
	scanf("%d%lf", &age, &ke);			//중간에 반점쓰지 말것.변환문자를 연속으로 사용하여 입력

	printf("이름 : %s \n 나이 : %d살 키 : %.1lf", name, age, ke); //입력된 값 출력.큰따옴표를 한번에 사용

	return 0;
}