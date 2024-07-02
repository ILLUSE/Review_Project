#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book { //구조체 정의

	int number;
	char title[100];

};

void showBook(struct Book* p, int n) { //구조체 포인터를 매개변수로 받아 출력해주는 함수

	int i;
	for (i = 0; i < n; i++) { //n개의 책 정보 출력
		printf("Book number: %d\n", (p + i)->number);
		printf("Book title: %s\n", (p + i)->title);

	};
}

int main() {

	struct Book* p; //구조체 포인터 선언
	p = (struct Book*)malloc(2 * sizeof(struct Book)); //구조체 배열을 동적할당하는 방법
	if (p == NULL) {
		printf("Memory allocation failed\n");
		return 1;
	}


	//malloc 사용한 경우의 방법
	// ->는 .과 같은 의미로 사용된다.

	p->number = 1;
	strcpy_s(p->title, "C Programming");

	(p + 1)->number = 2;
	strcpy_s((p + 1)->title, "Data Structure");

	//기존 malloc 사용하지 않은 방법
	/*
	p[0].number = 1;
	strcpy(p[0].title, "C Programming");

	p[1].number = 2;
	strcpy(p[1].title, "Data Structure");
	free(p);

	*/

	showBook(p,2);
	
	
	free(p); //동적할당 해제


	return 0;
}