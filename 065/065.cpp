#include <iostream>
using namespace std;

void cycle(int& x, int& y, int& z) {
	int tmp = x;
	x = y;
	y = z;
	z = tmp;
}

int main()
{
	int x, y, z;

	cout << "세 개 숫자 입력 : ";
	cin >> x >> y >> z;

	cycle(x, y, z);
	cout << x << ", " << y << ", " << z << endl;
}