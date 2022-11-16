#include<stdio.h>
void main()
{
	int a;
	printf("input data ? ");
	scanf("%3d", &a);	//앞3자리까지만 입력됨
	printf("output data = %d \n", a);
}