#include <stdio.h>

int main(void)
{
	int num;
	
	
	
	scanf_s("%d", &num);

		num = (num / 10);
		printf("%d\n", num);
		num = (num / 10);
		printf("%d\n", num);
		num = (num / 10);
		printf("%d\n", num);
		num = (num / 10);
		printf("%d\n", num);


		return 0;
	}