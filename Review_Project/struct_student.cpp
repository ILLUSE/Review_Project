#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int number;
    char name[10];
    double grade;
};

int main() {
    struct student s;

    printf("이름을 입력해주세요: ");
    fgets(s.name, 10, stdin);
    s.name[strcspn(s.name, "\n")] = '\0'; // 개행문자 제거

    printf("학번을 입력해주세요: ");
    scanf_s("%d", &s.number);

    printf("학점을 입력해주세요: ");
    scanf_s("%lf", &s.grade);

    printf("학번: %d\n", s.number);
    printf("이름: %s\n", s.name);
    printf("학점: %.2f\n", s.grade);

    return 0;
}