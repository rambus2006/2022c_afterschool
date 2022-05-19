#include <stdio.h>

int main(void)
{
	int res;		//결과변수

	res = sizeof(short) > sizeof(long);
	//sizeof의 피연산자로 자료형이름을 사용하여 크기를 바이트 단위로 계산한다.
	//short형의 크기가long형보다 크면 참이므로 1,그렇지 않으면 0을 res에 저장한다.

	printf("%s", (res == 1) ? "short" : "long");
	//res가 1과 같
	return 0;
}