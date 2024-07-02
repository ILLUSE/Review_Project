#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, x, y;

    // 8개의 int 포인터를 저장할 수 있는 메모리 할당
    int** pptr = (int**)malloc(sizeof(int*) * 8);
    if (pptr == NULL) { // 메모리 할당 실패 검사
        fprintf(stderr, "메모리 할당 실패\n");
        return 1; // 오류 코드와 함께 프로그램 종료
    }

    for (i = 0; i < 8; i++) {
        pptr[i] = (int*)malloc(sizeof(int) * 6);
        if (pptr[i] == NULL) { // 메모리 할당 실패 검사
            fprintf(stderr, "메모리 할당 실패\n");
            // 이미 할당된 메모리 해제
            for (int j = 0; j < i; j++) {
                free(pptr[j]);
            }
            free(pptr); // 최상위 포인터 메모리 해제
            return 1; // 오류 코드와 함께 프로그램 종료
        }
    }

    // 2차원 배열에 값 할당
    for (x = 0; x < 8; x++) {
        for (y = 0; y < 6; y++) {
            pptr[x][y] = 6 * x + y;
        }
    }

    // 할당된 값 출력
    for (x = 0; x < 8; x++) {
        for (y = 0; y < 6; y++) {
            printf("%3d ", pptr[x][y]);
        }
        printf("\n");
    }

    // 2차원 배열의 열 메모리 해제
    for (x = 0; x < 8; x++) {
        free(pptr[x]);
    }
    // 2차원 배열의 행 메모리 해제
    free(pptr);

    return 0;
}