#include <stdio.h>

int main()
{
	float weight, height;

	printf("몸무게(kg) :");
	scanf_s("%f", &weight);
	printf("키(cm) :");
	scanf_s("%f", &height);

	height /= 100;   // m단위로 변환
	
	float bmi = weight / (height * height);
	printf("bmi : %.1f\n", bmi);
}