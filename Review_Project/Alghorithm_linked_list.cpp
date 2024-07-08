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

	printf("\n\n");
}

node* createLinkedList(int n) { //�ʱ� ����Ʈ ����

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

node* insertNode(node* head, int value) {
	int index;

	printf("\nWhere do you want to insert? (0: HEAD , -1: TAIL) : ");
	scanf_s("%d", &index);

	node* temp = (node*)malloc(sizeof(node)); // �� ��� ���� �Ҵ�
	temp->data = value;
	temp->next = NULL;

	if (index == 0) { //�� �� ����
		temp -> next = head;
		head = temp;
		printf("\nYou insert Node at HEAD / value : %d\n\n", value);
	}
	else if (index == -1) { //�� �� ����
		
		node* p = head;
		while (p->next != NULL) //p�� ����Ʈ�� �� ������ �̵���Ŵ
			p = p->next;

		p->next = temp;

		printf("\nYou insert Node at last / value : %d\n\n", value);
	}
	else { //Ư�� �ε����� ����
		
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
			temp->next = p->next; // �� ����� next�� p�� ���� ���� ����
			p->next = temp; // p�� next�� �� ���� ����
		}

		printf("\nYou insert Node at %d / value : %d\n\n",index, value);
	}

	return head;
}

void freeLinkedList(node* head) { 

	node* p = NULL; //�ӽ� ������ ����
	
	
	while (head != NULL) { //p�� ����Ʈ�� �� ������ �̵���Ŵ
		
		p = head; //�ӽ� �����Ϳ� ���� �ּ� ����
		head = head->next; //��� �����͸� ���� �ּҷ� �̵�
		free(p); //���� ��ġ�� ��� free
		
	}
}


int main() {

	int n = 0;
	node* HEAD = NULL;

	printf("How many node do you want to make? : ");
	scanf_s("%d", &n);
	HEAD = createLinkedList(n);
	printf("\n");
	//��� ���� ��
	displayList(HEAD);
	
	HEAD = insertNode(HEAD, 6);
	HEAD = insertNode(HEAD, 7);
	HEAD = insertNode(HEAD, 8);


	//��� ���� ��
	displayList(HEAD);

	freeLinkedList(HEAD);
	return 0;

}


