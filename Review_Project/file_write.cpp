#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* fp = NULL; //���� ����

	fp = fopen("output.txt", "w"); //w(����) ���� ���� ����(���ٸ� ����)

	if (fp == NULL) { //������ ������ �ʴ� ������ ���� ���� ���
		printf("���� ���⿡ �����Ͽ����ϴ�\n");
	}
	else {
		printf("���� ���⿡ �����߽��ϴ�.\n");
	}

	fputc('H', fp); //���Ͽ� �۾���
	fputc('E', fp);
	fputc('L', fp);
	fputc('L', fp);
	fputc('O', fp);

	fclose(fp);

	return 0;
}