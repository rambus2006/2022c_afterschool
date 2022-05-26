#include <stdio.h>

double average(double a, double b);			//average함수 선언

int main(void)
{
	double res;								//반환값을 지정할 변수 선언
	res = average(1.5, 3.4);
	printf("두 실수의 평균 : %.2lf\n", res);

	return 0;
}

double average(double a, double b)		//이 줄은 맨 위 의 값과 같다.
{
	double temp;
	temp = a + b;
	return(temp/2.0);
}