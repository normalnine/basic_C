#include<stdio.h>
int main(void)
{
	int opt;
	float val1, val2;
	float result;

	printf("���� 1, ���� 2, ���� 3, ������ 4\n");
	printf("����?: ");
	scanf("%d", &opt);
	printf("�� ���� �Ǽ� �Է� :");
	scanf("%f %f", &val1, &val2);

	if (opt == 1)
	{
		result = val1 + val2;
		printf("��� : %f\n", result);
	}
	if (opt == 2)
	{
		result = val1 - val2;
		printf("��� : %f\n", result);
	}
	if (opt == 3)
	{
		result = val1 * val2;
		printf("��� : %f\n", result);
	}
	if (opt == 4)
	{
		result = val1 / val2;
		printf("��� : %f\n", result);
	}
	return 0;
}