#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char get_grade(int score);

//Ǯ����
int main(void)
{
	int score;
	char grade;
	printf("c��� ������ �Է��ϼ��� : ");
	scanf_s("%d", &score);
	get_grade(score);

	return 0;
}

char get_grade(int score)
{
	if (score >= 90) printf("����� ����� A�Դϴ�.");
	else if (score >= 80) printf("����� ����� B�Դϴ�.");
	else if (score >= 70) printf("����� ����� C�Դϴ�.");
	else if (score >= 60)  printf("����� ����� D�Դϴ�.");
	else printf("����� ����� F�Դϴ�.");
}