#include <stdio.h>

double plus(double a, double b) { //double로 매개변수를 받았으니,,, 함수의 자료형도 double로 해야 됨!!! (리턴하는 값의 자료형을 사용해야 됨)
	return a + b;
 }

double minus(double a, double b) {  //매개변수가 이 로컬에서 변수로 사용되기 위해서 자료형이 정해져야 됨!!!
	return a - b;
}

double multiply(double a, double b) {
	return a * b;
}

double divide(double a, double b){
	return a / b;
}

int main()
{
	double a, b; /// float가 double로 바뀌긴 힘들지만 double은 float로 바꿀 수 있음 
	//그러니 보낼 변수를 float고 매개변수가 double이라면 조금 어려운 코드가 되겠음. 
	///so!! double로 변수를 받아 double로 매개변수를 받도록하는 것이 좀 더 수월한 작업임.
	printf("두 숫자를 입력하세요:");
	scanf_s("%lf %lf", &a, &b);

	printf("더하기 = %.1lf\n", plus(a, b));
	printf("빼기 = %.1lf\n", minus(a, b));
	printf("곱하기 = %.1lf\n", multiply(a, b));
	printf("나누기 = %.1lf\n", divide(a, b));

	// main()함수는 return 0; 가 숨겨져 있음 그래서 int임!!!!
}