#include<stdio.h>
int main()
{
	int val;
	printf("������ �ϳ� �Է� �ϼ���: ");
	scanf("%d", &val);

	if (val < 0)
	{
		printf("�Է� ���� 0���� �۴�.\n");
	}
	else
	{
		printf("�Է� ���� 0�̰ų� �׺��� ũ��\n");
	}
	return 0;
}