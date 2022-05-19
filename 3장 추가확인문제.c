#include<stdio.h>

int main(void)
{
	int kor = 70;
	int eng = 80;
	int mat = 90;
	int tot = kor + eng + mat;

	printf("국어;%d", kor);
	printf("영어;%d", eng);
	printf("수학:%d\n", mat);
	printf("총점:%d", tot);

	return 0;
}