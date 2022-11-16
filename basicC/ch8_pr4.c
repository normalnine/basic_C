#include<stdio.h>
int main(void)
{
	int a[10];
	int i, j, temp;
	
	printf("10개의 수를 입력 하시오\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}	
	
	// 오름차순 선택정렬
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	printf("오름 차순 정렬\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}

	// 내림차순 선택정렬
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (a[i] < a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	printf("\n내림 차순 정렬\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	
	return 0;
}