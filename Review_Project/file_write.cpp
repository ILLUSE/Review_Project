#define _CRT_SECURE_NO_WARNINGS // 보안 경고를 비활성화하는 매크로
#include <stdio.h>

int main() {
    FILE* fp = NULL; // 파일 포인터 선언

    // "output.txt" 파일을 쓰기 모드("w")로 열기. 파일이 없으면 새로 생성됩니다.
    fp = fopen("output.txt", "w");

    if (fp == NULL) { // 파일 열기에 실패한 경우
        printf("파일 열기에 실패하였습니다\n");
    }
    else { // 파일 열기에 성공한 경우
        printf("파일 열기에 성공했습니다.\n");
    }

    // 파일에 문자 하나씩 쓰기
    fputc('H', fp);
    fputc('E', fp);
    fputc('L', fp);
    fputc('L', fp);
    fputc('O', fp);

    fclose(fp); // 파일 닫기

    return 0;
}