#include<stdio.h>
int main(void)
{
	int a[10];
	int i, j, temp;

	printf("10개의 수를 입력 하시오\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d번째: ", i+1);
		scanf("%d", &a[i]);
	}
	
	// 내림차순 버블정렬
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10-i; j++)
		{
			if (a[j] < a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("내림 차순 정렬\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}