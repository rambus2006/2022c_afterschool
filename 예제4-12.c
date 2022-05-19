#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, res;

	res = (a > b) ? a : b;			//a와 b중에 큰값이 res에 저장.
	printf("큰 값 : %d\n", res);	//a>b가 참이면 1로 a가 res에 저장됨.여기서는 거짓이므로 0, b가 res에 저장됨
									//res가 중복으로 들어가면 좋지 않음
	return 0;						//변수가 2개이면 (a >b )?(res=a):(res=b)의형태로 나타낼 수 있다.(웬만해선 잘 안씀)

}