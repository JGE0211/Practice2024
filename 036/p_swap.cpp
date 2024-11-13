#include <stdio.h>

// programing
void swap(int x, int y)
{
	int tmp = x;
	x = y;
	y = tmp;
}

void swap2(int* px, int* py)
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}
int main()
{
	int a, b;

	scanf_s("%d %d", &a, &b);
	swap(a, b);

	printf("a = %d, b = %d\n", a, b);

	swap2(&a, &b);
	printf("a = %d, b = %d\n", a, b);
}