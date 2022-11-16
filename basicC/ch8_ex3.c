#include<stdio.h>
int main(void)
{
	double value[5] = { 1.01,2.02,3.03,4.04,5.05 };
	static double total;
	int i;
	for (i = 0; i < 5; i++)
	{
		total += value[i];
	}
	printf("ЦђБе : %lf\n", total / 5);
	return 0;
}