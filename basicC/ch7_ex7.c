#include<stdio.h>
int main(void)
{	
	static float total, input;
	int count = 0;

	for (; input >= 0.0; count++)
	{
		total += input;
		printf("���� �Ǽ� �Է�(minus to quit): ");
		scanf("%f", &input);
	}
	printf("���ݱ����� ��� : %f\n", total / count);
	return 0;
}