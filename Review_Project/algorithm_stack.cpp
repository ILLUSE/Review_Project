#include <stdio.h>
#include <stdlib.h>

#define SIZE 100 // ������ �ִ� ũ�⸦ �����մϴ�.

// ������ ���� ����ü�� �����մϴ�.
typedef struct Stacktype {
	int arr[SIZE]; // ������ �����͸� ������ �迭�Դϴ�.
	int top; // ������ �� ���� ����Ű�� �ε����Դϴ�.
} StackType;

// ������ �ʱ�ȭ�ϴ� �Լ��Դϴ�.
void init(StackType* s) {
	s->top = -1; // �迭�� index 0���� �����ϹǷ�, -1�� �ʱ�ȭ�Ͽ� ������ ��������� ��Ÿ���ϴ�.
}

// ������ ����ִ��� Ȯ���ϴ� �Լ��Դϴ�.
int is_empty(StackType* s) {
	if (s->top == -1) return 1; // top�� -1�̸� ������ ��������� �ǹ��մϴ�.
	else return 0;
}

// ������ ���� á���� Ȯ���ϴ� �Լ��Դϴ�.
int is_full(StackType* s) {
	if (s->top == SIZE - 1) return 1; // top�� �迭�� �ִ� �ε������ ������ ���� á���� �ǹ��մϴ�.
	else return 0;
}

// ���ÿ� �����͸� �߰��ϴ� �Լ��Դϴ�.
void push(StackType* s, int value) {
	if (is_full(s)) { // ������ ���� á���� Ȯ���մϴ�.
		printf("stack is full\n"); // ������ ���� á�ٸ� �޽����� ����ϰ� ���α׷��� �����մϴ�.
		exit(1);
	}
	else {
		s->arr[++(s->top)] = value; // ������ ���� ���� �ʾҴٸ�, top�� ������Ű�� �����͸� �߰��մϴ�.
		printf("Pushed %d\n", value); // �߰��� �����͸� ����մϴ�.
		printf("Stack Situation\n"); // ������ ���� ���¸� ����մϴ�.
		for (int i = 0; i <= s->top; i++) {
			printf("%d\n", s->arr[i]);
		}
		printf("--------------------\n");
	}
}

// ���ÿ��� �����͸� �����ϴ� �Լ��Դϴ�.
void pop(StackType* s) {
	if (is_empty(s)) { // ������ ����ִ��� Ȯ���մϴ�.
		printf("stack is empty\n"); // ������ ����ִٸ� �޽����� ����ϰ� ���α׷��� �����մϴ�.
		exit(1);
	}
	else {
		printf("Popped %d\n", s->arr[s->top]); // ���ŵǴ� �����͸� ����մϴ�.
		printf("Stack Situation\n"); // ������ ���� ���¸� ����մϴ�.
		for (int i = 0; i <= s->top - 1; i++) {
			printf("%d\n", s->arr[i]);
		}
		printf("--------------------\n");
		s->top--; // top�� �ϳ� �ٿ��ݴϴ�.
	}
}

// ������ �� �� �����͸� Ȯ���ϴ� �Լ��Դϴ�.
void peek(StackType* s) {
	if (is_empty(s)) { // ������ ����ִ��� Ȯ���մϴ�.
		printf("stack is empty\n"); // ������ ����ִٸ� �޽����� ����ϰ� ���α׷��� �����մϴ�.
		exit(1);
	}
	else {
		printf("\nPeek is %d\n\n", s->arr[s->top]); // ������ �� �� �����͸� ����մϴ�.
	}
}

int main() {
	StackType s; // ���� �ν��Ͻ��� �����մϴ�.
	init(&s); // ������ �ʱ�ȭ�մϴ�.

	// ���ÿ� �����͸� �߰��մϴ�.
	push(&s, 1);
	push(&s, 2);
	push(&s, 3);

	peek(&s); // ������ �� �� �����͸� Ȯ���մϴ�.

	// ���ÿ��� �����͸� �����մϴ�.
	pop(&s);
	pop(&s);
	pop(&s);

	return 0;
}