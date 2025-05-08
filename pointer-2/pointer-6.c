#include <stdio.h>

int main(void)
{
	int i = 10; 
	int* p; //포인터 변수

	p = &i; //p는 i의 주소 기억 p주소 = i주소 
	printf("i = %d\n", i); // 값 출력(i는 일반 변수)

	*p = 20; //p는 포인터 변수에 * => 기억하고 있는 주소에 가서 그 값을 의미함, 그 값에 20 대입
	printf("i = %d\n", i); //20 출력

	//-------------------------------------------------------------------------
	int a = 10;

	int* po; //po가 가리키는 곳이 int. (po가 int라는 뜻이 아님)
	p = &a; //a주소=po 가리키는 주소와 같다

	//sizeof(): ()안의 크기
	printf("%d\n", sizeof(a)); //4byte
	printf("%d\n", sizeof(po)); //포인터 변수는 8byte
	printf("%d\n", sizeof(&a)); //8byte
	printf("%d\n", sizeof(*po)); //포인트 변수에 * 붙으면 그 주소에 가서 값을 가져옴.(간접 참조), 4byte



	return 0;
}