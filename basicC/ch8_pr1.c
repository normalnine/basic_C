#include<stdio.h>
int main(void)
{
	int somang[5];
	int i;
	int sum = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d�� ��� ���� �Է����ּ��� : ",i+1);
		scanf("%d", &somang[i]);
		sum += somang[i];
	}
	printf("�Ҹ����� ��ü ������� %d�� �Դϴ�.", sum);
	return 0;
}