#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int total(int kor, int eng, int mat);
double average(int tot);
void print_title(void);

//���ͳ� ���� ǰ
int main(void)
{
	int kor, eng, mat;
	int tot=0;
	double avg;

	printf("#�� ������ ���� �Է� : ");
	scanf_s("%d %d %d", &kor, &eng, &mat);

	tot = total(kor, eng, mat);
    avg = average(tot);
	print_title();
	printf("\t%d\t%d\t%d\t%d\t%.1f", kor, eng, mat, tot, avg);

}

 int total(int kor, int eng , int mat)
{
	 return(kor + eng + mat);
}
 double average(int tot)
 {
	 double avg = (double)tot / 3;
	 return avg;
 }
 void print_title(void)
 {
	 printf("================= < ����ǥ>====================\n");
	 printf("---------------------------------------------------\n");
	 printf("\t����     ����     ����     ����     ���\t\n");
	 printf("------------------------------------------------------\n");
	 
 }