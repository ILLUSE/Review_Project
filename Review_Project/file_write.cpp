#define _CRT_SECURE_NO_WARNINGS // ���� ��� ��Ȱ��ȭ�ϴ� ��ũ��
#include <stdio.h>

int main() {
    FILE* fp = NULL; // ���� ������ ����

    // "output.txt" ������ ���� ���("w")�� ����. ������ ������ ���� �����˴ϴ�.
    fp = fopen("output.txt", "w");

    if (fp == NULL) { // ���� ���⿡ ������ ���
        printf("���� ���⿡ �����Ͽ����ϴ�\n");
    }
    else { // ���� ���⿡ ������ ���
        printf("���� ���⿡ �����߽��ϴ�.\n");
    }

    // ���Ͽ� ���� �ϳ��� ����
    fputc('H', fp);
    fputc('E', fp);
    fputc('L', fp);
    fputc('L', fp);
    fputc('O', fp);

    fclose(fp); // ���� �ݱ�

    return 0;
}