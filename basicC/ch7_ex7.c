#include<stdio.h>
int main(void)
{	
	static float total, input;
	int count = 0;

	for (; input >= 0.0; count++)
	{
		total += input;
		printf("양의 실수 입력(minus to quit): ");
		scanf("%f", &input);
	}
	printf("지금까지의 평균 : %f\n", total / count);
	return 0;
}