#include<stdio.h>
void main()
{
	// 일반 변수 선언 및 대입(초기화)
	int		value = 10;
	
	// 포인터 변수 선언 및 대입(초기화)
	int*	ptr1;
	ptr1 = &value;

	// 더블 포인터 변수 선언 및 대입(초기화)
	int** ptr2 = &ptr1;

	printf("%d\n", value);
	printf("%d\n", *ptr1);
	printf("%d\n", **ptr2);

	return 0;
}