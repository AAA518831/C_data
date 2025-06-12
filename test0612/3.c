// 재귀(순환)함수란 함수 내부에서 함수가 자기 자신을 또다시 호출하는 행위
// 함수 내에 재귀 호출을 중단하도록 조건이 변경될 명령문을 반드시 포함
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int func(int x)

int main(void)
{
	int n; //숫자 입력
	int res; //결과 입력

	printf("정수 입력 : ");
	scanf("%d", &n);
	printf("---------------------------");
	res = func(n);
	printf("결과 : %d\n", res);

	return 0;
}

int func(int x) //n이 3 -> 2 -> 1
//결과가 정수로 나와야 하기 때문에 int 설정
{
	if (x == 1)
	{
		return 1;
	}

	else {
		return x * func(x - 1); //기존에 있던 것에 새로운 자신을 부름
		                    // 3 * func(3-1)
		                    // 2 * func(2-1)
	}
}