#include <stdio.h>

int main(void) {
	int a[10] = { 3,2,5,1,4,6,8,2,6,10 };
	int i;

	for (i = 0; i < 10; i++) 
	{
		if (i % 3 == 2) //3으로 나누었을 때 나머지가 2인 경우 : 2,5,8
			printf("%d", a[i]); //a[2], a[5], a[8] => 566
	}
	return 0;
}

//566