#include<stdio.h>
int main(void)
{
	int val;
	printf("������ �ϳ� �Է� �ϼ���:");
	scanf("%d", &val);

	if (val < 0)
	{
		printf("�Է� ���� 0���� �۴�.\n");
	}	
	if (val > 0)
	{
		printf("�Է� ���� 0���� ũ��\n");
	}
	if (val == 0)
	{
		printf("�Է� ���� 0�̴�.\n");
	}
	return 0;
}