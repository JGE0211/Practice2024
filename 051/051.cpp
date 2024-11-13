#include <stdio.h>
#include <math.h>

//구조체가 밖에 있으면 전역,, 뭐 어떠한 함수 안에 있으면 거기에서만 사용 가능
struct point {
	int x;
	int y;
};

struct rectangle {
	struct point p1;
	struct point p2;
};

double distance(point p1, point p2);
// 51번
int main()
{
	point p1, p2;

	printf("한 점의 좌표(x, y) 입력 :");
	scanf_s("%d %d", &p1.x, &p1.y);

	printf("한 점의 좌표(x, y) 입력 :");
	scanf_s("%d %d", &p2.x, &p2.y);

	printf("(%d, %d) - (%d, %d)의 거리 = %f\n",
		p1.x, p1.y, p2.x, p2.y, distance(p1, p2));

}

double distance(point p1, point p2)
{
	//루트 .. >> sqrt함수 >> math.h 사용
	//제곱 ...>> pow함수   //pow 함수말고 실제로 계산해서 해도 ㄱㅊ
	return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}
