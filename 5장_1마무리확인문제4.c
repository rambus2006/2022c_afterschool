#include<stdio.h>

int main(void)
{
	double height = 179.5;			//키를 저장할 변수 선언과 초기화
	double weight = 75.0;			//몸무게를 저장할 변수 선언과 초기화
	if ((187.5 <= height) && (weight < 80))		//키가 187.5이상이고 몸무게가 80미만이면
	{
		printf("OK\n");							//ok출력
	}
	else {
		printf("cancel\n");						//그외의 경우
	}

	return 0;
}