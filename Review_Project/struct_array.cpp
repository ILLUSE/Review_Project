#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 3

struct student {
    int number;
    char name[20];
    float grade;
};

void clearInputBuffer() { //입력버퍼 지워주는 함수
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    struct student list[SIZE];
    int i;

    for (i = 0; i < SIZE; i++) {
        printf("이름을 입력해주세요: ");
        gets_s(list[i].name, sizeof(list[i].name));

        printf("학번을 입력하시오: ");
        scanf_s("%d", &list[i].number);
        clearInputBuffer();  // Clear the input buffer

        printf("학점을 입력하시오: ");
        scanf_s("%f", &list[i].grade);
        clearInputBuffer();  // Clear the input buffer
    }

    for (i = 0; i < SIZE; i++) {
        printf("학생 %d의 학번은 %d\n", i + 1, list[i].number);
        printf("학생 %d의 이름은 %s\n", i + 1, list[i].name);
        printf("학생 %d의 학점은 %.1f\n", i + 1, list[i].grade);
    }

    return 0;
}