#include <stdio.h>
#include <stdlib.h>

//구조체가 밖에 있으면 전역,, 뭐 어떠한 함수 안에 있으면 거기에서만 사용 가능
struct point {
	int x;
	int y;
};

struct rectangle {
	struct point p1;
	struct point p2;
};

int area(point p1, point p2);
int rectArea(rectangle r);

int main()
{
	point p1, p2;
	

	printf("한 점의 좌표(x, y) 입력 :");
	scanf_s("%d %d", &p1.x, &p1.y);

	printf("한 점의 좌표(x, y) 입력 :");
	scanf_s("%d %d", &p2.x, &p2.y);

	printf("(%d, %d)과 (%d, %d)의 면적 = %d\n",
		p1.x, p1.y, p2.x, p2.y, area(p1, p2)); //rectArea(r)

	rectangle r;
	r.p1 = p1;   //(r의 p1)을 p1에서 가져다 쓰겟다
	r.p2 = p2;
	printf("(%d, %d)과 (%d, %d)의 면적 = %d\n",
		p1.x, p1.y, p2.x, p2.y, rectArea(r)); 
}



int area(point p1, point p2)
{
	// 면적은 절댓값으로 계산하는 것이 나음  /// 정수.실수 절댓값 저장되어있는 위치 다름?/<- 찾아보기
	return abs((p2.x - p1.x) * (p2.y - p1.y));
}


int rectArea(rectangle r)
{
	return abs((r.p2.x - r.p1.x) * (r.p2.y - r.p1.y));  //렉텡글에잇는 p1에 잇는 x or y를 의미함
}