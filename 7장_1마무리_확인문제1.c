#include <stdio.h>

double average(double a, double b);			//average�Լ� ����

int main(void)
{
	double res;								//��ȯ���� ������ ���� ����
	res = average(1.5, 3.4);
	printf("�� �Ǽ��� ��� : %.2lf\n", res);

	return 0;
}

double average(double a, double b)		//�� ���� �� �� �� ���� ����.
{
	double temp;
	temp = a + b;
	return(temp/2.0);
}