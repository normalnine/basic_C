#include <stdio.h>
#include <math.h>	// sqrt()

//����ü ����
struct point
{
	int		x;	// ��� : x��ǥ
	int		y;	// ��� : y��ǥ
};


int main()
{
	// ����ü ���� ����
	struct point	p1, p2;
	double distance;

	printf("ù ��° ���� x,y ��ǥ �Է� : ");
	scanf("%d %d", &p1.x, &p1.y);
	printf("�� ��° ���� x,y ��ǥ �Է� : ");
	scanf("%d %d", &p2.x, &p2.y);

	distance = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p2.y - p1.y) * (p2.y - p1.y));

	printf("�� �� ������ �Ÿ� : %lf", distance);

	return 0;
}
