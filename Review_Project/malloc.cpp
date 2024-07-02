#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 정수형 포인터 선언
    int* pi;

    // 동적 메모리 할당으로 정수형 크기만큼 메모리 할당
    pi = (int*)malloc(sizeof(int));

    //pi에는 malloc으로 할당해준 메모리의 주소가 들어가게 된다.

    // 메모리 할당 실패 시
    if (pi == NULL) {
        printf("동적 메모리 할당에 실패했습니다.\n");
        exit(1); // 프로그램 비정상 종료
    }

    // 할당된 메모리에 100 저장
    *pi = 100;
    // 저장된 값 출력
    printf("%d\n", *pi);

    // 동적 할당된 메모리 해제
    free(pi);

    return 0;
}
