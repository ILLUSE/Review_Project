#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* pc = NULL; // 포인터 변수 pc를 NULL로 초기화합니다.
    
    pc = (char *)malloc(100 * sizeof(char)); // 100바이트만큼 동적 메모리 할당
    if (pc == NULL)
	{
		printf("메모리 할당에 실패하였습니다.\n");
		return 1;
	}

    /*pc가 가리키는 포인터를 1씩 증가시키며 알파벳 소문자를 삽입합니다.*/
    for (int i = 0; i < 26; i++)
	{
		*(pc + i) = 'a' + i;
	}

	*(pc + 26) = 0; // 마지막에 NULL 문자를 삽입합니다.

	printf("%s\n", pc); // pc가 가리키는 문자열을 출력합니다.

	
	free(pc); // 동적 메모리 해제

    return 0;
}