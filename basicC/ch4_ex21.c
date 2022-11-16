#include<stdio.h>
void main()
{
	int a, b;	// 일반변수의 선언문 
	int* p;		// 포인터변수의 선언문
	a = 10;		// 변수의 대입문
	p = &a;		// 포인터 변수의 대입문
	// & 주소연산자
	b = *p;		// 일반 변수의 대입문
	// * 포인터연산자
	printf("a = %d \n", a);
	printf("&a = %d \n", *p);	// * 포인터 연산자
	printf("*p = %d \n", b);
}