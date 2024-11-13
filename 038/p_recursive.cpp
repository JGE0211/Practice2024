#include <stdio.h>

//programing 재귀
void rec(int n) {
	if (n > 5)
		return;
	printf("n = %d\n", n);
	rec(n + 1);
}

int main()
{
	rec(1);
}