#include <stdio.h>

// 점을 나타내는 구조체 정의
typedef struct point {
	int x, y; // x와 y 좌표
} Point;

// 두 점을 비교하는 함수
void comparePoint(Point p1, Point p2) {
	// x 좌표와 y 좌표가 모두 같은지 비교
	if (p1.x == p2.x && p1.y == p2.y)
		printf("p1 == p2\n"); // 좌표가 같으면 출력
	else
		printf("p1 != p2\n"); // 좌표가 다르면 출력
};

void main() {
	Point p1, p2; // Point 구조체의 인스턴스 두 개 선언

	// 첫 번째 점의 좌표 설정
	p1.x = 20;
	p1.y = 10;

	// 두 번째 점의 좌표 설정
	p2.x = 30;
	p2.y = 10;

	// 구조체는 그 자체로는 직접 비교할 수 없음
	// 구조체의 필드를 각각 비교해야 함
	/* // 이 비교문은 잘못된 예시입니다.
	if (p1 == p2) {
		printf("p1 == p2\n");
	}
	else
		printf("p1 != p2\n");
	*/

	// comparePoint 함수를 호출하여 두 점 비교
	comparePoint(p1, p2);
}
