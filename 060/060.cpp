#include <stdio.h>

int main()
{
	int x;

	scanf_s("%d", &x);
	///000000000001(1을 의미)을 왼쪽으로 시프트 2하면 000000000000100
	printf("%d\n", x & (1 << 2));
}