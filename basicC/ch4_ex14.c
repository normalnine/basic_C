#include<stdio.h>
void main()
{
	int a, c;
	printf("number input(0-9) ? ");
	scanf("%d", &a);
	printf("string = %s \n", (a > 5) ? "Maximum" : (a == 5) ? "Five" : "Minimum");
}