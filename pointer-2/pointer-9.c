#include <stdio.h>

int main()
{
	int* pnum, num1 = 200, num2 = 300;
	// pnum�� ���� ������ ����
	// num1, num2�� ������ �Ϲݺ���
	pnum = &num1; //num1 �ּҸ� pnum�� ���
	(*pnum) += 40; //(*pnum) = (*pnum)+40
	//*pnum�� pnum�� ����Ű�� ���� ��
	pnum = &num2; //num2 �ּҸ� pnum�� �ٽ� ���
	(*pnum) += 50; //pnum�� ����Ű�� ���� ���� 50 ����
	printf("num1= %d num2=%d\n", num1, num2);
	//240 350

	return 0;
}
