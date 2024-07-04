#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 학생 정보를 저장하기 위한 구조체 정의
typedef struct student {
    int number;    // 학번
    char name[10]; // 이름
    double grade;  // 학점
}Student;

int main() {
    Student s; // student 구조체의 인스턴스 생성

    // 사용자로부터 이름 입력 받기
    printf("이름을 입력해주세요: ");
    fgets(s.name, 10, stdin);
    s.name[strcspn(s.name, "\n")] = '\0'; // fgets로 입력받은 문자열에서 개행문자 제거

    // 사용자로부터 학번 입력 받기
    printf("학번을 입력해주세요: ");
    scanf_s("%d", &s.number);

    // 사용자로부터 학점 입력 받기
    printf("학점을 입력해주세요: ");
    scanf_s("%lf", &s.grade);

    // 입력받은 학생 정보 출력
    printf("학번: %d\n", s.number);
    printf("이름: %s\n", s.name);
    printf("학점: %.2f\n", s.grade);

    return 0;
}