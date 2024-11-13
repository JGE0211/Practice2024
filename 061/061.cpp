#include <stdio.h>

int main()
{
	int x;

	scanf_s("%d", &x);
	///000000000001(1을 의미)을 왼쪽으로 시프트 2하면 000000000000100
	printf("아래 4자리 = %d\n", x & 15);


	//62번
	for (int i = 1; i <= 4; i++)
		printf("%d번 시프트 : %d\n",i, x<<i);
}
