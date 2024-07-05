#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 100

typedef struct q{

	int top;
	int arr[MAX_QUEUE_SIZE];

}queue;

void init(queue* q) { //top,bottom -1로 초기화
	q->top = -1;
}

int is_full(queue* q) {
	if (q->top == MAX_QUEUE_SIZE - 1) {
		return 1;
	}
	else return 0;
}

int is_empty(queue* q) {
	if (q->top == -1) {
		return 1;
	}
	else return 0;
}

void enqueue(queue* q,int value) {
	if (is_full(q)) {
		printf("Queue is full");
		exit(1);
	}

	
	
	q->arr[++(q->top)] = value;
	printf("Enqueued : %d\n", value);
	for (int i = 0; i <= q->top; i++) {
		printf("%d\n", q->arr[i]);
	}
	printf("--------------------\n");
	
}


void dequeue(queue* q) {

	if (is_empty(q)) {
		printf("Queue is empty");
		exit(1);
	}
	else {
		printf("Dequeued : %d\n",q->arr[0]);
		int i;
		for (i = 0; i < q->top; i++) {
			q->arr[i] = q->arr[i + 1];
		}
		q->top--;

		for (int i = 0; i <= q->top; i++) {
			printf("%d\n", q->arr[i]);
		}
		printf("--------------------\n");

	}


}

int main() {

	queue q;
	init(&q); //초기화
	enqueue(&q, 1);
	enqueue(&q, 2);
	enqueue(&q, 3);
	enqueue(&q, 4);

	dequeue(&q);
	dequeue(&q);
	dequeue(&q);


	return 0;

}