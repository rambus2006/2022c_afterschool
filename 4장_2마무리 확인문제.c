#include <stdio.h>

int main(void)
{
	int hour = 0, min = 0, sec = 0;
	double time = 3.76;

	hour = (int)time;		//����ȯ���� ���� �κи��� ��󳽴�.
	time = (time - hour);		//<�� ���ϱ� ����>�ѽð��� �ȵǴ� �κи��� �ٽ� �����Ѵ�.
	time = (time * 60.0);	//�д����� ȯ��
	min = (int)time;			//<�� ������ �ֱ�>�����κи��� ��󳻾� ������ �����Ѵ�.
	time = (time - min);	//<�� ���� ���ϱ� ����>�Ϻ��� �ȵǴ� �κи��� �ٽ� �����Ѵ�.
	time *= 60.0;			//�� ���� ȯ��
	sec = (int)time;		//<�� ������ �ֱ�>���� �κи��� ��󳻾� �ʷ� �����Ѵ�.

	printf("%.2lf�ð��� %d�ð� %d��%d���Դϴ�.", 3.76, hour, min, sec);

	return 0;
}

/*	<����>
	int hour = 0,min=0,sec=0;
	double time = 3.76;

	hour = (int)time;
	time -= hour;
	time *= 60.0;
	min = (int)time;
	time -= min;
	time *= 60.0;
	sec = (int)time;

	printf("%.2lf�ð��� %d�ð� %d��%d���Դϴ�.", 3.76, hour, min, sec);*/