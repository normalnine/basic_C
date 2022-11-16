#include<stdio.h>
void main()
{
	int a, b, c;
	a = 12, b = 15;
	// a = 00001100, b = 00001111
	c = a ^ b;
	// c = 00000011
	printf("a^b = %d\n", c);
}