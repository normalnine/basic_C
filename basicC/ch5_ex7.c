#include<stdio.h>
void swap(int* x, int* y);
void main()
{
	int a = 300, b = 500;
	printf("������ a, b�� �� = %d, %d\n", a, b);
	swap(&a, &b);		// call by pointer
	printf("�ٲ� ���� a, b�� = %d, %d\n", a, b);
}
void swap(int* x, int* y)
{
	int z;
	z = *x;
	*x = *y;
	*y = z;
}