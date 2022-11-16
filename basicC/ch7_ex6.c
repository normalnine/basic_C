#include<stdio.h>
int main(void)
{
	static int total;
	int i, n;

	printf("0부터 n까지의 덧셈, n은? ");
	scanf("%d", &n);

	for (i = 0; i <= n; i++)
	{
		total += i;
	}
	printf("0불어 %d까지의 덧셈 결과 : %d\n", n, total);
	return 0;
}