#include <stdio.h>

int main(void)
{
	int kor = 3, eng = 5, mat = 4;		//����, ����, ������ ���� �ʱ�ȭ
	int credits;						//��ü ������ ������ ����
	int res = 0;						//���� ����� ������ ����
	double kscore = 3.8, escore = 4.4, msscore = 3.9;		//�� ������ �����ʱ�ȭ
	double grade = 0;

	credits = kor + eng + mat;			//��ü ���� ���
	grade = kscore + escore + msscore / 3.0;	//������ ��� ���-/3.0 �� ġ�� �ʾ���(����� ��ħ)
	res = (credits > 10) && (grade > 4.0);	//��ü ������ 10 ���� �̻��̰�
	//���� ����� 4.0 ���� ũ�� ���̹Ƿ� ����� 1, �׷��� ������ �������� ����� 0
	printf("����� = %d", res);

	return 0;
}