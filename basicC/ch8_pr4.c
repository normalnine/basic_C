#include<stdio.h>
int main(void)
{
	int a[10];
	int i, j, temp;
	
	printf("10���� ���� �Է� �Ͻÿ�\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}	
	
	// �������� ��������
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	printf("���� ���� ����\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}

	// �������� ��������
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (a[i] < a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	printf("\n���� ���� ����\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	
	return 0;
}