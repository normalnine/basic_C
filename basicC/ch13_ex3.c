#include<stdio.h>
#include<stdlib.h>

int main()
{
	int size, i;
	int* array;

	printf("Enter the number, to memory alloc : ");
	scanf("%d", &size);

	array = (int *)calloc(size, sizeof(int));

	for (i = 0; i < size; i++)
	{
		printf("%d ��° ��� �Է� : ",i);
		scanf("%d", &array[i]);
	}
	for (i = 0; i < size; i++)
	{
		printf("%d ��° ��� : %d\n", i, array[i]);
	}
	free(array);
	return 0;
}