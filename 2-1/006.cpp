#include <stdio.h>

int main()
{
	printf("ȭ��\t����\n");
	printf("=============\n");

	float  f = 100.0;
	float  c = (5.0 / 9)*(f - 32);    // ����� �Ǽ��� ��������,,,,  �Ǽ��� �� �־�� ��!!!
	printf("%.1f\t%.1f\n", f, c);

	float  a = 80.0;
	float  b = (5. / 9)*( a - 32);
	printf("%.1f\t%.1f\n", a,  b);

	float  t = 60.0;
	float  d = (5. / 9)*( t - 32);
	printf("%.1f\t%.1f\n", t, d);


}