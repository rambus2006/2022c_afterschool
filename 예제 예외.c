#include <stdio.h>



int main(void)
{
	int minus(x, y);				//�Լ� ����

	int a = 30, b = 20;				//
	int result;

	result = minus(a, b);			//minus ȣ��,�Ʒ��� result ���� �� ���� result �� ����Ǿ� ��.
	printf("result : %d\n", result);

	return 0;
}
int minus(int x, int y)			//minus����
{
	int result;

	result = x - y;

	return result;			//result �� ���� result���� ���ư�
}