#include<stdio.h>
void main()
{
	// �Ϲ� ���� ���� �� ����(�ʱ�ȭ)
	int		value = 10;
	
	// ������ ���� ���� �� ����(�ʱ�ȭ)
	int*	ptr1;
	ptr1 = &value;

	// ���� ������ ���� ���� �� ����(�ʱ�ȭ)
	int** ptr2 = &ptr1;

	printf("%d\n", value);
	printf("%d\n", *ptr1);
	printf("%d\n", **ptr2);

	return 0;
}