#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct point {
	int x;
	int y;

};

struct rect {

	struct point p1;
	struct point p2;

};


int main(){

	struct rect r;

	printf("좌측 상단의 좌표를 입력하시오: ");
	scanf_s("%d %d", &r.p1.x, &r.p1.y);

	printf("우측 하단의 좌표를 입력하시오: ");
	scanf_s("%d %d", &r.p2.x, &r.p2.y);

	int width; //넓이
	int height; //높이
	int base; //밑변
	int round; //둘레
	height = r.p1.y - r.p2.y;
	base = r.p1.x - r.p2.x;

	width = abs(height) * abs(base);
	round = abs(height) * 2 + abs(base) * 2;

	printf("넓이는 %d\n",width);
	printf("둘레는 %d", round);

	return 0;
};

