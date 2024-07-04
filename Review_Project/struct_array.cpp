#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 3 // �л� ���� �����ϴ� ��ũ��

// �л� ������ �����ϱ� ���� ����ü
typedef struct student {
    int number; // �й�
    char name[20]; // �̸�
    float grade; // ����
}Student;

// �Է� ���۸� ����� �Լ�
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    Student list[SIZE]; // �л� ������ ������ ����ü �迭 ����
    int i;

    // �л� ���� �Է� �ޱ�
    for (i = 0; i < SIZE; i++) {
        printf("�̸��� �Է����ּ���: ");
        gets_s(list[i].name, sizeof(list[i].name)); // �̸� �Է�

        printf("�й��� �Է��Ͻÿ�: ");
        scanf_s("%d", &list[i].number); // �й� �Է�
        clearInputBuffer();  // �Է� ���� �����

        printf("������ �Է��Ͻÿ�: ");
        scanf_s("%f", &list[i].grade); // ���� �Է�
        clearInputBuffer();  // �Է� ���� �����
    }

    // �Է� ���� �л� ���� ���
    for (i = 0; i < SIZE; i++) {
        printf("\n�л� %d�� �й��� %d\n", i + 1, list[i].number);
        printf("�л� %d�� �̸��� %s\n", i + 1, list[i].name);
        printf("�л� %d�� ������ %.1f\n", i + 1, list[i].grade);
    }

    return 0;
}
