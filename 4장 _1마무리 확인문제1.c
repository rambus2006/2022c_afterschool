#include <stdio.h>

int main(void)
{
	double a = 4.0, b = 1.2;

	printf("%.1f+%.1f=%f\n", a, b, a + b);		//�Ҽ��� �����ϱ�
	printf("%f + %f = %f\n", a, b, a - b);
	printf("%f*%f= %f", a, b, a * b);
	printf("%f/%f = %f", a, b, a / b);

	return 0;
}
