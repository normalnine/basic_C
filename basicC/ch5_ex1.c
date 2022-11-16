#include<stdio.h>
void sun();			// 1. 함수의 선언문
void main()
{
	sun();			// 3. 함수의 호출
	printf("COMPUTER SCIENCE \n");
	sun();
}
void sun()			// 2. 함수의 정의(구현)
{
	printf("================ \n");
}