#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, res;

	res = (a > b) ? a : b;			//a�� b�߿� ū���� res�� ����.
	printf("ū �� : %d\n", res);	//a>b�� ���̸� 1�� a�� res�� �����.���⼭�� �����̹Ƿ� 0, b�� res�� �����
									//res�� �ߺ����� ���� ���� ����
	return 0;						//������ 2���̸� (a >b )?(res=a):(res=b)�����·� ��Ÿ�� �� �ִ�.(�����ؼ� �� �Ⱦ�)

}