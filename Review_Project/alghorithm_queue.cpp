#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 100

typedef struct q{

	int top;
	int bottom;
	int arr[MAX_QUEUE_SIZE];

}queue;

void init(queue* q) { //top,bottom -1�� �ʱ�ȭ
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
	//stack�� �����ϰ� �ϸ� �ɵ�
}

void dequeue(queue* q) {
	//�� �Ʒ��� �ִ� �� ���� ���� ���鼭 �� ���� ��ĭ�� �Ʒ��� �Ű��ֱ�
}

int main() {

	queue q;
	init(&q); //�ʱ�ȭ

	

	return 0;

}