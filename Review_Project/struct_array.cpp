#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 3

struct student {
    int number;
    char name[20];
    float grade;
};

void clearInputBuffer() { //�Է¹��� �����ִ� �Լ�
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    struct student list[SIZE];
    int i;

    for (i = 0; i < SIZE; i++) {
        printf("�̸��� �Է����ּ���: ");
        gets_s(list[i].name, sizeof(list[i].name));

        printf("�й��� �Է��Ͻÿ�: ");
        scanf_s("%d", &list[i].number);
        clearInputBuffer();  // Clear the input buffer

        printf("������ �Է��Ͻÿ�: ");
        scanf_s("%f", &list[i].grade);
        clearInputBuffer();  // Clear the input buffer
    }

    for (i = 0; i < SIZE; i++) {
        printf("�л� %d�� �й��� %d\n", i + 1, list[i].number);
        printf("�л� %d�� �̸��� %s\n", i + 1, list[i].name);
        printf("�л� %d�� ������ %.1f\n", i + 1, list[i].grade);
    }

    return 0;
}