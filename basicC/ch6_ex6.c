#include<stdio.h>
void main()
{
	int a;
	printf("switch input(0~9) : ");
	scanf("%d", &a);
	switch (a)
	{
	case 1 : printf("---<one>---\n");
	case 2 : printf("---<two>---\n");
	case 3 : printf("---<three>---\n");
	case 4 : printf("---<four>---\n");
	case 5: printf("---<five>---\n");
	default: printf("%d\n", a);
	}
}