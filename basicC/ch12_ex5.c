#include<stdio.h>

// ��ũ�� �Լ�
#define SQUARE(x) x*x // �Ǵ� (x)*(x)

// ����� ���� �Լ�
int squareInt(int x)
{
	return x * x;
}

int main()
{
	int a;
	printf("Input a number(int) : ");
	scanf("%d", &a);

	printf("Square of %d : %d\n", a, squareInt(a+3));
	printf("Square of %d : %d\n", a, SQUARE(a+3));	//a+3*a+3
	printf("Square of %d : %d\n", a, SQUARE((a+3)));//(a+3)*(a+3)


	return 0;
}