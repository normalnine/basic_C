#include<stdio.h>
int abs(int);
void main()
{
	int value, result;
	printf("정수 입력 : ");
	scanf("%d", &value);
	result = abs(value);
	printf("%d의 절대 값은 %d이다. \n", value, result);
}
int abs(int x)
{
	return((x > 0) ? x : -x);
}