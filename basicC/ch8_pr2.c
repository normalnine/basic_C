#include<stdio.h>
int main(void)
{
	int a[9];
	int n = 0;
	int i;
	printf("������ �������� ���ڸ� �Է��Ͻÿ� : ");
	scanf("%d", &n);

	for (i = 0; i < 9; i++)
	{
		a[i] = n * (i + 1);

		if (i % 2 == 1)
		{
			printf("%d��° %d\n", i + 1, a[i]);
		}
	}
	return 0;
}