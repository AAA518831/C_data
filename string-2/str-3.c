//#include <stdio.h>
//stdio.h에 선언

//int main(void)
//{
//	int ch; //정수형에 주의, 아스키코드로 기억
//	ch = getchar(); //첫 번째 1문자를 입력받는다.
//	putchar(ch); //1문자를 출력한다.
//
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char name[100];
	char address[100];

	printf("이름을 입력하시오: ");
	gets_s(name, sizeof(name)); //gets(name);

	printf("현재 거주하는 주소를 입력하시오: ");
	gets_s(address, sizeof(address)); //gets(address);

	puts(name); //줄바뀜
	puts(address);

	return 0;
}