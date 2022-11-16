#include<stdio.h>
void main()
{
	int a, b, c;
	a = 10;
	printf("%d ", a);
	b = --a + 5;	// (1)a=a-1 (2)b=a+5
	c = 7 + a--;	// (1)c=7+a (2)a=a-1
	printf("%d ", b);
	printf("%d ", c);
	printf("%d ", a);
}