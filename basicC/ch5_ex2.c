#include<stdio.h>
float sum();
void main()
{
	float result;
	result = sum();
	printf("합 계 : %5.2f \n", result);
}
float sum()
{
	float a, b, c;
	printf("두 개의 값을 입력(실수 형)하시오 : ");
	scanf("%f%f", &a, &b);
	c = a + b;
	return c;
} 