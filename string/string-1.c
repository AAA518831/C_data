#include <stdio.h>

int main(void)
{
	int i; 
	char str[4]; // 문자배열 4자리
	str[0] = 'a'; // 값 하나씩 대입
	str[1] = 'b';
	str[2] = 'c';
	str[3] = '\0'; // null 값 나옴
	//char str[4]="abc"; //큰 따옴표엔 null 값이 자동으로 들어가기 때문에 생략해도 됨.
	//char str[4]={'a', 'b', 'c', '\0'};

	i = 0;
	printf("%s\n", str);
	//while (str[i] != '\0') // 반복문(null 값이 아닐 때)
	//	             // null 값을 만나면 끝남
	//{
	//	printf("%c", str[i]); // 1글자 -> %c
	//	i++; // 0~2방까지 계속 증가하면서 반복
	//}
	for (i = 0; i < 3; i++)
	{
		printf("%c", str[i]);
	}

	return 0;
}

//for(초기값;조건식;증감식)
//for(i=0;str[i] != '\0';i+1)


