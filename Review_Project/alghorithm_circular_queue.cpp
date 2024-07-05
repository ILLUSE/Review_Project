#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 10 // 큐의 최대 크기를 정의합니다.

typedef struct q {
	int front; // 큐의 가장 앞 부분(dequeue 하면 +1)
	int rear; // 큐의 가장 뒷부분(enqueue 하면 + 1)
	int arr[MAX_QUEUE_SIZE]; // 큐의 실제 데이터를 저장하는 배열
} queue;

void init(queue* q) {
	q->front = 0; // 큐의 front를 0으로 초기화합니다.
	q->rear = -1; // 큐의 rear를 -1로 초기화합니다. (큐가 비어있음을 나타냄)
}

void printQueue(queue* q) {
	int count = (q->rear + MAX_QUEUE_SIZE - q->front) % MAX_QUEUE_SIZE + 1; // 큐에 저장된 요소의 개수를 계산합니다.
	printf("\nQueue contains %d elements:\n", count); // 큐에 저장된 요소의 개수를 출력합니다.
	for (int i = 0; i < count; i++) {
		int index = (q->front + i) % MAX_QUEUE_SIZE; // 순환적으로 인덱스를 계산합니다.
		printf("%d ", q->arr[index]); // 큐의 요소를 출력합니다.
	}
	printf("\n---------------\n"); // 구분선을 출력합니다.
}

int is_full(queue* q) {
	if (q->rear == -1) return 0; // 큐가 초기화된 직후 상태라면 가득 차지 않았다고 가정합니다.

	if ((q->rear + 1) % MAX_QUEUE_SIZE == q->front) {
		return 1; // 큐가 가득 찼다면 1을 반환합니다.
	}
	else return 0; // 그렇지 않다면 0을 반환합니다.
}

int is_empty(queue* q) {
	if (q->rear == q->front) {
		return 1; // 큐가 비어있다면 1을 반환합니다.
	}
	else return 0; // 그렇지 않다면 0을 반환합니다.
}

void enqueue(queue* q, int value) {
	if (is_full(q)) { // 큐가 가득 찼는지 확인합니다.
		printf("Queue is full\n"); // 가득 찼다면 메시지를 출력하고 프로그램을 종료합니다.
		exit(1);
	}

	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE; // rear를 한 칸 뒤로 이동합니다.
	q->arr[q->rear] = value; // 새로운 값을 rear 위치에 삽입합니다.
	printf("Enqueued : %d", value); // 삽입된 값을 출력합니다.
	printQueue(q); // 큐의 현재 상태를 출력합니다.
}

void dequeue(queue* q) {
	if (is_empty(q)) { // 큐가 비어 있는지 확인합니다.
		printf("Queue is empty\n"); // 비어 있다면 메시지를 출력하고 프로그램을 종료합니다.
		exit(1);
	}

	printf("dequeued : %d\n", q->arr[q->front]); // 제거될 값을 출력합니다.
	q->front = (q->front + 1) % MAX_QUEUE_SIZE; // front를 한 칸 뒤로 이동합니다.
	printQueue(q); // 큐의 현재 상태를 출력합니다.
}

int main() {
	queue q;

	init(&q); // 큐를 초기화합니다.

	enqueue(&q, 1); // 큐에 1을 추가합니다.
	enqueue(&q, 2); // 큐에 2를 추가합니다.
	enqueue(&q, 3); // 큐에 3을 추가합니다.
	enqueue(&q, 4); // 큐에 4를 추가합니다.

	dequeue(&q); // 큐에서 요소를 하나 제거합니다.
	dequeue(&q); // 큐에서 요소를 하나 더 제거합니다.
	dequeue(&q); // 큐에서 또 다른 요소를 제거합니다.
	dequeue(&q); // 큐에서 마지막 요소를 제거합니다.
}
