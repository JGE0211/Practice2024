#include <stdio.h>

int main() {
	int n;
	int i = 1;
	int sum= 0;

	printf("숫자를 입력하시오:");
	scanf_s("%d", &n);
	while (i <= n) {
		sum += i;
		i++;
	}
	printf("숫자의 합= %d\n", sum);

	i = 0;
	sum = 0;
	while (i <= n) {
		sum += i;
		i += 2;
	}
	printf("짝수의 합= %d\n", sum);

	i = 1;
	sum = 0;
	while (i <= n) {
		sum += i;
		i += 2;
	}
	printf("홀수의 합= %d\n", sum);
}