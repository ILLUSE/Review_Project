#include <stdio.h>
#include <stdlib.h>

//���� ��Ʃ��:https://www.youtube.com/watch?v=7Fz7JSvlr9g

typedef struct Node { //��� ����ü ����
	int data;
	struct Node* next;
}node;

void displayList(node* head) { //��带 �Է¹ް� ��忡������ ���
	node* p = head; //����� ���纻 ����
	while (p != NULL) { 
		printf("\t%d->", p->data); //\t : tab  //���� ��ġ�� ����� ������ ���
		p = p -> next; //���� ���� �̵�
	}
}


node* createLinkedList(int n) {

	int i = 0;
	node* head = NULL; //����Ʈ ������ ���� ����ü�� �ʱ�ȭ
	node* temp = NULL;
	node* p = NULL;

	for (i = 0; i < n; i++) { //���� ���ϴ� ��� ������ŭ
		temp = (node*)malloc(sizeof(node)); //���� ��� ����
		printf("\nEnter the data for node number: ", i + 1); //��忡 ���� ������ �Է¹���
		scanf_s("%d", &(temp->data)); 
		temp->next = NULL; 

		if (head == NULL) { //���� ����Ʈ�� ����ִٸ� temp �� ù ����
			head = temp;
		}
		else {
			p = head;
			while (p->next != NULL) //p�� ����Ʈ�� �� ������ �̵���Ŵ
				p = p->next;

			p->next = temp; //p������ temp �ֱ�

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


