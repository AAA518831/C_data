// �����͸� ���� ����ü ����
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

//struct student { //����ü ����
//	int number;
//	char name[20];
//	double grade;
//};
//
//int main(void)
//{
//	struct student s = { 1,"ȫ�浿", 4.3 }; // s�� �Ϲ� ����ü ����
//	struct student* p; // ����ü �����ͺ���
//
//
//	p = &s; //p�� s�ּҸ� ����Ŵ
//
//	printf("�й�=%d �̸�=%s ����=%f \n", s.number, s.name, s.grade);
//	printf("�й�=%d �̸�=%s ����=%f \n", (*p).number, (*p).name, (*p).grade);
//	printf("�й�=%d �̸�=%s ����=%f \n", p->number, p->name, p->grade);
//
//	return 0;
//}
