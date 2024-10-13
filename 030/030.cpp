#include <stdio.h>

int main()
{
	int a[10];
	int max1, max2;

	printf("숫자 입력(10개):");
	for (int i = 0; i < 10; i++)
		scanf_s("%d", &a[i]);

	max1 = max2 = a[0];
	for (int i = 0; i < 10; i++) {
		if (max1 < a[i]) {
			max2 = max1;  // 기존의 max1을 max2에 저장하고
			max1 = a[i];  // a[i]가 max1보다 크다면 a[i] 값을 저장
		}

		else if(a[i] > max2)
			max2 = a[i];
	}
	printf("max1 = %d, max2 = %d\n", max1, max2);
}