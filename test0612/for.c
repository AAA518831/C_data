//for.c
#include <stdio.h>

int main(void)
{
	int i;
	int j;

	for (i = 1; i <= 9; i++) //단
	{
		printf("%d단\n", i);
		for (j = 1; j <= 9; j++) //곱하는 수
			printf("%d * %d은 %d\t", i, j, i * j);
	}


	return 0;
}