#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char name[20];				//�̸��� ������ �迭*20����Ʈ��ŭ ũ�� ��� �� ���� ����
	int age;					//���̸� ������ ����
	double ke;					//Ű�� ������ ����

	printf("�̸� �Է� : ");
	scanf("%s", &name);					//�迭������ �̸� �Է�,&����
	printf("���̿� Ű(cm) �Է� : ");
	scanf("%d%lf", &age, &ke);			//�߰��� �������� ����.��ȯ���ڸ� �������� ����Ͽ� �Է�

	printf("�̸� : %s \n ���� : %d�� Ű : %.1lf", name, age, ke); //�Էµ� �� ���.ū����ǥ�� �ѹ��� ���

	return 0;
}