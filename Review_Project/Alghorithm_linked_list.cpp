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
}


node* createLinkedList(int n) {

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


int main() {

	int n = 0;
	node* HEAD = NULL;
	printf("How many node do you want to make? : ");
	scanf_s("%d", &n);
	HEAD = createLinkedList(n);
	printf("\n");
	displayList(HEAD);


	return 0;

}


