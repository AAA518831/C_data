#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student {
	int number;
	char name[20];
	double grade;
};

int main(void) {
	struct student list[100];     //0~99��°
	char a; //1����
	int k = 0; //�迭�� ��ġ�� �˷��ִ� ����, 0��° ����� �����ϹǷ� 0���� �ʱ�ȭ
	int i=1;
	while(i) // i�� 1�̰�, 1�̸� ��, ������ ����(��)��° �ݺ�
		    //while(1)�̸� ���ѹݺ�, 0�� �Ǹ� ����. �ݺ��� ����
	{
		printf("�й��� �Է��Ͻÿ�:");
		scanf("%d", &list[k].number);
		printf("�̸��� �Է��Ͻÿ�:");
		scanf("%s", &list[k].name);
		printf("������ �Է��Ͻÿ�:");
		scanf("%lf", &list[k].grade);
		printf("�й�: %d  �̸�: %s  ����: %.1f\n", list[k].number, list[k].name, list[k].grade);
		k = k + 1;
		printf("\n================================\n");
		printf("\n�۾��� �����Ͻðڽ��ϱ�?(y or Y / n or N)");
		scanf(" %c", &a); // 1����(1byte) �Է¹��� �� ������ �Է� �޾Ƽ� �����ͼ� 
		               // 1���� �Է¹��� ���� ���� enterŰ�� �״�� �޾Ƽ� �Ѿ�Ƿ� ���� ���ϴ� 1���ڸ� �Է¹��� ���ϱ� ������ 
					   // " %c" => %c �տ� ��ĭ�� �� = ����Ű�� �Ҹ��Ű�� ���ϴ� 1���ڸ� ����
		if (a == 'y' || a == 'Y')
		{
			i = 0;
		} //if

	} //while
	printf("\n�����մϴ�.");

	return 0;
} //main