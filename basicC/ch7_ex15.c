#include<stdio.h>
int main(void)
{
	int x, y = 1;

	loop:
	printf("����(1-6)? ");
	scanf("%d", &x);
	switch (x)
	{
	case 1: case 3: case 5:
		printf("%d --> Ȧ��\n", x);
		break;
	case 2: case 4: case 6:
		printf("%d --> ¦��\n", x);
		break;
	}

	if (x >= 0 && x <= 6)
	{
		goto loop;
	}

	return 0;
}