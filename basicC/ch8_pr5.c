#include <stdio.h>

void main()
{
	char a[100];
	int len = 0;

	printf("문자열을 입력하세요 : ");
	scanf("%s", a);

	while (a[len] != 0)
		len++;

	printf("문자열의 크기 : %d", len);
}