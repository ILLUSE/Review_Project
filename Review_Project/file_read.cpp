#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* fp = NULL; //파일 선언

	fp = fopen("input.txt", "r"); //w(쓰기) 모드로 파일 열기(없다면 생성)

	if (fp == NULL) { //파일이 열리지 않는 오류가 났을 때를 대비
		printf("파일 열기에 실패하였습니다\n");
	}
	else {
		printf("파일 열기에 성공했습니다.\n");
	}

	int c;

	while ((c = fgetc(fp)) != EOF) { //한글자 씩 읽어와서 c에 넣고 , c가 EOF이면 반복문 종료
		putchar(c); //읽어온 c 출력
	}

	fclose(fp);

	return 0;
}