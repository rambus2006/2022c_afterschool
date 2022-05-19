#include <stdio.h>

int main(void)						//미미미ㅣㅣㅣㅣ완
{
	int i=0;
	int j = 0; 

	for (i < 0; i < 5;i++)				//5칸이니까 <5까지
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