#include <stdio.h>
#include <stdlib.h>

//참조 유튜브:https://www.youtube.com/watch?v=7Fz7JSvlr9g

typedef struct Node { //노드 구조체 생성
	int data;
	struct Node* next;
}node;

void displayList(node* head) { //헤드를 입력받고 헤드에서부터 출력
	node* p = head; //헤드의 복사본 생성
	while (p != NULL) { 
		printf("\t%d->", p->data); //\t : tab  //현재 위치한 노드의 데이터 출력
		p = p -> next; //다음 노드로 이동
	}

	printf("\n\n");
}

node* createLinkedList(int n) { //초기 리스트 생성

	int i = 0;
	node* head = NULL; //리스트 생성을 위한 구조체들 초기화
	node* temp = NULL;
	node* p = NULL;

	for (i = 0; i < n; i++) { //내가 원하는 노드 개수만큼
		temp = (node*)malloc(sizeof(node)); //예비 노드 생성
		printf("\nEnter the data for node number: ", i + 1); //노드에 넣을 데이터 입력받음
		scanf_s("%d", &(temp->data)); 
		temp->next = NULL; 

		if (head == NULL) { //만약 리스트가 비어있다면 temp 를 첫 노드로
			head = temp;
		}
		else {
			p = head;
			while (p->next != NULL) //p를 리스트의 맨 끝까지 이동시킴
				p = p->next;

			p->next = temp; //p다음에 temp 넣기

		}

	}
	return head;
}

node* insertNode(node* head, int value) {
	int index;

	printf("\nWhere do you want to insert? (0: HEAD , -1: TAIL) : ");
	scanf_s("%d", &index);

	node* temp = (node*)malloc(sizeof(node)); // 새 노드 동적 할당
	temp->data = value;
	temp->next = NULL;

	if (index == 0) { //맨 앞 삽입
		temp -> next = head;
		head = temp;
		printf("\nYou insert Node at HEAD / value : %d\n\n", value);
	}
	else if (index == -1) { //맨 뒤 삽입
		
		node* p = head;
		while (p->next != NULL) //p를 리스트의 맨 끝까지 이동시킴
			p = p->next;

		p->next = temp;

		printf("\nYou insert Node at last / value : %d\n\n", value);
	}
	else { //특정 인덱스에 삽입
		
		if (index < 0) {
			printf("Invalid index\n");
			return head;
		}

		int count = 1;
		node* p = head;
		while (p != NULL && count < index) {
		
			p = p->next;
			count++;
		
		}

		if (p == NULL) {
			printf("Index out of bounds\n");
		}
		else {
			temp->next = p->next; // 새 노드의 next를 p의 다음 노드로 설정
			p->next = temp; // p의 next를 새 노드로 설정
		}

		printf("\nYou insert Node at %d / value : %d\n\n",index, value);
	}

	return head;
}

void freeLinkedList(node* head) { 

	node* p = NULL; //임시 포인터 선언
	
	
	while (head != NULL) { //p를 리스트의 맨 끝까지 이동시킴
		
		p = head; //임시 포인터에 현재 주소 저장
		head = head->next; //헤드 포인터를 다음 주소로 이동
		free(p); //현재 위치한 노드 free
		
	}
}


int main() {

	int n = 0;
	node* HEAD = NULL;

	printf("How many node do you want to make? : ");
	scanf_s("%d", &n);
	HEAD = createLinkedList(n);
	printf("\n");
	//노드 삽입 전
	displayList(HEAD);
	
	HEAD = insertNode(HEAD, 6);
	HEAD = insertNode(HEAD, 7);
	HEAD = insertNode(HEAD, 8);


	//노드 삽입 후
	displayList(HEAD);

	freeLinkedList(HEAD);
	return 0;

}


