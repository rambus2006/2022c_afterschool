#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int total(int kor, int eng, int mat);
double average(int tot);
void print_title(void);

int main(void)
{
	int kor, eng, mat;
	int tot;
	double avg;

	printf("#�� ������ ���� �Է� : ");
	scanf("%d %d %d", &kor, &eng, &mat);

	total(kor, eng, mat);
    average(tot);
	print_title();

	tot = total(kor, eng, mat);
	avg = average(tot);
}

 int total(int kor, int eng , int mat)
{
	 int tot;
	 tot = kor + eng + mat;
	 return 0;
}
 double average(int tot)
 {
	 double avg;
	 avg = (tot / 3);
	 return 0;
 }
 void print_title(void)
 {
	 printf("============== = < ����ǥ>===============\n");
	 printf("-----------------------------------------\n");
	 printf("\t����     ����     ����     ����     ���\t\n");
	 printf("------------------------------------------");
 }