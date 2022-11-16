#include<stdio.h>
void main()
{
	int a, b;
	a = 1.6 + 1.7;	//묵시적 형 변환
	b = (int)1.6 + (int)1.7; // 명시적 형 변환
	printf("a = %d, b = %d \n", a, b);
}