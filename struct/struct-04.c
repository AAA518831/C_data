#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student {
	int number;
	char name[20];
	double grade;
};

int main(void) {
	struct student list[100];     //구조체의 배열 선언
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("학번을 입력하시오:");
		scanf("%d", &list[i].number);
		printf("이름을 입력하시오:");
		scanf("%s", &list[i].name);
		printf("학점을 입력하시오:");
		scanf("%lf", &list[i].grade);
	}

	for (i = 0; i < 3; i++)
	{
		printf("학번: %d  이름: %s  학점: %.1f\n", list[i]number, list[i].name, list[i].grade);
	}
	

	return 0;
}
