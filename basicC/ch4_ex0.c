#include<stdio.h>
void main()
{	// = (대입연산자)의 결합의 방향 (좌)<--(우)
	int a, b, c;
	a = b = c = 10;
	printf("%d %d %d", a, b, c);
}