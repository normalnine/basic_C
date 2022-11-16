#include<stdio.h>
void main()
{
	int x, y, z;
	printf("input x and y?");
	scanf("%d %d", &x, &y);	//속성에서 SDL검사 비활성화
	z = x + y;
	printf("%d + %d = %d", x, y, z);
}