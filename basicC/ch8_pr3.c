#include<stdio.h>
int main(void)
{
	int somang[4][2];
	int sum = 0;
	int floor = 0;
	int i, j;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d�� %dȣ �α� �Է� : ", i+1, j+1);
			scanf("%d", &somang[i][j]);
			sum += somang[i][j];
			
		}
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			floor += somang[i][j];
		}
		
	printf("%d�� ��ü �α� : %d\n", i+1, floor);
	floor = 0;
	}
	
	printf("�Ҹ� ������ �� �α� ��%d", sum);
	return 0;
}