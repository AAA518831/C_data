#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
double div(int x, int y);

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

	if (op == '+')
	{
		r1 = add(a, b); //�Լ� ����, �Լ� ����� ����
	}
	else if (op == '-')
	{
		r1 = sub(a, b);
	}
	else if (op == '*')
	{
		r1 = mul(a, b);
	}
	else if (op == '/')
	{
		r2 = div(a, b);
	}
	else
	{
		printf("������ �߸� �Է��ϼ̽��ϴ�.\n");
	}

	if (op == '+' || op == '-' || op == '*')
	{
		printf("%d %c %d = %d\n", a, op, b, r1);
	}

	else if (op == '/')
	{
		printf("%d %c %d = %.2f\n", a, op, b, r2);
	}

	return 0;
}

int add(int x, int y) //���� ���ٸ� �̸��� �ٲ㼭 ���� �͵� ����
{
	return x + y; //x+y ���� ������
}

int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}

double div(int x, int y)
{
	return (double)x / y; // �� �� ������ ����� ������ �Ǽ���� �ص� ������ ��µ� -> �� �� �ϳ��� �Ǽ��� �����ؾ� ��
}