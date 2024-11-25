#include <iostream>
using namespace std;

class Circle {
private:
	int radius; //반지름
public:
	Circle() {
		radius = 0;
	}
	Circle(int r) {
		if (r >= 0)
			radius = r;
	}

	double getArea() {
		return 3.14 * radius * radius;
	}
};

int main()
{
	Circle donut(5);
	Circle pie(10);
	Circle pizza(15);
	
	cout << "donut : " << donut.getArea() << endl;
	cout << "pie : " << pie.getArea() << endl;
	cout << "pizza : " << pizza.getArea() << endl;
}