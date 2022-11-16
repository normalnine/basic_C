#include <stdio.h>

int MaxVal(int pArr[], int n);

void main()
{
	int arr1[] = { 4,8,3,7,2 };
	int max;

	max = MaxVal(arr1, sizeof(arr1) / sizeof(int));
	printf("ÃÖ´ë °ª : %d\n", max);
}

int MaxVal(int pArr[], int n)
{
	int max, i;
	max = pArr[0];

	for (i = 0; i < n; i++)
	{
		if (max < pArr[i])
		{
			max = pArr[i];
		}
	}

	return max;
}