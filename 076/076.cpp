#include <iostream>  /// 76 상속문제 꼭 나옴요
#include <string.h>
using namespace std;

class Point {
protected:
	int x, y;
public:
	Point() : x(0), y(0) {}
	Point(int x, int y) : x(x), y(y) {}
	void Set(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void Print() {
		cout << "(" << x << ", " << y << ")" << endl;
	}
};

class ColorPoint :public Point {
private:
	string color;
public:
	ColorPoint() :Point(), color("black") {}  // 디폴트 생성자
	ColorPoint(int x, int y, string color) : Point(x, y), color(color){}
	void SetColor(string color) {
		this->color = color;
	}
	void Print() {
		cout << "(" << x << ", " << y << ") " << color << endl;
	}

};
int main()
{
	Point a(10, 20);
	ColorPoint c(30, 30, "red");
	
	c.Set(40, 40);
	c.SetColor("blue");
	
	a.Print();
	c.Print();
	
}