#include <stdio.h>

int main(void)												//유효 숫자 확인
{
	float ft = 1.23456789012345789;							//유효숫자가 많은 값으로 초기화
	double db = 1.234567890123456789;						

	printf("float형 변수의 값:%20\n", ft);					//소수점이하 20자리까지 출력
	printf("double형 변수의 값:%20If\n", db);

	return 0;
}
