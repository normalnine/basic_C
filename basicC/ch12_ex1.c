#include<stdio.h>
#define PI 3.141592	// ��ũ�� ���
void main()
{
	double area, radius;
	const double pi = 3.14; // ������ ���ȭ
	printf("�������� : ");
	scanf("%lf", &radius);

	area = radius * radius * PI;
	printf("���̴� %f �Դϴ�. \n", area);
}