#include <stdio.h>

union example { // union: 공용체(메모리 공간 공유)
	int i; //정수형 4byte
	char c; //문자 1자, 1byte
};

int main(void)
{
	union example v; //공용체 변수 v선언

	v.c = 'A';
	printf("v.c:%c  v.i:%i\n", v.c, v.i);

	v.i = 10000;
	printf("v.c:%c v.i:%i\n", v.c, v.i);

	return 0;
}