#include <iostream>
using namespace std;

class Point {
private:
	int x, y;
public:
	Point() {
		x = 0;
		y = 0;
	}
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void setX(int x) {
		this->x = x;
	}
	int getX() {
		return x;
	}
	void setY(int y) {
		this->y = y;
	}
	int getY() {
		return y;
	}
};

int main()
{
	Point p3;
	Point p4(10, 20);

	cout << "(" << p3.getX() << ", " << p3.getY() << ")\n";
	cout << "(" << p4.getX() << ", " << p4.getY() << ")\n";
}
