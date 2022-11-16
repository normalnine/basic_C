#include<stdio.h>
int main(void)
{
	int num1=0, num2=0, i=0;
	int sum = 0;
	printf("정수 두 개 입력");
	scanf("%d %d", &num1, &num2);
	if (num1 > num2)
	{
		printf("첫 번째 수가 더 큰 값이라 프로그램을 종료합니다");
	}
	else if(num1 == num2)
	{
		printf("동일한 값 %d을 입력받았습니다.", num1);
	}
	else
	{
		for (i = num1; i <= num2; i++)
		{
			sum += i;
		}
		printf("%d과 %d 사이에 존재하는 정수들의 합은 %d", num1, num2, sum);
	}
	return 0;
}