#include <stdio.h>
int ArrAdder(int *pArr, int n);

void main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int SumOfArr;

	// 전체 배열 바이트 / 요소 한 개 바이트
	SumOfArr = ArrAdder(arr1, sizeof(arr1) / sizeof(arr1[0]));
	printf("배열의 총 합 : %d \n", SumOfArr);
	return 0;
}

int ArrAdder(int *pArr, int n)
{
	int sum = 0;
	int i;

	for (i = 0; i < n; i++)
	{ 
		sum += pArr[i];		
	}
	return sum;
}