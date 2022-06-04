#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char get_grade(int score);

//풀었음
int main(void)
{
	int score;
	char grade;
	printf("c언어 성적을 입력하세요 : ");
	scanf_s("%d", &score);
	get_grade(score);

	return 0;
}

char get_grade(int score)
{
	if (score >= 90) printf("당신의 등급은 A입니다.");
	else if (score >= 80) printf("당신의 등급은 B입니다.");
	else if (score >= 70) printf("당신의 등급은 C입니다.");
	else if (score >= 60)  printf("당신의 등급은 D입니다.");
	else printf("당신의 등급은 F입니다.");
}