#include<stdio.h>
float sum();
void main()
{
	float result;
	result = sum();
	printf("�� �� : %5.2f \n", result);
}
float sum()
{
	float a, b, c;
	printf("�� ���� ���� �Է�(�Ǽ� ��)�Ͻÿ� : ");
	scanf("%f%f", &a, &b);
	c = a + b;
	return c;
} 