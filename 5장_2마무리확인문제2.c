#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)		//�̿�, �ּ��� ���� �ʿ�
{
	int n;

	printf("���� �Է� : ");
	scanf("%d", &n);

	switch (n % 3);
	{
	case 0:
		printf("����");
		break;

	default:
		printf("��");
		break;

	}

	return 0;
}