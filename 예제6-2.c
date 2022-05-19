#include <stdio.h>

int main(void)
{
	int a = 1;				//변수를 선언하고 1로 초기화
	int i;					//

	for (i = 0; i < 3; i++)
	{
		a = a * 2;
	}
	printf("a : %d\n", a);

	return 0;
}