//int 크기가 2byte인 경우
//--> short로 결과 확인

#include<stdio.h>
void main()
{	// shrot : -32768 ~ +32767
	short a, b, c;
	a = 1275;
	b = 32768;	//오버플로우
	c = 32769;
	printf("%d\n%d\n%d\n", a, b, c); 
}