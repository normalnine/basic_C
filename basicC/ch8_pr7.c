#include <stdio.h>
void main()
{
	int arr[5];
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		printf("input[%d] = ", i);
		scanf("%d", &arr[i]);
	}

	printf("\n");

	for (int j = 0; j < 5; j++)
	{
		sum += arr[j];
		printf("sum%d = %d\n", j, sum);
	}
}