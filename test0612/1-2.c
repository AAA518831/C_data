#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
double div(int x, int y);

int main(void)
{
	int a, b; //숫자 두 개를 받는 변수
	int r1 = 0; //더하기 빼기 곱하기 결과를 받는 변수
	double r2 = 0; //나누기 결과를 받는 변수
	char op; //더하기 빼기 곱하기 중 어떤 연산자를 선택할 지 받는 변수

	printf("첫번째 숫자를 입력하세요 : ");
	scanf("%d", &a);
	printf("두번째 숫자를 입력하세요 : ");
	scanf("%d", &b);
	printf("연산할 기호를 입력하세요.(+, -, *, /) : ");
	scanf(" %c", &op); //enter를 입력받기 때문에 한 칸을 띄어 enter를 넘김

	if (op == '+')
	{
		r1 = add(a, b); //함수 설정, 함수 결과를 담음
	}
	else if (op == '-')
	{
		r1 = sub(a, b);
	}
	else if (op == '*')
	{
		r1 = mul(a, b);
	}
	else if (op == '/')
	{
		r2 = div(a, b);
	}
	else
	{
		printf("연산을 잘못 입력하셨습니다.\n");
	}

	if (op == '+' || op == '-' || op == '*')
	{
		printf("%d %c %d = %d\n", a, op, b, r1);
	}

	else if (op == '/')
	{
		printf("%d %c %d = %.2f\n", a, op, b, r2);
	}

	return 0;
}

int add(int x, int y) //형이 같다면 이름을 바꿔서 쓰는 것도 가능
{
	return x + y; //x+y 값을 돌려줌
}

int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}

double div(int x, int y)
{
	return (double)x / y; // 둘 다 정수면 결과물 형식이 실수라고 해도 정수로 출력됨 -> 둘 중 하나를 실수로 변경해야 함
}