#include <stdio.h>  //전처리기. printf, scanf를 사용하기 위함.

int main(void) //무조건 한 개만 있어야 함, void는 아무런 형식이 없다는 뜻.(생략 가능)
{
	int i = 10; //정수형 변수 i에 10을 저장
	double f = 12.3; //실수형 변수 f에 12.3이라는 실수를 저장
	int* pi = NULL; //'*'가 붙으면 포인터 변수, NULL로 초기화 시킴.(NULL은 아무것도 가리키지 않는다는 뜻.)

	double* pf = NULL; 
	pi = &i; //&가 붙으면 주소
	pf = &f; //f주소->pf
	//pf = &i; i주소->pf

	printf("%d %p %d \n", *pi, &i, i); //%p는 주소를 출력하는 형식 지정자.
	printf("%p %p %.1f \n", pf, &f, f);
	return 0; //무사히 종료됨.
}
// int i 정수형 변수 : 값을 저장함
// int *j 정수형을 가리키는 주소 저장 
// i -> 값    j -> 포인터 변수이므로 주소
//&i -> 주소  *j -> 포인터 변수 * 붙임 -> 가리키는 주소에 가서 그 값을 가져옴