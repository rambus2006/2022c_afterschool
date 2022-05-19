#include<stdio.h>

int main(void)
{
	int chest = 95;
	char size;


	if (chest <= 90)
	{
		size = 'S';
	}							//90보다 큰 수가 else로 오기 때문에 90<chest<=100 이란 코드는 틀렸다.
	else if (chest <= 100)		//말의의미를 잘 파악하자, 
	{
		size = 'M';
	}
	else
	{
		size = 'L';
	}

	printf("최종 사이즈 : %c\n", size);

	return 0;

}