#include <stdio.h>

int main(void)
{
	int a = 5;

	if (a % 2 == 0)			//세미콜론 없는것에 주의
							//코드만 짜는 사람은 코더, 알고리즘 짜는 사람을 프로그래머. 프로그래머가 되자
	{
		a = 2;
	}
	else
	{
		a = 1;
	}

	printf("결과 a =%d\n", a);

	return 0;
}