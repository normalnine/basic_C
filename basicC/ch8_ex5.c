#include<stdio.h>
int main(void)
{
	int n[5];
	int i, max = 0;
	for (i = 0; i < 5; i++)
	{
		printf("���� %d....", i + 1);
		scanf("%d", &n[i]);
	}
	for (i = 0; i < 5; i++)
	{
		if (n[i] > max)
		{
			max = n[i];
		}
	}
	printf("�ִ� �� ==> %d\n", max);
	return 0;
}