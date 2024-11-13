#include <stdio.h>

// programing
/*int fact(int n) {
	if (n == 1)
		return 1;
	return fact(n - 1) * n;
}

int main()
{
	for (int i = 1; i <= 10; i++)
		printf("%d\n", fact(i));
	printf("%d\n", fact(10));
}*/



/*long long fact(long long n) {
	if (n == 1)
		return 1;
	return fact(n - 1) * n;
}
////////////////위에서 자료형을 다 long long으로 바꾸면/////....?
int main()
{
	for (int i = 1; i <= 20; i++)
		printf("%d! = %lld\n",i, fact(i));
	printf("%lld\n", fact(20));
}*/



long long fact(long long n) {
	if (n == 1)
		return 1;
	return fact(n - 1) * n;
}


int main()
{
	// 반복문
	long long f = 1; //곱해나가는 수이므로 1로 초기화한다. (더해나간다면 0으로 초기화)
	for (int i = 1; i <= 20; i++) {
		f = 1;
		for (int j = 1; j <= i; j++)
			f *= j;
		printf("%d! = %lld\n", i, fact(i));

	}
}