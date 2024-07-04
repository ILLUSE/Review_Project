#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// ���� ��Ÿ���� ����ü ����
typedef struct point {
	int x; // x ��ǥ
	int y; // y ��ǥ
} Point;

// ���簢���� ��Ÿ���� ����ü ����
typedef struct rect {
	Point p1; // ���� ����� ��
	Point p2; // ���� �ϴ��� ��
} Rect;

int main() {
	Rect r; // ���簢�� ����ü ���� ����

	// ����ڷκ��� ���� ����� ��ǥ �Է� �ޱ�
	printf("���� ����� ��ǥ�� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &r.p1.x, &r.p1.y);

	// ����ڷκ��� ���� �ϴ��� ��ǥ �Է� �ޱ�
	printf("���� �ϴ��� ��ǥ�� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &r.p2.x, &r.p2.y);

	int width; // ����
	int height; // ����
	int base; // �غ�
	int round; // �ѷ�
	// ���̿� �غ� ���
	height = r.p1.y - r.p2.y;
	base = r.p1.x - r.p2.x;

	// ���̿� �ѷ� ���
	width = abs(height) * abs(base); // ���̴� ���̿� �غ��� ���밪�� ��
	round = abs(height) * 2 + abs(base) * 2; // �ѷ��� ���̿� �غ��� ���밪�� ���� 2��

	// ���� ���̿� �ѷ� ���
	printf("���̴� %d\n", width);
	printf("�ѷ��� %d", round);

	return 0;
};

