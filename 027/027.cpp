#include <stdio.h>

int main()
{
	int n;
	printf("n 입력:");
	scanf_s("%d", &n);

	//(1)
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
	printf("\n");

	//(2)
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 2 * i - 1; j++)
			printf("*");
		printf("\n");
	}
	printf("\n");

	//(3)
	for (int i = n; i >= 1; i--) {
		for (int j = i; j >= 1; j--)
			printf("*");
		printf("\n");
	}
	printf("\n");

	//(4)
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 5 - i; j++) 
			printf(" ");
		for (int k = 1; k <= i; k++)
			printf("*");
		printf("\n");
	}
	printf("\n");

	//(5)
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 5 - i; j++)
			printf(" ");
		for (int k = 1; k <= 2 * i - 1; k++)
			printf("*");
		printf("\n");
	}
	printf("\n");

	//(6)
	for (int i = n; i >= 1; i--) {
		for (int j = 5 - i; j > 0; j--)
			printf(" ");
		for (int k = 1; k <= 2 * i - 1; k++)
			printf("*");
		printf("\n");
	}
	printf("\n");
}