#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sum(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
double div(int x, int y);
void prn1(int result1);
void prn2(double result2);

int main(void)
{
	int sel;

	int a, b; // a, b�� ����(����)�� �Է¹޾Ƽ� ������ ������
	int res1; // +,-,* ����� ����(������ ����)
	double res2; // ������(/)�� ����� �Ǽ��� ����

	printf("ù ��° ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &a);
	printf("�� ��° ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &b);

	for (int i = 1; i <= 3; i++) // 3�� �ݺ�
	{
		printf("���ϴ� ������ �����Ͻÿ�(1: ���ϱ� 2: ���� 3: ���ϱ� 4: ������) : ");
		scanf("%d", &sel); //&�� �ּҸ� �ǹ���.


		if (sel == 1) res1 = sum(a, b); // �Լ� ȣ�� // a, b �μ� ���� 
		// sum �Լ� ȣ���Ͽ� ��ȯ(return)�� ���� res1�� ����
		else if (sel == 2) res1 = sub(a, b);
		else if (sel == 3) res1 = mul(a, b);
		else if (sel == 4) res2 = div(a, b);

		if (sel == 1 || sel == 2 || sel == 3)
		{
			prn1(res1); //�Լ�ȣ��(������ ����� ����ϴ� �Լ�)
			break;
		}
		else if (sel == 4)
		{
			prn2(res2); //�Լ�ȣ��(�Ǽ��� ��� ���)
			break;
		}
		else printf("�Է� ����. �ٽ� �Է��ϼ���.\n");
	}

		return 0;
}

int sum(int x, int y) //�Ű������� ���� a -> x, b -> y
                  //�Ű������� ��(������)�� �����ϸ鼭 ���� ���
	              //�μ��� �Ű������� ������ ���� ���ƾ���
{
	int k;
	k = x + y;
	return k; 
}

int sub(int x, int y)
{
	int k;
	k = x - y;
	return k;
}

int mul(int x, int y)
{
	int k;
	k = x * y;
	return k;
}

double div(int x, int y)
{
	double q; //�Ǽ���
	q = x / (double)y;
	return q;
}

void prn1(int result1) // res1 -> result1(������ ����)
    // ��ȯ���� ���� ���ư�(void �Լ��� ó��)
{
	printf("����� %d", result1); //��� �Ϸ�
	return; // ���� ����
}

void prn2(double result2) // res2 -> result2(������ ����)
// ��ȯ���� ���� ���ư�(void �Լ��� ó��)
{
	printf("����� %.2lf", result2); //��� �Ϸ� //float�� double�� lf
	return; // ���� ����
}
