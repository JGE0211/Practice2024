#include <stdio.h>

int main() {
	//1부터 n까지 홀수와 짝수의 합
	//[반복의 규칙]
	//(1) 시작 : i = 1
	//(2) 반복조건 : i <= n
	//(3) 변화 : i++

	//[반복의 동작]
	//(1) 짝수이면 sum1 출력
	//(2) 홀수이면 sum2

	int n;
	int i = 1;
	int sum1 = 0;
	int sum2 = 0;

	printf("n :");
	scanf_s("%d", &n);

	while (i <= n) {
		if (i % 2 == 0) {
			sum1 += i;
			i += 1;
		}
		else {
			sum2 += i;
			i += 1;
		}
	}

	printf("짝수의 합: %d\n", sum1);
	printf("홀수의 합: %d\n", sum2);
}