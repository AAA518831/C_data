#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student {
	int number;
	char name[20];
	double grade;
};

int main(void) {
	struct student list[100];     //����ü�� �迭 ����
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("�й��� �Է��Ͻÿ�:");
		scanf("%d", &list[i].number);
		printf("�̸��� �Է��Ͻÿ�:");
		scanf("%s", &list[i].name);
		printf("������ �Է��Ͻÿ�:");
		scanf("%lf", &list[i].grade);
	}

	for (i = 0; i < 3; i++)
	{
		printf("�й�: %d  �̸�: %s  ����: %.1f\n", list[i]number, list[i].name, list[i].grade);
	}
	

	return 0;
}
