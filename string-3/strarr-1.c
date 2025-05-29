#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i; //for 문장에 쓸 변수 선언
	char ex[4][5] = { //4행 5열(컴퓨터는 0부터 시작함)
		"abc", //0행
		"xyz", //1행
		"kkkk", //2행
		"love" //3행
	};
	//printf("%c\n", ex[1][2]); //1행 2열에 있는 한 글자(z)를 출력
	//printf("%c\n", ex[3][3]); //3행 3열에 있는 한 글자(e)를 출력
	//printf("%s\n", ex[1]); //1행 전체(xyz)를 출력, 문자열이기 때문에 %s 사용
	//scanf("%c", &ex[0][3]); //0행 3열 요소 입력시 '&' 추가
	//printf("%c\n", ex[0][3]); //한 요소 출력 %c
	//printf("%s\n", ex[0]); //한 행 출력 %s 
	scanf("%s", ex[2]);
	printf("%s\n", ex[2]);


	return 0;
}

