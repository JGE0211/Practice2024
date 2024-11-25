#include <iostream>
#include <cmath>
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
	double distance(Point p) { 
		return sqrt((p.x - x) * (p.x - x) + (p.y - y) * (p.y - y));   // 여기서의 p.x는 p4의 x를 의미
	}
};

int main()
{
	Point p3;
	Point p4(10, 20);

	cout << "(" << p3.getX() << ", " << p3.getY() << ")\n";
	cout << "(" << p4.getX() << ", " << p4.getY() << ")\n";
	cout << "거리 : " << p3.distance(p4) << endl;  // 여기에서 괄호 안에 p4를 보냇기에  ..... ( p4와 p3의 거리)
}