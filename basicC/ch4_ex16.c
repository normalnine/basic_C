#include<stdio.h>
void main()
{
	int a, b;
	a = 1.6 + 1.7;	//������ �� ��ȯ
	b = (int)1.6 + (int)1.7; // ����� �� ��ȯ
	printf("a = %d, b = %d \n", a, b);
}