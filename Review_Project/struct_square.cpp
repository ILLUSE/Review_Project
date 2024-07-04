#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// 점을 나타내는 구조체 정의
typedef struct point {
	int x; // x 좌표
	int y; // y 좌표
} Point;

// 직사각형을 나타내는 구조체 정의
typedef struct rect {
	Point p1; // 좌측 상단의 점
	Point p2; // 우측 하단의 점
} Rect;

int main() {
	Rect r; // 직사각형 구조체 변수 선언

	// 사용자로부터 좌측 상단의 좌표 입력 받기
	printf("좌측 상단의 좌표를 입력하시오: ");
	scanf_s("%d %d", &r.p1.x, &r.p1.y);

	// 사용자로부터 우측 하단의 좌표 입력 받기
	printf("우측 하단의 좌표를 입력하시오: ");
	scanf_s("%d %d", &r.p2.x, &r.p2.y);

	int width; // 넓이
	int height; // 높이
	int base; // 밑변
	int round; // 둘레
	// 높이와 밑변 계산
	height = r.p1.y - r.p2.y;
	base = r.p1.x - r.p2.x;

	// 넓이와 둘레 계산
	width = abs(height) * abs(base); // 넓이는 높이와 밑변의 절대값의 곱
	round = abs(height) * 2 + abs(base) * 2; // 둘레는 높이와 밑변의 절대값의 합의 2배

	// 계산된 넓이와 둘레 출력
	printf("넓이는 %d\n", width);
	printf("둘레는 %d", round);

	return 0;
};

