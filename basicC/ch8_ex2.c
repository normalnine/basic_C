#include<stdio.h>
int main(void)
{
	double total;
	double value[5];

	value[0] = 1.01;
	value[1] = 2.02;
	value[2] = 3.03;
	value[3] = 4.04;
	value[4] = 5.05;

	total = value[0] + value[1] + value[2] + value[3] + value[4];
	printf("ЦђБе : %lf\n", total / 5);
	return 0;
}