#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct point {
	int x;
	int y;

};

struct rect {

	struct point p1;
	struct point p2;

};


int main(){

	struct rect r;

	printf("���� ����� ��ǥ�� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &r.p1.x, &r.p1.y);

	printf("���� �ϴ��� ��ǥ�� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &r.p2.x, &r.p2.y);

	int width; //����
	int height; //����
	int base; //�غ�
	int round; //�ѷ�
	height = r.p1.y - r.p2.y;
	base = r.p1.x - r.p2.x;

	width = abs(height) * abs(base);
	round = abs(height) * 2 + abs(base) * 2;

	printf("���̴� %d\n",width);
	printf("�ѷ��� %d", round);

	return 0;
};

