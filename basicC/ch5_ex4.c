#include<stdio.h>
int max(int a, int b);
void main()
{
	printf("�ִ밪 : %d \n", max(250, 500));
}
int max(int a, int b)
{
	int big;
	big = ((a > b) ? a : b);
	return big;
}