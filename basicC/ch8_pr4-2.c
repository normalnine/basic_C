#include<stdio.h>
int main(void)
{
	int a[10];
	int i, j, temp;

	printf("10���� ���� �Է� �Ͻÿ�\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d��°: ", i+1);
		scanf("%d", &a[i]);
	}
	
	// �������� ��������
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10-i; j++)
		{
			if (a[j] < a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("���� ���� ����\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}