#include<stdio.h>

int main(void)
{
	int snack;		//���ڿ� ������ ���� ����
	int candy;
	int money;		//�� �ݾ״��� ������ ���� ����
	int main;		//500��
	int main2;		//100��
	int main3;		//50�� 

	snack = (2 * 70);
	printf("���� ��ü �ݾ� : %d ��\n", snack);
	candy = (3 * 30);
	printf("���� ��ü �ݾ� : %d ��\n", candy);
	money = (snack++) + (candy++);
	money = (1000 - money);
	printf_s("�Ž����� : %d ��\n ", money);		//�Ž�����


	printf_s("===== �Ž����� ������ �ּ� ����=====\n ");		//����
	main = (money / 500);
	printf_s("500�� : %d ", main);

	main = (money % 500 / 100);
	printf_s("100�� : %d ", main);

	main2 = (money % 500 % 100 / 50);
	printf_s("50�� : %d	", main2);

	main3 = (money % 500 % 100 % 50 / 10);
	printf_s("10�� : %d	", main3);

	return 0;
}