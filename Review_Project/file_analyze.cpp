#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void clearInputBuffer() { // 입력버퍼 지워주는 함수
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
	FILE* fp; // 파일 선언

	char file_name[256];
	char buffer[256];
	char word[256];
	int line = 0;

	printf("파일 이름을 입력하시오: ");
	scanf("%255s", file_name); // scanf를 사용하고 버퍼 오버플로우 방지
	clearInputBuffer();

	printf("찾고자 하는 단어를 입력하시오: ");
	scanf("%255s", word); // scanf를 사용하고 버퍼 오버플로우 방지
	clearInputBuffer();

	if ((fp = fopen(file_name, "r")) == NULL) { // 만약 사용자가 입력한 이름의 파일이 없다면
		fprintf(stderr, "파일 %s를 열 수 없습니다.\n", file_name); // 오류 문구 출력
		return 1; // 프로그램 종료
	}

	while (fgets(buffer, 256, fp)) { // fp 파일에서 256만큼 가져와 buffer에 넣는다(개행문자도 가지고 옴)
		line++; // 몇 번째 줄인지 세기

		if (strstr(buffer, word)) {
			printf("%d번째 줄에서 %s가 발견되었습니다\n", line, word);
		}
	}

	fclose(fp);

	return 0;
}