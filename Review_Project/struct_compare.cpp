#include <stdio.h>

struct point {

	int x, y;

};

//구조체를 함수에 넣기
//int p1처럼 선언하여 넣듯 구조체도 선언하여 넣기

void comparePoint(struct point p1, struct point p2){

	if(p1.x == p2.x && p1.y == p2.y)
		printf("p1 == p2\n");
	else 
		printf("p1 != p2\n");
};

void main() {

	struct point p1, p2;

	p1.x = 20;
	p1.y = 10;

	p2.x = 30;
	p2.y = 10;
	
	//구조체는 그 자체를 가지고 비교불가!!!
	//구조체 안의 요소들을 각각 비교해주어야 함
	/* //해당 비교문은 잘못된 예시
	if (p1 == p2) {
		printf("p1 == p2\n");
	}
	else
		printf("p1 != p2\n");
	*/

	comparePoint(p1, p2);

}