#define _CRT_SECURE_NO_WARNINGS		

#include <stdio.h>

int main(void)
{
	double kg;				//변수 선언
	double cm;
	double m;
	double BMI;

	printf("몸무게(kg)와 키(cm) 입력 : ");		//입력문
	scanf_s("%lf %lf", &kg, &cm);		//몸무게랑 키를 입력


	m = (cm / 100);				//cm-->를 m로 바꿈
	BMI = kg / (m * m);			//bmi 구함

	((BMI >= 20) && (BMI < 25.0)) ? printf("표준입니다.\n") : printf("체중관리가 필요합니다.\n");
	//bmi가 20.0 이상 25.0 미만이면 "표준입니다"를 출력하고, 그렇지 않으면 "체중관리가 필요합니다"를 출력합니다.
	//(조건식)?(예):(아니오); 의 형태
	//(a>b)?b=1:b=2의 형태로 나타낼 수 있다.
	//"중요 : 문자도 오른쪽 조건에 넣을 수 있다는 것을 기억하자!!!"

	return 0;
}