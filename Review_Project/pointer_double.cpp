#include <stdio.h>

int main() {
    // 이중 포인터와 단일 포인터 선언
    int** pptr;
    int* ptr;
    int data = 3; // 정수형 변수 선언 및 초기화

    ptr = &data; // ptr에 data 변수의 주소 할당
    pptr = &ptr; // pptr에 ptr 포인터의 주소 할당

    printf("%d %d %d\n", data, ptr, pptr); // 3 76544164 76544136

    // data의 값, ptr을 통해 참조된 data의 값, pptr을 통해 간접 참조된 data의 값 출력
    printf("%d %d %d\n", data, *ptr, **pptr); // 3 3 3

    return 0;
}