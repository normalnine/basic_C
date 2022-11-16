#include <stdio.h>
#include <math.h>	// sqrt()

//구조체 선언
struct point
{
	int		x;	// 멤버 : x좌표
	int		y;	// 멤버 : y좌표
};


int main()
{
	// 구조체 변수 선언문
	struct point	p1, p2;
	double distance;

	printf("첫 번째 점의 x,y 좌표 입력 : ");
	scanf("%d %d", &p1.x, &p1.y);
	printf("두 번째 점의 x,y 좌표 입력 : ");
	scanf("%d %d", &p2.x, &p2.y);

	distance = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p2.y - p1.y) * (p2.y - p1.y));

	printf("두 점 사이의 거리 : %lf", distance);

	return 0;
}
