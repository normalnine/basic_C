#include<stdio.h>
int main(void)
{
	int num1=0, num2=0, i=0;
	int sum = 0;
	printf("���� �� �� �Է�");
	scanf("%d %d", &num1, &num2);
	if (num1 > num2)
	{
		printf("ù ��° ���� �� ū ���̶� ���α׷��� �����մϴ�");
	}
	else if(num1 == num2)
	{
		printf("������ �� %d�� �Է¹޾ҽ��ϴ�.", num1);
	}
	else
	{
		for (i = num1; i <= num2; i++)
		{
			sum += i;
		}
		printf("%d�� %d ���̿� �����ϴ� �������� ���� %d", num1, num2, sum);
	}
	return 0;
}