#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double gradeone;		//double gradeone,gradetwo,gradethree;
	double gradetwo;
	double gradethree;
	double avg;			//평균
	char grade;

	printf("과목 3개의 성적을 입력하세요 : ");
	scanf_s("%lf %lf %lf", &gradeone, &gradetwo, &gradethree);
	avg = ((gradeone + gradetwo + gradethree) / 3);
	printf("평균 : %.1lf ", avg);

	if (90 <= avg)
	{
		// grade = 'A';
		printf("학점 : A");
	}
	else if (80 <= avg)
	{
		// grade = 'B';
		printf("학점 : B");
	}
	else if (70 <= avg)
	{
		// grade = 'C';
		printf("학점 : C");
	}
	else {
		// grade = 'D';
		printf("학점 :F");
	}
	//printf("평균 : %1lf,학점 : %c",avg,grade); 
   //이런 형태로 한번에 출력해보는 방법도 있다.

	return 0;
}
