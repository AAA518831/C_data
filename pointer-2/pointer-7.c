#include <stdio.h>

int main(void)
{
	int x = 500;
	double y = 20.34; //실수형
	int* p1 = NULL;
	double* p2 = NULL;

	p1 = &x; //p1이 x주소
	p2 = &y; //p2가 y주소

	printf(" %p %p\n", p2, &y);

	//p2 = p1; //p1 주소를 p2 대입
	//printf("%p\n", p2);

	//printf("x의 주소 = %p\n", &x);
	//printf("x의 값 = %d\n", x);
	//printf("p1의 주소 = %p\n", p1);
	//printf("p1의 값 = %d\n", *p1);


	return 0;
}
