#include<stdio.h>

int main(void)
{
	char name[10] = "��μ�";
	int age = 17;
	double height = 157;
	char bloodtype = 'O';

	age = age + 10;
	height = height + 3.5;

	printf("==10�� ���� ������==\n");
	printf("�̸�:%s\n", name);
	printf("����:%d\n", age);
	printf("Ű:%.1Ifcm\n", height);
	printf("������:%s\n,", bloodtype);

	return 0;
}