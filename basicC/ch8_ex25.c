#include <stdio.h>
void main()
{
	char* p[4];
	int i;

	p[0] = "red";
	p[1] = "yellow";
	p[2] = "blue";
	p[3] = "green";
	for (i = 0; i < 4; i++)
	{
		printf("%s \n", p[i]);
	}
}