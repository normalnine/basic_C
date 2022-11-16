#include<stdio.h>
int main(void)
{
	int i;
	int k[5];
	k[0] = 10;
	k[1] = 20;
	k[2] = 30;
	k[3] = 40;
	k[4] = 50;
	for (i = 0; i < 5; i++)
	{
		printf("k[%d] = %d\n", i, k[i]);
	}
	return 0;
}