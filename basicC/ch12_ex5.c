#include<stdio.h>

// 매크로 함수
#define SQUARE(x) x*x // 또는 (x)*(x)

// 사용자 정의 함수
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