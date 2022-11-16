#include<stdio.h>
void main()
{	
	int n, a, x, b;
	scanf("%d%d", &n, &a);
	x = ++n;
	b = a--;
	printf("X = %d\n", x);
	printf("B = %d\n", b);
	x = n++;
	b = --a;
	printf("X = %d\n", x);
	printf("B = %d\n", b);
}