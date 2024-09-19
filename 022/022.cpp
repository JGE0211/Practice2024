#include <stdio.h>

int main() {
	//n을 입력받아 구구단 출력하기
	//[반복의 규칙]
	//(1) 시작 : i = 1
	//(2) 반복조건 : i < 10
	//(3) 변화 : i++

	//[반복의 동작]
	//(1) n*i를 계산해서 포맷에 맞게 출력

	int n;
	int i = 1;

	printf("단을 입력하시오:");
	scanf_s("%d", &n);

	while (i < 10) {
		printf("%d * %d = %d\n", n, i, n * i);
		i++;
	}
}