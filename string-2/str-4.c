#define _CRT_SECURE_NO_WARNINGS
#include <string.h> //strcpy, strcat
#include <stdio.h>

//int main(void)
//{
//	char string[80];
//	
//	strcpy(string, "Hello world from "); // 복사
//	strcat(string, "strcpy ");          // 끝에 붙여 넣는다
//	strcat(string, "and ");
//	strcat(string, "strcat! ");
//	printf("string = %s\n", string);
//
//	return 0;
//}

int main()
{
	char a[11] = "KOREA"; //뒤에 null(\0) 채워짐
	char b[] = "12345"; //6개 요소 갖는 배열
	
	strcat(a, b); // string.h 포함
	          // b를 a에 연결
	          //strcat는 null 값을 제거하고 연결, 사이 공백 X.

	puts(a); // 문자열 출력, 줄바꿈 포함
	       // puts()=>문자열을 화면에 출력 후 커서를 다음 줄로 처음으로 이동

	printf("%s", b);
	return 0;
	// KOREA12345
	// 12345
}