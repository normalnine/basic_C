#include <stdio.h>
void main()
{
	int a[5] = { 0,1,2,3,4 };
	printf("%d, %d \n", a[0], a[1]);

	printf("%d, %d \n", &a[0], &a[1]);

	printf("�迭 �̸� : %d \n", a);
}