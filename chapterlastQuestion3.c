#include<stdio.h>
int func(int n);	//�Լ� ����
int poly(int n);	//�Լ� poly����
int main(void)
{
	printf("%d\n", func(-3));	//
	return 0;

}

int func(int n)		//n= -3�� ��
{
	int res;	//res���� ����
	res = poly(n);	
	if (res >= 0)return res;		//���⼭ ���� ���ư����� �𸣰���
	else return -res;
}

int poly(int n)
{
	return((2 * n * n) + (3 * n));
}