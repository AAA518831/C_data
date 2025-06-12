#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

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

	switch (op)
	{
	case '+': //문자 한 글자를 입력받을 땐 작은 따옴표(' ') 사용
		r1 = a + b;
		printf("%d %c %d = %d\n", a, op, b, r1);
		break;

	case '-':
		r1 = a - b;
		printf("%d %c %d = %d\n", a, op, b, r1);
		break;

	case '*':
		r1 = a * b;
		printf("%d %c %d = %d\n", a, op, b, r1);
		break;

	case '/':
		r2 = (double)a / b; // 정수 하나를 실수로 바꿔야 정확한 값이 도출됨
		printf("%d %c %d = %.2f\n", a, op, b, r2); //double은 실수형 변수이기 때문에 실수(f)로 출력해야 함
		break;

	default :
		printf("연산을 잘못 입력하셨습니다.\n");
		break;
	}

	return 0; //정상적으로 종료
}