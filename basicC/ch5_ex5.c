#include<stdio.h>
int abs(int);
void main()
{
	int value, result;
	printf("���� �Է� : ");
	scanf("%d", &value);
	result = abs(value);
	printf("%d�� ���� ���� %d�̴�. \n", value, result);
}
int abs(int x)
{
	return((x > 0) ? x : -x);
}