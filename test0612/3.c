// ���(��ȯ)�Լ��� �Լ� ���ο��� �Լ��� �ڱ� �ڽ��� �Ǵٽ� ȣ���ϴ� ����
// �Լ� ���� ��� ȣ���� �ߴ��ϵ��� ������ ����� ��ɹ��� �ݵ�� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int func(int x)

int main(void)
{
	int n; //���� �Է�
	int res; //��� �Է�

	printf("���� �Է� : ");
	scanf("%d", &n);
	printf("---------------------------");
	res = func(n);
	printf("��� : %d\n", res);

	return 0;
}

int func(int x) //n�� 3 -> 2 -> 1
//����� ������ ���;� �ϱ� ������ int ����
{
	if (x == 1)
	{
		return 1;
	}

	else {
		return x * func(x - 1); //������ �ִ� �Ϳ� ���ο� �ڽ��� �θ�
		                    // 3 * func(3-1)
		                    // 2 * func(2-1)
	}
}