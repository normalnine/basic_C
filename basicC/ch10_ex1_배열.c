#include <stdio.h>
#include <math.h>	// sqrt()

int main()
{
	int p1[2];
	int p2[2];
	double distance;

	printf("ù ��° ���� x,y ��ǥ �Է� : ");
	scanf("%d %d", &p1[0], &p1[1]);
	printf("�� ��° ���� x,y ��ǥ �Է� : ");
	scanf("%d %d", &p2[0], &p2[1]);

	distance = sqrt((p2[0] - p1[0])* (p2[0] - p1[0]) + (p2[1] - p1[1])* (p2[1] - p1[1]));

	printf("�� �� ������ �Ÿ� : %lf", distance);

	return 0;
}
