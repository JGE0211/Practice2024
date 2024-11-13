#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

struct point {
	int x, y;
};

double distance(point p1, point p2);
int main() {
	point p[100];

	srand(time(0));
	for (int i = 0; i < 100; i++) {
		p[i].x = rand();
		p[i].y = rand();
	}

	for (int i = 0; i < 100; i++) {
		printf("p[%d] = (%d, %d)\n", i, p[i].x, p[i].y);
	}



	// 가까운 점의 쌍을 구하려면 이중 반복문이 필요함 //한 점을 기준으로 나머지의 점의 거리를 구함.
	double min = INT_MAX; //정수의 최댓값
	int min1, min2;
	double d;
	for(int i = 0; i<100; i++)
		for (int j = i + 1; j < 100; j++) {
			d = distance(p[i], p[j]);
			if (d < min) {
				min = d;  //가까운 쌍에 거리 저장
				min1 = i;  
				min2 = j;
			}
		}
	printf("가장 가까운 점의 쌍 : p[%d]-p[%d]\n", min1, min2);
	printf("가장 가까운 점의 쌍 : (%d, %d)-(%d, %d) = %f\n", p[min1].x, p[min1].y, p[min2].x, p[min2].y, min);
}

double distance(point p1, point p2) {
	return sqrt((p2.x - p1.x)* (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}