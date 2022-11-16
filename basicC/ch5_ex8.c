#include<stdio.h>
void sum(int, int, int*);
void main()
{
	int a, b, c;
	a = 200, b = 500;
	sum(a, b, &c);
	printf("c = %d\n", c);
}
void sum(int x, int y, int* z)
{
	*z = x + y;
}