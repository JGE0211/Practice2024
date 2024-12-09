#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double area;

	try {
		cout << "면적 입력 : ";
		cin >> area;
		if (area < 0)
			throw area;
		cout << sqrt(area) << endl;
	}
	catch (double e) {
		cout << e << "면적은 0보다 크거나 같아야 합니다." << endl;
	}
	
}