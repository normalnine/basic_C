#include<stdio.h>
int main()
{
	int val;
	int i = 1;

	printf("��� �ϰ��� �ϴ� ������, �� ��?");
	scanf("%d", &val);

	while (i < 10)
	{
		printf("%d * %d = %d\n", val, i, val * i);
		i++;
	}
	return 0;
}