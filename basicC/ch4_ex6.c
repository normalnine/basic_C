#include<stdio.h>
void main()
{
	char a, b, c;
	a = 'A', b = 'B', c = a & b;
	// A = 01000001, B = 01000010, C = 01000000
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	printf("a = %c, b = %c, c = %c\n", a, b, c);
	// ASCII(64) : @
}