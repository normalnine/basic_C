#include<stdio.h>
void main()
{
	int a, b, c;
	a = 1, b = 2; // 00000001
	c = a << b;	  // 00000100
	printf("a<<b = %d \n", c);
}