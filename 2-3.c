#include <stdio.h>

int main(void)								//����ڸ� ����� ���
{
	printf("mirimmaster\n");				//"Be happy"�� ����ϰ� ���� �ٲ�(\n)
	printf("1409\n");						//ȭ�鿡 ����ȣ ����ϰ� ���� �ٲ�(\n)

	printf("My\tminseo\n");
	//"My"�� ����ϰ� �� ��ġ�� �̵�(\t) �Ŀ� "friend"�� ����ϰ� ���� �ٲ�(\n)

	printf("Goot\bd\tracoon\n");
	//"Goot"�� ����ϰ� �� ĭ �������� �̵�(\b)��t�� d�� �ٲٰ� ����ġ�� �̵�(\t) �Ŀ� 
	//"chance"�� ����ϰ� ���� �ٲ�(\n)

	printf("Cow\rW\a\n");
	//�� ������ �̵�(\r) �� C�� W�� �ٲٰ� ���Ҹ� (\a)�� ���� ���� �ٲ�(\n)

	return 0;
}