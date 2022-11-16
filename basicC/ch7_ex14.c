#include<stdio.h>
int main(void)
{
	for (;;)
	{
		if (getchar() == '#')
		{
			goto last;
		}
	}
	last: printf("Thank you!\n");
	return 0;
}