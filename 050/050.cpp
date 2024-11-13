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
