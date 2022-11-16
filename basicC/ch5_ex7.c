#include<stdio.h>
void swap(int* x, int* y);
void main()
{
	int a = 300, b = 500;
	printf("본래의 a, b의 값 = %d, %d\n", a, b);
	swap(&a, &b);		// call by pointer
	printf("바꾼 후의 a, b값 = %d, %d\n", a, b);
}
void swap(int* x, int* y)
{
	int z;
	z = *x;
	*x = *y;
	*y = z;
}