#include <stdio.h>

int main() {
    // ���� �����Ϳ� ���� ������ ����
    int** pptr;
    int* ptr;
    int data = 3; // ������ ���� ���� �� �ʱ�ȭ

    ptr = &data; // ptr�� data ������ �ּ� �Ҵ�
    pptr = &ptr; // pptr�� ptr �������� �ּ� �Ҵ�

    printf("%d %d %d\n", data, ptr, pptr); // 3 76544164 76544136

    // data�� ��, ptr�� ���� ������ data�� ��, pptr�� ���� ���� ������ data�� �� ���
    printf("%d %d %d\n", data, *ptr, **pptr); // 3 3 3

    return 0;
}