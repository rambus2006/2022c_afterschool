#include<stdio.h>

int main(void)
{
	int chest = 95;
	char size;


	if (chest <= 90)
	{
		size = 'S';
	}							//90���� ū ���� else�� ���� ������ 90<chest<=100 �̶� �ڵ�� Ʋ�ȴ�.
	else if (chest <= 100)		//�����ǹ̸� �� �ľ�����, 
	{
		size = 'M';
	}
	else
	{
		size = 'L';
	}

	printf("���� ������ : %c\n", size);

	return 0;

}