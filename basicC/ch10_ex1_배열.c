#include <stdio.h>
#include <math.h>	// sqrt()

int main()
{
	int p1[2];
	int p2[2];
	double distance;

	printf("첫 번째 점의 x,y 좌표 입력 : ");
	scanf("%d %d", &p1[0], &p1[1]);
	printf("두 번째 점의 x,y 좌표 입력 : ");
	scanf("%d %d", &p2[0], &p2[1]);

	distance = sqrt((p2[0] - p1[0])* (p2[0] - p1[0]) + (p2[1] - p1[1])* (p2[1] - p1[1]));

	printf("두 점 사이의 거리 : %lf", distance);

	return 0;
}
