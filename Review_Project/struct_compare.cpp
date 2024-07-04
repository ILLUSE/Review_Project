#include <stdio.h>

// ���� ��Ÿ���� ����ü ����
typedef struct point {
	int x, y; // x�� y ��ǥ
} Point;

// �� ���� ���ϴ� �Լ�
void comparePoint(Point p1, Point p2) {
	// x ��ǥ�� y ��ǥ�� ��� ������ ��
	if (p1.x == p2.x && p1.y == p2.y)
		printf("p1 == p2\n"); // ��ǥ�� ������ ���
	else
		printf("p1 != p2\n"); // ��ǥ�� �ٸ��� ���
};

void main() {
	Point p1, p2; // Point ����ü�� �ν��Ͻ� �� �� ����

	// ù ��° ���� ��ǥ ����
	p1.x = 20;
	p1.y = 10;

	// �� ��° ���� ��ǥ ����
	p2.x = 30;
	p2.y = 10;

	// ����ü�� �� ��ü�δ� ���� ���� �� ����
	// ����ü�� �ʵ带 ���� ���ؾ� ��
	/* // �� �񱳹��� �߸��� �����Դϴ�.
	if (p1 == p2) {
		printf("p1 == p2\n");
	}
	else
		printf("p1 != p2\n");
	*/

	// comparePoint �Լ��� ȣ���Ͽ� �� �� ��
	comparePoint(p1, p2);
}
