#include<stdio.h>
int main()
{
	int val;
	int i = 1;

	printf("출력 하고자 하는 구구단, 몇 단?");
	scanf("%d", &val);

	while (i < 10)
	{
		printf("%d * %d = %d\n", val, i, val * i);
		i++;
	}
	return 0;
}