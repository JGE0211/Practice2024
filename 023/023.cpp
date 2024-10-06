#include <stdio.h>

int main()
{
	////2중반복문
	////외워주세요*******
	for (int y = 1; y <= 9; y++){ 
		for (int x = 2; x <= 5; x++) {
			printf("%d x %d = %d\t", x, y, x * y);
		}
		printf("\n");
	}

	printf("\n");

	for (int y = 1; y <= 9; y++) {
		for (int x = 6; x <= 9; x++) {
			printf("%d x %d = %d\t", x, y, x * y);
		}
		printf("\n");
	}
	
}