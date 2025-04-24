#include <stdio.h>
int fun1(); // 함수 원형(함수 선언)
// 함수가 main의 아래에 위치하고 있기 때문에 존재를 인식하지 못하기 때문에
// main 위에서 미리 함수가 있다는 것을 선언해줌 (끝에 반드시 ;를 붙일 것)
int fun2();

int main(void) // void는 타입이 없음(생략 가능)
{
	printf("메인 시작\n");//1
	fun1();//2  // 함수 호출, 인수를 보내지 않음
	printf("메인 끝\n");//10   
	return 0;//11  //완전 종료
}
int fun1() // 매개 변수도 없음, return으로 반환할 값의 형을 기입
         // (return 0 → 정수형 → int)
{
	printf("fun1함수 시작\n");//3 
	fun2();//4  // 함수 호출
	printf("fun1함수 끝\n");   //8
	return 0;//9 // fun1()을 호출한 다음 수행줄로 이동
}
int fun2() 
{
	printf("fun2함수 시작\n");//5
	printf("fun2함수 끝\n");//6
	return 0;//7 // fun2()를 호출한 다음 수행줄로 이동
}