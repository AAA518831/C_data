#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b; //���� �� ���� �޴� ����
	int r1 = 0; //���ϱ� ���� ���ϱ� ����� �޴� ����
	double r2 = 0; //������ ����� �޴� ����
	char op; //���ϱ� ���� ���ϱ� �� � �����ڸ� ������ �� �޴� ����
	
	printf("ù��° ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &a);
	printf("�ι�° ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &b);
	printf("������ ��ȣ�� �Է��ϼ���.(+, -, *, /) : ");
	scanf(" %c", &op); //enter�� �Է¹ޱ� ������ �� ĭ�� ��� enter�� �ѱ�

	switch (op)
	{
	case '+': //���� �� ���ڸ� �Է¹��� �� ���� ����ǥ(' ') ���
		r1 = a + b;
		printf("%d %c %d = %d\n", a, op, b, r1);
		break;

	case '-':
		r1 = a - b;
		printf("%d %c %d = %d\n", a, op, b, r1);
		break;

	case '*':
		r1 = a * b;
		printf("%d %c %d = %d\n", a, op, b, r1);
		break;

	case '/':
		r2 = (double)a / b; // ���� �ϳ��� �Ǽ��� �ٲ�� ��Ȯ�� ���� �����
		printf("%d %c %d = %.2f\n", a, op, b, r2); //double�� �Ǽ��� �����̱� ������ �Ǽ�(f)�� ����ؾ� ��
		break;

	default :
		printf("������ �߸� �Է��ϼ̽��ϴ�.\n");
		break;
	}

	return 0; //���������� ����
}