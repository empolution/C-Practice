#include <stdio.h>

int main(void)
{
	int input;
	while (1)
	{
		printf("막대의 높이 입력 (종료 -1) : ");
		scanf_s("%d", &input);
		if (input == -1)
			break;
		while (input > 0)
		{
			printf("*\n");
			input--;
		}

	}
	return 0;
}
