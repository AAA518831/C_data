#include <stdio.h>

union example { // union: ����ü(�޸� ���� ����)
	int i; //������ 4byte
	char c; //���� 1��, 1byte
};

int main(void)
{
	union example v; //����ü ���� v����

	v.c = 'A';
	printf("v.c:%c  v.i:%i\n", v.c, v.i);

	v.i = 10000;
	printf("v.c:%c v.i:%i\n", v.c, v.i);

	return 0;
}