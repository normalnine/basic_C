#include<stdio.h>
int main(void)
{
	int i;
	for (i = 0; i <= 10; i++)
	{
		if (i == 5)
		{
			break;
		}
		else
		{
			printf("%d ", i);
		}		
	}
	printf("\n���α׷� ����... The End\n");
	return 0;
}