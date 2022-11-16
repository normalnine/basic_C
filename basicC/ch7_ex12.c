#include<stdio.h>
int main(void)
{
	int i = 0, sum = 0;
	while (1)
	{
		i++;
		sum += i;
		if (i == 100)
		{
			break;
		}
	}
	printf("1+2+3+...+100 = %5d\n", sum);
	return 0;
}