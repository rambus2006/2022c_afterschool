#include<stdio.h>

int main(void)
{
	int snack;		//과자와 사탕의 변수 저장
	int candy;
	int money;		//각 금액단위 동전의 개수 저장
	int main;		//500원
	int main2;		//100원
	int main3;		//50원 

	snack = (2 * 70);
	printf("과자 전체 금액 : %d 원\n", snack);
	candy = (3 * 30);
	printf("사탕 전체 금액 : %d 원\n", candy);
	money = (snack++) + (candy++);
	money = (1000 - money);
	printf_s("거스름돈 : %d 원\n ", money);		//거스름돈


	printf_s("===== 거스름돈 동전의 최소 개수=====\n ");		//동전
	main = (money / 500);
	printf_s("500원 : %d ", main);

	main = (money % 500 / 100);
	printf_s("100원 : %d ", main);

	main2 = (money % 500 % 100 / 50);
	printf_s("50원 : %d	", main2);

	main3 = (money % 500 % 100 % 50 / 10);
	printf_s("10원 : %d	", main3);

	return 0;
}