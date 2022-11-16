#include<stdio.h>
#include<stdlib.h>

void function(int _memory);
int main()
{
	int memory = 0;
	printf("배열의 크기를 입력하세요 : ");
	scanf("%d", &memory);
	function(memory);

	return 0;
}

void function(int _memory)
{
	int* array = (int*)malloc(sizeof(int) * _memory);
	int i;
	if (array == NULL)
	{
		printf("메모리 할당에 실패!!!");
		exit(1);
	}

	for (i = 0; i < _memory; i++)
	{
		array[i] = i + 1;
	}
	for (i = 0; i < _memory; i++)
	{
		printf("%d\n", array[i]);
	}
	printf("\n");

	free(array);
}