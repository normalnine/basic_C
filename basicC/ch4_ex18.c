#include<stdio.h>
void main()
{
	int a1, a2, a3, a4, a5, a6;
	a1 = sizeof(char);
	a2 = sizeof(int);
	a3 = sizeof(short);
	a4 = sizeof(long);
	a5 = sizeof(float);
	a6 = sizeof(double);
	printf("char	= %d byte \n", a1);
	printf("int	= %d byte \n", a2);
	printf("short	= %d byte \n", a3);
	printf("long	= %d byte \n", a4);
	printf("float	= %d byte \n", a5);
	printf("double	= %d byte \n", a6);
}