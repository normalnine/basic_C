#include<stdio.h>
void main()
{
	int x, y, z;
	printf("input x and y?");
	scanf("%d %d", &x, &y);	//�Ӽ����� SDL�˻� ��Ȱ��ȭ
	z = x + y;
	printf("%d + %d = %d", x, y, z);
}