#include <stdio.h>

int main()
{
	int x = 3,
		y = 4;

	printf(" x && y = %d\n", x && y);
	printf(" x || y = %d\n", x || y);
	printf(" !x = %d\n", !x );
	printf(" !y = %d\n", !y);
	printf("\n");


	//bool형을 사용
	int a = 3,
		b = 4;

	bool p = a && b;
	bool q = a || b;
	bool r = !a;
	bool t = !b;

	printf(" a && b = %d\n", p);
	printf(" a || b = %d\n", q);
	printf(" !a = %d\n", r);
	printf(" !b = %d\n", t);



}