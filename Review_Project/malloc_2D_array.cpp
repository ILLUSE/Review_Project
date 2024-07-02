#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, x, y;

    // 8���� int �����͸� ������ �� �ִ� �޸� �Ҵ�
    int** pptr = (int**)malloc(sizeof(int*) * 8);
    if (pptr == NULL) { // �޸� �Ҵ� ���� �˻�
        fprintf(stderr, "�޸� �Ҵ� ����\n");
        return 1; // ���� �ڵ�� �Բ� ���α׷� ����
    }

    for (i = 0; i < 8; i++) {
        pptr[i] = (int*)malloc(sizeof(int) * 6);
        if (pptr[i] == NULL) { // �޸� �Ҵ� ���� �˻�
            fprintf(stderr, "�޸� �Ҵ� ����\n");
            // �̹� �Ҵ�� �޸� ����
            for (int j = 0; j < i; j++) {
                free(pptr[j]);
            }
            free(pptr); // �ֻ��� ������ �޸� ����
            return 1; // ���� �ڵ�� �Բ� ���α׷� ����
        }
    }

    // 2���� �迭�� �� �Ҵ�
    for (x = 0; x < 8; x++) {
        for (y = 0; y < 6; y++) {
            pptr[x][y] = 6 * x + y;
        }
    }

    // �Ҵ�� �� ���
    for (x = 0; x < 8; x++) {
        for (y = 0; y < 6; y++) {
            printf("%3d ", pptr[x][y]);
        }
        printf("\n");
    }

    // 2���� �迭�� �� �޸� ����
    for (x = 0; x < 8; x++) {
        free(pptr[x]);
    }
    // 2���� �迭�� �� �޸� ����
    free(pptr);

    return 0;
}