#include <stdio.h>
void main()
{
	int k, i = 0, array[10];
	
	printf("data input ! ");
	while (scanf("%d", &array[i]) != EOF)
	{
		printf("data input ! \n");
		i++;
	}
	for (k = 0; k < i; k++)
		printf("array[%d] = %d \n", k, array[k]);
}