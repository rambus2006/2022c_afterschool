#define _CRT_SECURE_NO_WARNINGS		

#include <stdio.h>

int main(void)
{
	double kg;				//���� ����
	double cm;
	double m;
	double BMI;

	printf("������(kg)�� Ű(cm) �Է� : ");		//�Է¹�
	scanf_s("%lf %lf", &kg, &cm);		//�����Զ� Ű�� �Է�


	m = (cm / 100);				//cm-->�� m�� �ٲ�
	BMI = kg / (m * m);			//bmi ����

	((BMI >= 20) && (BMI < 25.0)) ? printf("ǥ���Դϴ�.\n") : printf("ü�߰����� �ʿ��մϴ�.\n");
	//bmi�� 20.0 �̻� 25.0 �̸��̸� "ǥ���Դϴ�"�� ����ϰ�, �׷��� ������ "ü�߰����� �ʿ��մϴ�"�� ����մϴ�.
	//(���ǽ�)?(��):(�ƴϿ�); �� ����
	//(a>b)?b=1:b=2�� ���·� ��Ÿ�� �� �ִ�.
	//"�߿� : ���ڵ� ������ ���ǿ� ���� �� �ִٴ� ���� �������!!!"

	return 0;
}