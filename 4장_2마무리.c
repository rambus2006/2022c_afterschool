#include <stdio.h>

int main(void)
{
	int res;		//�������

	res = sizeof(short) > sizeof(long);
	//sizeof�� �ǿ����ڷ� �ڷ����̸��� ����Ͽ� ũ�⸦ ����Ʈ ������ ����Ѵ�.
	//short���� ũ�Ⱑlong������ ũ�� ���̹Ƿ� 1,�׷��� ������ 0�� res�� �����Ѵ�.

	printf("%s", (res == 1) ? "short" : "long");
	//res�� 1�� ��
	return 0;
}