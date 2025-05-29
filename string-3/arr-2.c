#include <stdio.h>
void proc(int a[], int b); //함수원형 선언

int main(void) {
	int a[6] = { 3,2,5,1,4,6 }; //정수형 숫자 배열
	// a 배열은 4byte*6개 = 24Byte
	// a[0] = 3, a[1] = 2, a[2] = 5, a[3] = 1, a[4] = 4, a[5] = 6
	proc(a, 0); //함수 호출(a 배열, 0-> 넘김)
}

void proc(int a[], int b) //함수 정의 
                     //a 배열 -> 정수형 a[6], b는 0받음
{
	int i;
	if (b > 1) //처음 b가 0이므로 결과가 거짓
	{
		return; //참일 때 수행 
	}
	else //b가 1보다 크지 않으므로(거짓)
		for (i = 0; i < 6; i++) // 6번 반복 
			printf("%d", a[i]); // a[0]~a[5] 출력
}