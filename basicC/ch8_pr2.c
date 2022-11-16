#include<stdio.h>
int main(void)
{
	int a[9];
	int n = 0;
	int i;
	printf("실행할 구구단의 숫자를 입력하시오 : ");
	scanf("%d", &n);

	for (i = 0; i < 9; i++)
	{
		a[i] = n * (i + 1);

		if (i % 2 == 1)
		{
			printf("%d번째 %d\n", i + 1, a[i]);
		}
	}
	return 0;
}