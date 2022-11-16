#include<stdio.h>>
int main(void)
{
	int num = 0, i = 1;
	printf("숫자를 입력하시오 : ");
	scanf("%d", &num);

	while (i <= num)
	{
		printf("%d ", 3 * i);
		i++;
	}
	return 0;
}