#define _CRT _SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>						//���ڿ��� �ٷ� �� �ִ� string.h ������� ����

int main(void)							//char �迭�� ���ڿ� ����
{
	char fruit[20] = "strawberry";		//strawberry�� �ʱ�ȭ

	printf("%s\n", fruit);				//strawberry ���
	strcpy(fruit, "banana");			//fruit�� banana����
	printf("%s\n", fruit);				//banana���

	return 0;
}
