#include<stdio.h>
int abc(int x, int y);
void main()
{
	int a, b, c;
	a = 310;
	b = 450;
	c = abc(a, b);
	printf("ÇÕ °è : %d \n", c);
}
int abc(int x, int y)
{
	int sum;
	sum = x + y;
	return sum;
}
