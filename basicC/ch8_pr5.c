#include <stdio.h>

void main()
{
	char a[100];
	int len = 0;

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", a);

	while (a[len] != 0)
		len++;

	printf("���ڿ��� ũ�� : %d", len);
}