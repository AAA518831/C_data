#include <stdio.h>

int main(void)
{
	//int i = 10; // ������ ������ ���� 10
	//double f = 12.3; // �Ǽ��� ������ 12.3
	//int* pi = NULL; // ������ ����(������ ������ �ּ� ���) ����
	//        // NULL �� �ƹ��͵� ����Ű�� ����

	//double* pf = NULL; // ������ ����
	//// �Ǽ��� ������ �ּ� ����� ����
	//pi = &i; //I�� �ּҸ� pi�� ����
	//pf = &f; //f�� �ּҸ� pf�� ����

	//printf("%p %p\n", pi, &i); //i�� �ּҸ� ���
	//printf("%p %p\n", pf, &f); //f�� �ּҸ� ���

	int k = 300;
	int y = 20;
	
	printf("%d\n", k); // 300
	printf("%p\n", &k); //k�� �ּ�
	int* po = NULL;
	po = &y;
	
	printf("%p\n", po);

	printf("%d\n", *po); //20
	//������ ������ '*'�� ���̸� ����� �ּ��� ���� ������


	return 0;
}