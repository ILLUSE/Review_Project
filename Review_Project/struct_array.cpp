#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 3 // 학생 수를 정의하는 매크로

// 학생 정보를 저장하기 위한 구조체
typedef struct student {
    int number; // 학번
    char name[20]; // 이름
    float grade; // 학점
}Student;

// 입력 버퍼를 지우는 함수
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    Student list[SIZE]; // 학생 정보를 저장할 구조체 배열 선언
    int i;

    // 학생 정보 입력 받기
    for (i = 0; i < SIZE; i++) {
        printf("이름을 입력해주세요: ");
        gets_s(list[i].name, sizeof(list[i].name)); // 이름 입력

        printf("학번을 입력하시오: ");
        scanf_s("%d", &list[i].number); // 학번 입력
        clearInputBuffer();  // 입력 버퍼 지우기

        printf("학점을 입력하시오: ");
        scanf_s("%f", &list[i].grade); // 학점 입력
        clearInputBuffer();  // 입력 버퍼 지우기
    }

    // 입력 받은 학생 정보 출력
    for (i = 0; i < SIZE; i++) {
        printf("\n학생 %d의 학번은 %d\n", i + 1, list[i].number);
        printf("학생 %d의 이름은 %s\n", i + 1, list[i].name);
        printf("학생 %d의 학점은 %.1f\n", i + 1, list[i].grade);
    }

    return 0;
}
