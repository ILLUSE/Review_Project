#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct point {
    int x;
    int y;
};

int main() {
    struct point p1 , p2;

   
    printf("p1�� x��ǥ�� �Է����ּ���: ");
    scanf_s("%d",&p1.x);
    printf("p1�� y��ǥ�� �Է����ּ���: ");
    scanf_s("%d",&p1.y);
    printf("p2�� x��ǥ�� �Է����ּ���: ");
    scanf_s("%d",& p2.x);
    printf("p2�� y��ǥ�� �Է����ּ���: ");
    scanf_s("%d",&p2.y);

    int xdiff, ydiff;
    xdiff = p1.x - p2.x;
    ydiff = p1.y - p2.y;

    float distance;

    distance = sqrt(xdiff * xdiff + ydiff * ydiff );

    printf("distance is %f", distance);
    return 0;
}