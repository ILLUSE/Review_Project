#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book { //����ü ����

	int number;
	char title[100];

};

void showBook(struct Book* p, int n) { //����ü �����͸� �Ű������� �޾� ������ִ� �Լ�

	int i;
	for (i = 0; i < n; i++) { //n���� å ���� ���
		printf("Book number: %d\n", (p + i)->number);
		printf("Book title: %s\n", (p + i)->title);

	};
}

int main() {

	struct Book* p; //����ü ������ ����
	p = (struct Book*)malloc(2 * sizeof(struct Book)); //����ü �迭�� �����Ҵ��ϴ� ���
	if (p == NULL) {
		printf("Memory allocation failed\n");
		return 1;
	}


	//malloc ����� ����� ���
	// ->�� .�� ���� �ǹ̷� ���ȴ�.

	p->number = 1;
	strcpy_s(p->title, "C Programming");

	(p + 1)->number = 2;
	strcpy_s((p + 1)->title, "Data Structure");

	//���� malloc ������� ���� ���
	/*
	p[0].number = 1;
	strcpy(p[0].title, "C Programming");

	p[1].number = 2;
	strcpy(p[1].title, "Data Structure");
	free(p);

	*/

	showBook(p,2);
	
	
	free(p); //�����Ҵ� ����


	return 0;
}