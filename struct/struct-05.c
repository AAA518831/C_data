#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student {
	int number;
	char name[20];
	double grade;
};

int main(void) {
	struct student list[100];     //0~99번째
	char a; //1글자
	int k = 0; //배열의 위치를 알려주는 변수, 0번째 방부터 시작하므로 0으로 초기화
	int i=1;
	while(i) // i가 1이고, 1이면 참, 조건이 만족(참)일째 반복
		    //while(1)이면 무한반복, 0이 되면 거짓. 반복문 종료
	{
		printf("학번을 입력하시오:");
		scanf("%d", &list[k].number);
		printf("이름을 입력하시오:");
		scanf("%s", &list[k].name);
		printf("학점을 입력하시오:");
		scanf("%lf", &list[k].grade);
		printf("학번: %d  이름: %s  학점: %.1f\n", list[k].number, list[k].name, list[k].grade);
		k = k + 1;
		printf("\n================================\n");
		printf("\n작업을 종료하시겠습니까?(y or Y / n or N)");
		scanf(" %c", &a); // 1글자(1byte) 입력받을 때 위에서 입력 받아서 내려와서 
		               // 1글자 입력받을 때는 위의 enter키를 그대로 받아서 넘어가므로 실제 원하는 1글자를 입력받지 못하기 때문에 
					   // " %c" => %c 앞에 한칸을 뜀 = 엔터키를 소멸시키고 원하는 1글자를 받음
		if (a == 'y' || a == 'Y')
		{
			i = 0;
		} //if

	} //while
	printf("\n종료합니다.");

	return 0;
} //main