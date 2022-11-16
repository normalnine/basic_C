#include <stdio.h>
void main()
{
	int i, j;
	static char a[][5] = { {'W','O','R','L','D'},{'K','O','R','E','A'} };
	// char b[][6] = {"WORLD", "KOREA"} ¿Í °°À½

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j <= 4; j++)
		{
			printf("\n a[%d][%d] = %c", i, j, a[i][j]);
		}
	}
}