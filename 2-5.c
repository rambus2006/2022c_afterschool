#include <stdio.h>

int main(void)							//������ ������ ���� ���
{
	printf("%d\n", 12);					//10���� ���� ��� ���
	printf("%d\n", 014);				//8���� ���� ��� ���
	printf("%d\n", 0xc);				//16���� ���� ��� ���
	printf("%o\n", 12);					//8���� ���
	printf("%x\n", 12);					//16���� �ҹ��� ���
	printf("%X\n", 12);					//16���� �빮�� ���

	return 0;
}