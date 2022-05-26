#include <stdio.h>

int rec_funx(int n);

int main(void)
{
	int res = 0;

	res = rec_funx(10);
	printf("°á°ú°ª=%d\n", res);

	return 0;

}

int res_func(int n)
{
	int res;

	if (n == 1)
		return 1;
	else
		res=n+ _rec_funx(n - 1);

	return res;
}