#define _CRT_SECURE_N0_WARNINGS

#include <stdio.h>

int main(void)
{
	int num1 = 0, num2 = 0, res = 0;
	char c;

	printf("사칙연산 입력 : ");
	scanf("%d %c %d", &num1, &c, &num2);		//실행이 안됨

	swich(c)
	{
	case'+':
		res = num1 + num2;
		break;
	case2:
		res = (num1 - num2);
		break;
	case3:
		res = (num1 * num2);
		break;
	case4:
		res = (num1 / num2);
		break;
	}
	printf("%d %c %d = %d", num1, c, num2, res);

	return 0;

}