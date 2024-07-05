#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 10 // ť�� �ִ� ũ�⸦ �����մϴ�.

typedef struct q {
	int front; // ť�� ���� �� �κ�(dequeue �ϸ� +1)
	int rear; // ť�� ���� �޺κ�(enqueue �ϸ� + 1)
	int arr[MAX_QUEUE_SIZE]; // ť�� ���� �����͸� �����ϴ� �迭
} queue;

void init(queue* q) {
	q->front = 0; // ť�� front�� 0���� �ʱ�ȭ�մϴ�.
	q->rear = -1; // ť�� rear�� -1�� �ʱ�ȭ�մϴ�. (ť�� ��������� ��Ÿ��)
}

void printQueue(queue* q) {
	int count = (q->rear + MAX_QUEUE_SIZE - q->front) % MAX_QUEUE_SIZE + 1; // ť�� ����� ����� ������ ����մϴ�.
	printf("\nQueue contains %d elements:\n", count); // ť�� ����� ����� ������ ����մϴ�.
	for (int i = 0; i < count; i++) {
		int index = (q->front + i) % MAX_QUEUE_SIZE; // ��ȯ������ �ε����� ����մϴ�.
		printf("%d ", q->arr[index]); // ť�� ��Ҹ� ����մϴ�.
	}
	printf("\n---------------\n"); // ���м��� ����մϴ�.
}

int is_full(queue* q) {
	if (q->rear == -1) return 0; // ť�� �ʱ�ȭ�� ���� ���¶�� ���� ���� �ʾҴٰ� �����մϴ�.

	if ((q->rear + 1) % MAX_QUEUE_SIZE == q->front) {
		return 1; // ť�� ���� á�ٸ� 1�� ��ȯ�մϴ�.
	}
	else return 0; // �׷��� �ʴٸ� 0�� ��ȯ�մϴ�.
}

int is_empty(queue* q) {
	if (q->rear == q->front) {
		return 1; // ť�� ����ִٸ� 1�� ��ȯ�մϴ�.
	}
	else return 0; // �׷��� �ʴٸ� 0�� ��ȯ�մϴ�.
}

void enqueue(queue* q, int value) {
	if (is_full(q)) { // ť�� ���� á���� Ȯ���մϴ�.
		printf("Queue is full\n"); // ���� á�ٸ� �޽����� ����ϰ� ���α׷��� �����մϴ�.
		exit(1);
	}

	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE; // rear�� �� ĭ �ڷ� �̵��մϴ�.
	q->arr[q->rear] = value; // ���ο� ���� rear ��ġ�� �����մϴ�.
	printf("Enqueued : %d", value); // ���Ե� ���� ����մϴ�.
	printQueue(q); // ť�� ���� ���¸� ����մϴ�.
}

void dequeue(queue* q) {
	if (is_empty(q)) { // ť�� ��� �ִ��� Ȯ���մϴ�.
		printf("Queue is empty\n"); // ��� �ִٸ� �޽����� ����ϰ� ���α׷��� �����մϴ�.
		exit(1);
	}

	printf("dequeued : %d\n", q->arr[q->front]); // ���ŵ� ���� ����մϴ�.
	q->front = (q->front + 1) % MAX_QUEUE_SIZE; // front�� �� ĭ �ڷ� �̵��մϴ�.
	printQueue(q); // ť�� ���� ���¸� ����մϴ�.
}

int main() {
	queue q;

	init(&q); // ť�� �ʱ�ȭ�մϴ�.

	enqueue(&q, 1); // ť�� 1�� �߰��մϴ�.
	enqueue(&q, 2); // ť�� 2�� �߰��մϴ�.
	enqueue(&q, 3); // ť�� 3�� �߰��մϴ�.
	enqueue(&q, 4); // ť�� 4�� �߰��մϴ�.

	dequeue(&q); // ť���� ��Ҹ� �ϳ� �����մϴ�.
	dequeue(&q); // ť���� ��Ҹ� �ϳ� �� �����մϴ�.
	dequeue(&q); // ť���� �� �ٸ� ��Ҹ� �����մϴ�.
	dequeue(&q); // ť���� ������ ��Ҹ� �����մϴ�.
}
