#include <stdio.h>
int main(void)
{
	int i = 10;
	int* pi = &i;
	// i => 10, pi는 i주소
	printf("i=%d, pi=%p\n", i, pi);

	(*pi)++; // pi값을 가지고 오고
	       // 다음문장으로 갈때 값을 1 증가
	printf("i=%d, pi=%p\n", i, pi); //11

	*pi++; //pi의 값을 가져오고 pi 주소를 증가, 
	      //이미 위 문장에서 11로 계산했기 때문에 11로 나오는 것.
	printf("i=%d, pi=%p\n", i, pi); //11
	

	return 0;
}