#include <stdio.h>



int main(void)
{
	int minus(x, y);				//함수 선언

	int a = 30, b = 20;				//
	int result;

	result = minus(a, b);			//minus 호출,아랴의 result 값이 이 줄의 result 에 복사되어 들어감.
	printf("result : %d\n", result);

	return 0;
}
int minus(int x, int y)			//minus실행
{
	int result;

	result = x - y;

	return result;			//result 가 위의 result으로 돌아감
}