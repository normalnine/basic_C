#include<stdio.h>
void main()
{
	int a;
	a = 12345;
	printf("(1) value = %d \n", a);
	printf("(2) value = %3d \n", a);
	printf("(3) value = %8d \n", a); //8ĭ ���� Ȯ��
	printf("(4) value = %08d \n", a); // �� ���� 0���� ä���
	printf("(5) value = %-8d \n", a); //���� 3ĭ ���� Ȯ��
}