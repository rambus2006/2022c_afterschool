#include <stdio.h>

double centi_to_meter(int cm);		//int cm를 못함, 하나만 선언할 수도 있다.

int main(void)
{
	double res;
	res = centi_to_meter(187);
	printf("%.2lfm\n", res);

	return 0;
}

double centi_to_meter(int cm)
{
	double meter;				//meter라고 이름붙이지 못함
	meter = cm / 100;
	return meter;

}