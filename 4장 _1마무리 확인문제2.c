#define _CRT_SERCURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int a, b, tot;
	double avg;

	printf("�ΰ����� ���� : ");
	scanf_s("%d%d", &a, &b);			//���� �Է�
	tot = a + b;						//�� ������ ���� ������ ���Ѵ�.
	avg = tot / 2.0;
	//��հ��,tot�� �������̹Ƿ� ������ ���� 2.0�� ���� �Ǽ������� ����ؾ� �Ѵ�.
	//�׷��� ������ �ǿ����ڰ� ��� �������̹Ƿ� ���� ����Ѵ�.


	printf("��� : %.1f\n", avg);

	return 0;

}