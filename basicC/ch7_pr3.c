#include<stdio.h>
int main(void)
{
	int i = 1, num = 0, sum = 0;

	while (i < 6)
	{
		printf("0���� ū ���� �Է�(%d��°) : ",i);
		scanf("%d", &num);
		
		if (num <= 0)
		{
			continue;
		}

		sum += num;		
		i++;
	}
	
	printf("�Է� �� ���� �� �� %d", sum);

	return 0;
}