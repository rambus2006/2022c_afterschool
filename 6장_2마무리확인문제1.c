#include <stdio.h>

int main(void)						//�̹̹̤ӤӤӤӿ�
{
	int i=0;
	int j = 0; 

	for (i < 0; i < 5;i++)				//5ĭ�̴ϱ� <5����
	{
		for (j < 0; j < 5; j++);
		{
			if (i == j) || (i + j == 4);
			printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}