#include<stdio.h>
// ��ũ�� �Լ�
#define SQUARE(x) x*x

// ����� ���� �Լ�
int squareInt(int x)
{
	return x * x;
}
int squareFloat(float x)
{
	return x * x;
}

int main()
{
	int a;
	float d;
	printf("Input a number(int) : ");
	scanf("%d", &a);
	printf("Square of %d : %d\n", a, squareInt(a));
	printf("Square of %d : %d\n", a, SQUARE(a));

	printf("Input a number(float) : ");
	scanf("%f", &d);

	printf("Square of %f : %f\n", d, squareFloat(d));
	printf("Square of %f : %f\n", d, SQUARE(d));
	
	return 0;
}