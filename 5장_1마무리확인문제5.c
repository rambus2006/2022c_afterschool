#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double gradeone;		//double gradeone,gradetwo,gradethree;
	double gradetwo;
	double gradethree;
	double avg;			//���
	char grade;

	printf("���� 3���� ������ �Է��ϼ��� : ");
	scanf_s("%lf %lf %lf", &gradeone, &gradetwo, &gradethree);
	avg = ((gradeone + gradetwo + gradethree) / 3);
	printf("��� : %.1lf ", avg);

	if (90 <= avg)
	{
		// grade = 'A';
		printf("���� : A");
	}
	else if (80 <= avg)
	{
		// grade = 'B';
		printf("���� : B");
	}
	else if (70 <= avg)
	{
		// grade = 'C';
		printf("���� : C");
	}
	else {
		// grade = 'D';
		printf("���� :F");
	}
	//printf("��� : %1lf,���� : %c",avg,grade); 
   //�̷� ���·� �ѹ��� ����غ��� ����� �ִ�.

	return 0;
}
