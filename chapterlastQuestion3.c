#include<stdio.h>
int func(int n);	//함수 선언
int poly(int n);	//함수 poly선언
int main(void)
{
	printf("%d\n", func(-3));	//
	return 0;

}

int func(int n)		//n= -3이 들어감
{
	int res;	//res변수 선언
	res = poly(n);	
	if (res >= 0)return res;		//여기서 어디로 돌아가는지 모르겠음
	else return -res;
}

int poly(int n)
{
	return((2 * n * n) + (3 * n));
}