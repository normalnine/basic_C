#include<stdio.h>
void main()
{
	int a;
	double b;
	int c;

	c = sizeof(a + b);
	printf("sizeof(a+b) = %d byte \n", c);
	// int + double -> double
}