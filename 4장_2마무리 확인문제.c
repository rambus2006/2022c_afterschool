#include <stdio.h>

int main(void)
{
	int hour = 0, min = 0, sec = 0;
	double time = 3.76;

	hour = (int)time;		//형변환으로 정수 부분만을 골라낸다.
	time = (time - hour);		//<분 구하기 시작>한시간이 안되는 부분만을 다시 저장한다.
	time = (time * 60.0);	//분단위로 환산
	min = (int)time;			//<분 변수에 넣기>정수부분만을 골라내어 분으로 저장한다.
	time = (time - min);	//<초 변수 구하기 시작>일분이 안되는 부분만을 다시 저장한다.
	time *= 60.0;			//초 단위 환산
	sec = (int)time;		//<초 변수에 넣기>정수 부분만을 골라내어 초로 저장한다.

	printf("%.2lf시간은 %d시간 %d분%d초입니다.", 3.76, hour, min, sec);

	return 0;
}

/*	<정답>
	int hour = 0,min=0,sec=0;
	double time = 3.76;

	hour = (int)time;
	time -= hour;
	time *= 60.0;
	min = (int)time;
	time -= min;
	time *= 60.0;
	sec = (int)time;

	printf("%.2lf시간은 %d시간 %d분%d초입니다.", 3.76, hour, min, sec);*/