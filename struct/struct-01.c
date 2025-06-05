#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //strcpy 함수 내장

struct student //구조체 선언
{
	int number; //학번
	char name[10]; //이름
	double grade; //학점
};

int main(void)
{
	struct student s; //구조체 변수 선언

	s.number = 20230001;
	strcpy(s.name, "홍길동"); //문자열 복사
	s.grade = 4.3;

	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("학점: %.2f\n", s.grade);
	return 0;
}