#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* fp = NULL; //���� ����

	fp = fopen("input.txt", "r"); //w(����) ���� ���� ����(���ٸ� ����)

	if (fp == NULL) { //������ ������ �ʴ� ������ ���� ���� ���
		printf("���� ���⿡ �����Ͽ����ϴ�\n");
	}
	else {
		printf("���� ���⿡ �����߽��ϴ�.\n");
	}

	int c;

	while ((c = fgetc(fp)) != EOF) { //�ѱ��� �� �о�ͼ� c�� �ְ� , c�� EOF�̸� �ݺ��� ����
		putchar(c); //�о�� c ���
	}

	fclose(fp);

	return 0;
}