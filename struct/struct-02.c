#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student //����ü ����
{
	int number; //������
	char name[10]; //���ڹ迭
	double grade; //�Ǽ�(8����Ʈ)
};

int main(void)
{
	struct student s; //����ü ���� ����

	printf("�й��� �Է��Ͻÿ�: ");
	scanf("%d", &s.number); //����ü ����� �ּ� ����

	printf("�̸��� �Է��Ͻÿ�: ");
	scanf("%s", s.name); //���ڿ��� �� ��ü�� �ּҸ� �ǹ�
                     //&��� ����

	printf("������ �Է��Ͻÿ�(�Ǽ�): ");
	scanf("%lf", &s.grade); //�������� lf ���
    printf("\n�й�: %d\n", s.number); //����ü����. ��Һ���
	printf("�̸�: %s\n", s.name);
	printf("����: %.2f\n", s.grade);
	return 0;
}
