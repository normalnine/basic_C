#include<stdio.h>
int main(void)
{
	int a, b;
	for (;;)
	{
		printf("�� ���� ���� �Է�: ");
		scanf("%d %d", & a, &b);
		printf("�� ���� ��: %d\n", a + b);
	}
	return 0;
}
