#include<stdio.h>
int main(void)
{
	static int total;
	int i, n;

	printf("0���� n������ ����, n��? ");
	scanf("%d", &n);

	for (i = 0; i <= n; i++)
	{
		total += i;
	}
	printf("0�Ҿ� %d������ ���� ��� : %d\n", n, total);
	return 0;
}