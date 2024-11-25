#include <iostream>
using namespace std;

class Point {
private:
	int x, y;
public:
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
	Point p1, p2;

	//p1.x //x는 프라이빗이기에 이렇게 못씀
	p1.setX(10);
	p1.setY(10);

	p2.setX(20);
	p2.setY(20);

	cout << "(" << p1.getX() << ", " << p1.getY() << ")\n";
	cout << "(" << p2.getX() << ", " << p2.getY() << ")\n";
}