#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* pc = NULL; // ������ ���� pc�� NULL�� �ʱ�ȭ�մϴ�.
    
    pc = (char *)malloc(100 * sizeof(char)); // 100����Ʈ��ŭ ���� �޸� �Ҵ�
    if (pc == NULL)
	{
		printf("�޸� �Ҵ翡 �����Ͽ����ϴ�.\n");
		return 1;
	}

    /*pc�� ����Ű�� �����͸� 1�� ������Ű�� ���ĺ� �ҹ��ڸ� �����մϴ�.*/
    for (int i = 0; i < 26; i++)
	{
		*(pc + i) = 'a' + i;
	}

	*(pc + 26) = 0; // �������� NULL ���ڸ� �����մϴ�.

	printf("%s\n", pc); // pc�� ����Ű�� ���ڿ��� ����մϴ�.

	
	free(pc); // ���� �޸� ����

    return 0;
}