#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* fp = NULL; //파일 선언

	fp = fopen("output.txt", "w"); //w(쓰기) 모드로 파일 열기(없다면 생성)

	if (fp == NULL) { //파일이 열리지 않는 오류가 났을 때를 대비
		printf("파일 열기에 실패하였습니다\n");
	}
	else {
		printf("파일 열기에 성공했습니다.\n");
	}

	fputc('H', fp); //파일에 글쓰기
	fputc('E', fp);
	fputc('L', fp);
	fputc('L', fp);
	fputc('O', fp);

	fclose(fp);

	return 0;
}