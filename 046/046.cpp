#include <stdio.h>

long long fact(int n)
{
	long long f = 1;

	for (int i = 1; i <= n; i++)
		f *= i;

	return f;
}

/*int sum(int n)   //fact와 구조가 똑같음
{
	int s = 0;

	for (int i = 1; i <= n; i++)
		s += i;
	return s;
}*/

long long rFact(int n) {
	if (n == 1)
		return 1;
	else
		return rFact(n - 1) * n;
}

int main()
{
	int n;

	printf("n을 입력 :");
	scanf_s("%d", &n);

	printf("재귀함수 : ");
	for (int i = 1; i <= n; i++)
		printf("%lld ", rFact(i));
	printf("\n");

	printf("반복문 :");
	for (int i = 1; i <= n; i++)
		printf("%lld ", fact(i));
	printf("\n");

}