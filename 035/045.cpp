#include <stdio.h>

void cycle(int* a, int* b, int* c) {
	int tmp = *a;   
	*a = *b;
	*b = *c;
	*c = tmp;

	
}

int main()
{
	int a, b, c;
	printf("3개의 숫자를 입력하세요:");
	scanf_s("%d %d %d", &a,&b,&c);

	int* ptra = &a;
	int* ptrb = &b;
	int* ptrc = &c;

	cycle(ptra, ptrb, ptrc);
	printf("%d %d %d\n", a, b, c);

}