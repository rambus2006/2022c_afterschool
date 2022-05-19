#include<stdio.h>

int main(void)
{
	char name[10] = "방민서";
	int age = 17;
	double height = 157;
	char bloodtype = 'O';

	age = age + 10;
	height = height + 3.5;

	printf("==10년 후의 프로필==\n");
	printf("이름:%s\n", name);
	printf("나이:%d\n", age);
	printf("키:%.1Ifcm\n", height);
	printf("혈액형:%s\n,", bloodtype);

	return 0;
}