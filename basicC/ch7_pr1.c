#include<stdio.h>>
int main(void)
{
	int num = 0, i = 1;
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf("%d", &num);

	while (i <= num)
	{
		printf("%d ", 3 * i);
		i++;
	}
	return 0;
}