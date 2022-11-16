#include<stdio.h>
int main(void)
{
	int i = 1, num = 0, sum = 0;

	while (i < 6)
	{
		printf("0보다 큰 수를 입력(%d번째) : ",i);
		scanf("%d", &num);
		
		if (num <= 0)
		{
			continue;
		}

		sum += num;		
		i++;
	}
	
	printf("입력 된 값의 총 합 %d", sum);

	return 0;
}