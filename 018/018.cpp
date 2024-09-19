#include <stdio.h>

int main() {
	//1부터 n까지의 합
	//[반복의 규칙]
	//(1) 시작 : i = 1
	//(2) 반복조건 : i <= n
	//(3) 변화 : i++

	//[반복의 동작]
	//(1) sum += 1
	//(2) sum 출력

	int n;
	int i = 1;
	int sum = 0;

	printf("n : ");
	scanf_s("%d", &n);

	while (i <= n) {
		sum += i;
		i += 1;
	}
	printf("sum = %d\n", sum);
}