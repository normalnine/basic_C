#include <stdio.h>
void MaxMin(int* p1, int* p2, int* arr);

void main()
{
	int* max, * min;
	int arr[5];
	
	for (int i = 0; i < 5; i++)
	{
		printf("%d��° �� �Է� : ",i+1);
		scanf("%d", &arr[i]);
	}

	MaxMin(&max, &min, arr);
	printf("�ִ� : %d �� �ּڰ� : %d\n", *max,max);
	printf("�ּڰ� : %d �� �ּڰ� : %d\n", *min,min);
}

void MaxMin(int** pMax, int** pMin, int* arr)
{
	int* m = 0, * n = 0;
	m = n = arr;

	for (int i = 0; i < 5; i++)
	{
		if (*m < arr[i])
			m = &arr[i];

		if (*n > arr[i])
			n = &arr[i];
	}

	*pMax = m;
	*pMin = n;

}