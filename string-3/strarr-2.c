#define _CRT_SECURE_NO_WARNINGS //scanf를 오류없이 실행하기 위해
#include <stdio.h> //전처리기 //printf를 사용하기 위해

int main(void)
{
	int i;
	char fruits[3][20]; // 3행 20열 
	for (i = 0; i < 3; i++) // 0~2행 반복
	{
		printf("과일 이름을 입력하시오: "); 
		scanf("%s", fruits[i]); //scanf를 통해 과일 이름을 입력받고 fruits[i]에 저장함
	}

	for (i = 0; i < 3; i++) // 0~2행 3번 반복
		printf("%d번째 과일: %s\n", i, fruits[i]); //n번째 과일 : [입력했던 과일 이름] 출력
	return 0; //정상적으로 종료
}