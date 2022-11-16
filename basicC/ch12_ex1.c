#include<stdio.h>
#define PI 3.141592	// 매크로 상수
void main()
{
	double area, radius;
	const double pi = 3.14; // 변수의 상수화
	printf("반지름을 : ");
	scanf("%lf", &radius);

	area = radius * radius * PI;
	printf("넓이는 %f 입니다. \n", area);
}