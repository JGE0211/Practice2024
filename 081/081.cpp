#include <iostream>
using namespace std;

int square(int n) { return n * n; }
int cube(int n) { return n * n * n; }

int GetMax(int a[], int n, int(*f)(int)) {
	int max = f(a[0]);
	for (int i = 1; i < n; i++)
		if (max < f(a[i]))
			max = f(a[i]);
	return max;
}

int main()
{
	int a[6] = { 3, 1, -4, 5, 9, -2 };

	cout << GetMax(a, 6, square) << endl;
	cout << GetMax(a, 6, cube) << endl;
}
