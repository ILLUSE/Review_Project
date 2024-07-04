#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 100

typedef struct q{

	int top;
	int bottom;
	int arr[MAX_QUEUE_SIZE];

}queue;

void init(queue* q) { //top,bottom -1로 초기화
	q->bottom = -1;
	q->top = -1;
}

int is_full(queue* q) {
	if (q->top = MAX_QUEUE_SIZE - 1) {
		return 1;
	}
	else return 0;
}

int is_empty(queue* q) {
	if (q->top = -1) {
		return 1;
	}
	else return 0;
}

void enqueue(queue* q) {
	//stack과 동일하게 하면 될듯
}

void dequeue(queue* q) {
	//맨 아래에 있는 걸 빼고 루프 돌면서 각 값들 한칸씩 아래로 옮겨주기
}

int main() {

	queue q;
	init(&q); //초기화

	

	return 0;

}