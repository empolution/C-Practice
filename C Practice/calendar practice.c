#include <stdio.h>

int main(void)
{
	int a;
	int b=0;
	for (a = 0; a <= 100; a=a+1)
	{
		if (a % 3 == 0)
		{
			printf("%d\n", a);
			b = b + a;
		}
	}
	printf("%d", b);
	return 0;
}
