#include <stdio.h>

// programing //044
double plus(double , double );
double minus(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);     //prototype (함수 원형) --- 이런 게 있어~~~라고 알려주는 느낌

int main()
{
	double a, b;
	printf("두 숫자를 입력하세요:");
	scanf_s("%lf %lf", &a, &b);

	printf("더하기 = %.1lf\n", plus(a, b));
	printf("빼기 = %.1lf\n", minus(a, b));
	printf("곱하기 = %.1lf\n", multiply(a, b));
	printf("나누기 = %.1lf\n", divide(a, b));

	
}

double plus(double a, double b) { 
	return a + b;
}

double minus(double a, double b) {  
	return a - b;
}

double multiply(double a, double b) {
	return a * b;
}

double divide(double a, double b) {
	return a / b;
}
