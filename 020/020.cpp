#include <stdio.h>

int main() {
	//n1부터 n2까지의 n3의 배수를 출력하고 배수의 합 구하기
	//[반복의 규칙]
	//(1) 시작 : i = n1
	//(2) 반복조건 : i <= n2
	//(3) 변화 : i++   

	//[반복의 동작]
	//(1) n3의 배수이면 i를 출력하고 sum += i
	//(2) sum 출력

	int n1, n2, n3;
	int sum = 0;

	printf("3개의 정수를 입력하시오: ");
	scanf_s("%d %d %d", &n1, &n2, &n3);

	int i = n1;
	while ( i <= n2) {
		if (i % n3 == 0) {
			printf("%d", i);
			sum += i;
		}
		i++;
	}
	printf("\nsum = %d", sum);
	
	
}


	

