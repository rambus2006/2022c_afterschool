#include <stdio.h>

int main(void)
{
	int kor = 3, eng = 5, mat = 4;		//국어, 영어, 수학의 학점 초기화
	int credits;						//전체 학점을 저장할 변수
	int res = 0;						//연산 결과를 저장할 변수
	double kscore = 3.8, escore = 4.4, msscore = 3.9;		//각 과목의 평점초기화
	double grade = 0;

	credits = kor + eng + mat;			//전체 학점 계산
	grade = kscore + escore + msscore / 3.0;	//평점의 평균 계산-/3.0 을 치지 않았음(현재는 고침)
	res = (credits > 10) && (grade > 4.0);	//전체 학점이 10 학점 이상이고
	//평점 평균이 4.0 보다 크면 참이므로 결과는 1, 그렇지 않으면 거짓으로 결과는 0
	printf("결과값 = %d", res);

	return 0;
}