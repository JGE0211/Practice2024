#include <stdio.h>

int main() {
	//while문
	int n = 0;

	while (n < 10) {
		printf("전경은\n");
		n++;
	}
	printf("\n");

	//for문
	for (int i = 0; i < 10; i++) {
		printf("하하하\n");
	}
	printf("\n");

	//1에서 10까지 출력하기
	//[반복의 규칙]
	//(1) 시작 : i = 1
	//(2) 반복조건 : i <= 10
	//(3) 변화 : i++

	//[반복의 동작]
	//(1) 1부터 10까지 숫자 출력하기

	//while문
	int i = 1;

	while (i <= 10) {
		printf("%d", i);
		i++;
	}
	printf("\n");

	//for문
	for (i = 1; i <= 10; i++) {
		printf("%d", i);
	}
	printf("\n\n");

	//1에서 10까지 홀수 출력하기
	//[반복의 규칙]
	//(1) 시작 : i = 1
	//(2) 반복조건 : i <= 10
	//(3) 변화 : i++

	//[반복의 동작]
	//(1) 1부터 10까지 홀수 출력하기

	//while문
	i = 1;
	while (i <= 10) {
		if (i % 2 != 0) {
			printf("%d", i);
		}
		i++;
	}
	printf("\n");
	//for문
	for (i = 1; i <= 10; i++) {
		if (i % 2 != 0) {
			printf("%d", i);
		}
	}
	printf("\n\n");

	//10부터 1까지 짝수 출력하기
	//[반복의 규칙]
	//(1) 시작 : i = 1
	//(2) 반복조건 : i <= 10
	//(3) 변화 : i++    <---------변화조건을 2로 바꿔 바로 출력 가능

	//[반복의 동작]
	//(1) 짝수 출력하기

	//while문
	i = 10;
	while (i > 0) {
		if (i % 2 == 0) {
			printf("%d", i);
		}
		i -= 1;
	}
	printf("\n");
	//for문
	for (i = 10; i > 0; i -= 1) {
		if (i % 2 == 0) {
			printf("%d", i);
		}
	}
}