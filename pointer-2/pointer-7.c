#include <stdio.h>

int main(void)
{
	int x = 500;
	double y = 20.34; //�Ǽ���
	int* p1 = NULL;
	double* p2 = NULL;

	p1 = &x; //p1�� x�ּ�
	p2 = &y; //p2�� y�ּ�

	printf(" %p %p\n", p2, &y);

	//p2 = p1; //p1 �ּҸ� p2 ����
	//printf("%p\n", p2);

	//printf("x�� �ּ� = %p\n", &x);
	//printf("x�� �� = %d\n", x);
	//printf("p1�� �ּ� = %p\n", p1);
	//printf("p1�� �� = %d\n", *p1);


	return 0;
}
