#include <stdio.h>

struct point {

	int x, y;

};

//����ü�� �Լ��� �ֱ�
//int p1ó�� �����Ͽ� �ֵ� ����ü�� �����Ͽ� �ֱ�

void comparePoint(struct point p1, struct point p2){

	if(p1.x == p2.x && p1.y == p2.y)
		printf("p1 == p2\n");
	else 
		printf("p1 != p2\n");
};

void main() {

	struct point p1, p2;

	p1.x = 20;
	p1.y = 10;

	p2.x = 30;
	p2.y = 10;
	
	//����ü�� �� ��ü�� ������ �񱳺Ұ�!!!
	//����ü ���� ��ҵ��� ���� �����־�� ��
	/* //�ش� �񱳹��� �߸��� ����
	if (p1 == p2) {
		printf("p1 == p2\n");
	}
	else
		printf("p1 != p2\n");
	*/

	comparePoint(p1, p2);

}