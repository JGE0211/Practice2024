#define _CRT_SECURE_NO_WARNINGS // 표준으로 사용하기 위해...
#include <stdio.h>

int main()
{
	char s[10];

	scanf_s("%s", s, sizeof(s)); //문자열을 읽을 때는 %s에 담음 !!! 문자열을 scanf 사용시, & 표시가 없이 배열의 이름을 적고 문자열의 크기를 지정해줘야 됨 
	/////scanf("%s", s); //<- vs코드는 이렇게 쓰면 불안정함으로 ... 10개를 입력하면 에러가 뜸 그래서 scanf_s를 쓰는 것이 나음

	for (int i = 0; s[i] != '\0'; i++) ///null문자가 아닐때까지 실행
		printf("%c\n", s[i]);

	//10개를 입력하는 순간 입력을 받아들이지 않음
}