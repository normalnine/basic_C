#include<stdio.h>
int main(void)
{
	int num = 0, sum = 0;

	while (1)
	{
		printf("숫자를 입력하시오(종료는 0입력) : ");
		scanf("%d", &num);

		sum += num;

		if (num == 0)
		{
			break;
		}
	}
	printf("입력 받은 수의 합은 %d입니다.", sum);
	return 0;
}