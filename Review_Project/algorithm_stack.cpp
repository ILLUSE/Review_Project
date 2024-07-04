#include <stdio.h>
#include <stdlib.h>

#define SIZE 100 // 스택의 최대 크기를 정의합니다.

// 스택을 위한 구조체를 정의합니다.
typedef struct Stacktype {
	int arr[SIZE]; // 스택의 데이터를 저장할 배열입니다.
	int top; // 스택의 맨 위를 가리키는 인덱스입니다.
} StackType;

// 스택을 초기화하는 함수입니다.
void init(StackType* s) {
	s->top = -1; // 배열은 index 0부터 시작하므로, -1로 초기화하여 스택이 비어있음을 나타냅니다.
}

// 스택이 비어있는지 확인하는 함수입니다.
int is_empty(StackType* s) {
	if (s->top == -1) return 1; // top이 -1이면 스택이 비어있음을 의미합니다.
	else return 0;
}

// 스택이 가득 찼는지 확인하는 함수입니다.
int is_full(StackType* s) {
	if (s->top == SIZE - 1) return 1; // top이 배열의 최대 인덱스라면 스택이 가득 찼음을 의미합니다.
	else return 0;
}

// 스택에 데이터를 추가하는 함수입니다.
void push(StackType* s, int value) {
	if (is_full(s)) { // 스택이 가득 찼는지 확인합니다.
		printf("stack is full\n"); // 스택이 가득 찼다면 메시지를 출력하고 프로그램을 종료합니다.
		exit(1);
	}
	else {
		s->arr[++(s->top)] = value; // 스택이 가득 차지 않았다면, top을 증가시키고 데이터를 추가합니다.
		printf("Pushed %d\n", value); // 추가된 데이터를 출력합니다.
		printf("Stack Situation\n"); // 스택의 현재 상태를 출력합니다.
		for (int i = 0; i <= s->top; i++) {
			printf("%d\n", s->arr[i]);
		}
		printf("--------------------\n");
	}
}

// 스택에서 데이터를 제거하는 함수입니다.
void pop(StackType* s) {
	if (is_empty(s)) { // 스택이 비어있는지 확인합니다.
		printf("stack is empty\n"); // 스택이 비어있다면 메시지를 출력하고 프로그램을 종료합니다.
		exit(1);
	}
	else {
		printf("Popped %d\n", s->arr[s->top]); // 제거되는 데이터를 출력합니다.
		printf("Stack Situation\n"); // 스택의 현재 상태를 출력합니다.
		for (int i = 0; i <= s->top - 1; i++) {
			printf("%d\n", s->arr[i]);
		}
		printf("--------------------\n");
		s->top--; // top을 하나 줄여줍니다.
	}
}

// 스택의 맨 위 데이터를 확인하는 함수입니다.
void peek(StackType* s) {
	if (is_empty(s)) { // 스택이 비어있는지 확인합니다.
		printf("stack is empty\n"); // 스택이 비어있다면 메시지를 출력하고 프로그램을 종료합니다.
		exit(1);
	}
	else {
		printf("\nPeek is %d\n\n", s->arr[s->top]); // 스택의 맨 위 데이터를 출력합니다.
	}
}

int main() {
	StackType s; // 스택 인스턴스를 생성합니다.
	init(&s); // 스택을 초기화합니다.

	// 스택에 데이터를 추가합니다.
	push(&s, 1);
	push(&s, 2);
	push(&s, 3);

	peek(&s); // 스택의 맨 위 데이터를 확인합니다.

	// 스택에서 데이터를 제거합니다.
	pop(&s);
	pop(&s);
	pop(&s);

	return 0;
}