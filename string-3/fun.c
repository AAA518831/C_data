// 함수는 자기 자신을 호출할 수도 있다. 이것을 순환(recursion)라고 부른다.
// 재귀함수(재귀 호출(recursive call))이란 함수 내부에서 함수가 자기 자신을 또다시 호출하는 행위(스스로를 호출)
// 함수 내에 재귀 호출을 중단하도록 조건이 변경될 명령문을 반드시 포함.

#include <stdio.h>

int func(int);
int main() {
	int a;
	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &a);
	printf("%d", func(a));
}

int func(int a)
{
	if (a <= 1) return 1;
	return a * func(a - 1);
}
//a=5 -> 5*func(4) => 5*24 = 120
//a=4 -> 4*func(3) => 4*6 = 24
//a=3 -> 3*func(2) => 3*2 = 6
//a=2 -> 2*func(1) => 2*1 = 2
//a=1 -> 1



//int f(); //함수원형
//
//int main(void)
//{
//	printf("%d", f(4)); //함수 호출 4를 가지고 감
//}
//
//int f(int i) //함수 정의 [4][4} // i거 4을 받음
//{
//	int a[5] = { 5,4,3,2,1 };
//	if (i <= 0)
//		return 0;
//	else
//		return a[i] % 3 + f(i - 1); //재귀 함수 (4일때) 1+(3일때) 2+(2일때) 0+(1일때) 1
//}
//i가 4일 때 a[4]%3=1+f(3) => 3을 보내면서 함수 호출
//i가 3일 때 a[3]%3=2+f(2) => 2를 보내면서 함수 호출
//i가 2일 때 a[2]%3=0+f(1) => 1을 보내면서 함수 호출
//i가 1일 때 a[1]%3=1+f(0) => 0을 보내면서 함수 호출

