#include <stdio.h>

int main()
{
	int x = 1,
		y = 2;

	printf("x > y = %d\n", x > y);
	printf("x < y = %d\n", x < y);
	printf("x == y = %d\n", x == y);
	printf("x != y = %d\n", x != y);
	printf("x >= y = %d\n", x >= y);
	printf("x <= y = %d\n", x <= y);
	printf("\n");


	// bool형을 사용
	int a = 2,
		b = 3;

	bool p = a > b;
	bool q = a < b;
	bool r = a == b;

	printf("a > b = %d\n", a > b);
	printf("a < b = %d\n", a < b);
	printf("a == b = %d\n", a == b);
	

}