#include<stdio.h>
#define STRING "C++ Compatible C"
#define CAL (3*4)+(12/4)

#define ONE 1
#define TWO ONE+ONE
#define THREE TWO+ONE

int main()
{
	printf("string : %s\n", STRING);
	printf("cal : %d\n", CAL);
	printf("ONE = %d, TWO = %d, THREE = %d\n", ONE, TWO, THREE);

	return 0;
}