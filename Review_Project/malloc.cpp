#include <stdio.h>
#include <stdlib.h>

int main()
{
    // ������ ������ ����
    int* pi;

    // ���� �޸� �Ҵ����� ������ ũ�⸸ŭ �޸� �Ҵ�
    pi = (int*)malloc(sizeof(int));

    //pi���� malloc���� �Ҵ����� �޸��� �ּҰ� ���� �ȴ�.

    // �޸� �Ҵ� ���� ��
    if (pi == NULL) {
        printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
        exit(1); // ���α׷� ������ ����
    }

    // �Ҵ�� �޸𸮿� 100 ����
    *pi = 100;
    // ����� �� ���
    printf("%d\n", *pi);

    // ���� �Ҵ�� �޸� ����
    free(pi);

    return 0;
}
