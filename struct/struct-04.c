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
		printf("�к�: %d  �̸�: %s  ����: %.1f\n", list[2].number, list[2].name, list[2].grade);
	}
	/*printf("%d\n", list[2].number);
	printf("%s\n", list[2].name);
	printf("%f", list[2].grade);*/

	return 0;
}
