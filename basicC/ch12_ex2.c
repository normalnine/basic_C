#include<stdio.h>
#define NUM 10
int main()
{
	int array[NUM] = { 1,2,3 };
	int i;

	for (i = 0; i < NUM; i++)
	{
		printf("%d", array[i]);
	}
	return 0;
}