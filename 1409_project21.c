#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int total(int kor, int eng, int mat);
double average(int tot);
void print_title(void);

//인터넷 보고 품
int main(void)
{
	int kor, eng, mat;
	int tot=0;
	double avg;

	printf("#세 과목의 점수 입력 : ");
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
	 printf("================= < 성적표>====================\n");
	 printf("---------------------------------------------------\n");
	 printf("\t국어     영어     수학     총점     평균\t\n");
	 printf("------------------------------------------------------\n");
	 
 }