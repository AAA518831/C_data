// 포인터를 통한 구조체 참조
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	struct insa {
		char name[10];
		int age;
	} a[] = { "Kim", 28, "Lee", 38, "Park", 42, "Choi", 31 };

	struct insa* p;
	p = a;
	p++;
	printf("%s\n", p->name);
	printf("%d\n", p->age);
	printf("%s\n", (*p).name);
	printf("%d\n", (*p).age);


}

//struct student { //구조체 선언
//	int number;
//	char name[20];
//	double grade;
//};
//
//int main(void)
//{
//	struct student s = { 1,"홍길동", 4.3 }; // s는 일반 구조체 변수
//	struct student* p; // 구조체 포인터변수
//
//
//	p = &s; //p는 s주소를 가르킴
//
//	printf("학번=%d 이름=%s 학점=%f \n", s.number, s.name, s.grade);
//	printf("학번=%d 이름=%s 학점=%f \n", (*p).number, (*p).name, (*p).grade);
//	printf("학번=%d 이름=%s 학점=%f \n", p->number, p->name, p->grade);
//
//	return 0;
//}
