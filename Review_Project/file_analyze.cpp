#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void clearInputBuffer() { // �Է¹��� �����ִ� �Լ�
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
	FILE* fp; // ���� ����

	char file_name[256];
	char buffer[256];
	char word[256];
	int line = 0;

	printf("���� �̸��� �Է��Ͻÿ�: ");
	scanf("%255s", file_name); // scanf�� ����ϰ� ���� �����÷ο� ����
	clearInputBuffer();

	printf("ã���� �ϴ� �ܾ �Է��Ͻÿ�: ");
	scanf("%255s", word); // scanf�� ����ϰ� ���� �����÷ο� ����
	clearInputBuffer();

	if ((fp = fopen(file_name, "r")) == NULL) { // ���� ����ڰ� �Է��� �̸��� ������ ���ٸ�
		fprintf(stderr, "���� %s�� �� �� �����ϴ�.\n", file_name); // ���� ���� ���
		return 1; // ���α׷� ����
	}

	while (fgets(buffer, 256, fp)) { // fp ���Ͽ��� 256��ŭ ������ buffer�� �ִ´�(���๮�ڵ� ������ ��)
		line++; // �� ��° ������ ����

		if (strstr(buffer, word)) {
			printf("%d��° �ٿ��� %s�� �߰ߵǾ����ϴ�\n", line, word);
		}
	}

	fclose(fp);

	return 0;
}