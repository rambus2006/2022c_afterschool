#include<stdio.h>

int main(void)
{
	double height = 179.5;			//Ű�� ������ ���� ����� �ʱ�ȭ
	double weight = 75.0;			//�����Ը� ������ ���� ����� �ʱ�ȭ
	if ((187.5 <= height) && (weight < 80))		//Ű�� 187.5�̻��̰� �����԰� 80�̸��̸�
	{
		printf("OK\n");							//ok���
	}
	else {
		printf("cancel\n");						//�׿��� ���
	}

	return 0;
}