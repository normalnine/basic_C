#include<stdio.h>
int main(void)
{
	int num = 0, sum = 0;

	while (1)
	{
		printf("���ڸ� �Է��Ͻÿ�(����� 0�Է�) : ");
		scanf("%d", &num);

		sum += num;

		if (num == 0)
		{
			break;
		}
	}
	printf("�Է� ���� ���� ���� %d�Դϴ�.", sum);
	return 0;
}