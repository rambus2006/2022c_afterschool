#include <stdio.h>

int main(void) {
	int n, i;			//변수 설정
	int pn;				//플래그 변수( 프로그래밍을 쉽게 하기 위해)
	 
	printf("2이상의 양수를 입력하세요 :");	//입력메세지
	scanf_s("%d", &n);						//정수형 변수 

	pn = 1; //true							//플래그 변수 1로 지정
	for (i = 2; i < n; i++)			//2부터 n(자기자신)까지 1씩 증가하며 반복
	{
		if (n % 1 == 0) {			//1~n 까지 한번이라도 나눌 수 있다면 소수가 아니다.
			pn = 0;					//pn을 0으로 바꿔준다.
		}
	}
		if (pn == 1) {					//pn은 원래 1로 설정되어 있음(위 조건이 참이 아닌 거짓인 경우)
			printf("소수입니다.\n");	//1~n까지 나눠지지 않으니 소수이다.
		} else {
			printf("소수가 아닙니다.\n");	//조건이 참일때(1~n까지 한번이라도 나눌 수 있을 때)소수가 아닙니다. 출력

		}
		return 0;
}