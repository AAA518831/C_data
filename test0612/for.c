//for.c
#include <stdio.h>

int main(void)
{
	int i;
	int j;

	for (i = 1; i <= 9; i++) //��
	{
		printf("%d��\n", i);
		for (j = 1; j <= 9; j++) //���ϴ� ��
			printf("%d * %d�� %d\t", i, j, i * j);
	}


	return 0;
}