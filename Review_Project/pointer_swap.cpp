#include <stdio.h>

// �� ������ �����͸� �޾Ƽ�, ����Ű�� ���� ���� �ٲٴ� �Լ�

void swap(int* a_adress, int* b_adress) { //a�� b�� �ּҸ� ���� / a_adress�ȿ��� a�� �ּ�(&a)��, b_adress�ȿ��� b�� �ּ�(&b)�� ������
    int temp = *a_adress; // ù ��° ������ ���� �ӽ� ������ ���� 
    *a_adress = *b_adress;       // �� ��° ������ ���� ù ��° ���ڰ� ����Ű�� ���� ���� 
    *b_adress = temp;     // �ӽ� ������ ���� �� ��° ���ڰ� ����Ű�� ���� ����
}

int main() {
    int a = 10; // ù ��° ���� ���� �ʱ�ȭ
    int b = 20; // �� ��° ���� ���� �ʱ�ȭ

    // ��ȯ �� ������ �� ���
    printf("Before swap: a = %d, b = %d\n", a, b);

    swap(&a, &b); // 'swap' �Լ��� ȣ���Ͽ� 'a'�� 'b'�� ���� ��ȯ
                  // ���ڷ� 'a'�� 'b'�� �ּҸ� ����
                  
    // ��ȯ �� ������ �� ���
    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}