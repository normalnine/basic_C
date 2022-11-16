#include<stdio.h>
void main()
{
	char c;
	c = getchar();
	switch (c)
	{
	case 'a' : printf("---<spring>---\n");
		break;
	case 'b' : printf("---<summer>---\n");
		break;
	case 'c': printf("---<autumn>---\n");
		break;
	default: printf("---<winter>---\n");
		break;
	}
}