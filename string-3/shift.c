#include <stdio.h>

//int main()
//{
//	int num = 1640; //2������ 11001101000
//	printf("%d", num >> 3); //>>�� ���������� 3��Ʈ �̵�
//	                     // => 11001101
//	                     // => 205
//	return 0;
//}

int main()
{
	int num1 = 10;
	int num2 = 20;
	int result1, result2, result3;

	result1 = (num1 == 10 && num2 == 18);   //����(0)
	result2 = (num1 < 18 || num2 > 18);      //��(1)
	result3 = (!num1);                       //!not -> �ݴ�
	                                      //num1�� 10(��) -> �ݴ� -> ����(0)

	printf("result1: %d\n", result1);
	printf("result2: %d\n", result2);
	printf("result3: %d\n", result3);

	return 0;
}

