#include<stdio.h>
void main()
{
	char a;
	printf("input character : ");
	scanf("%c", &a);	//맨 앞 문자만 입력됨
	printf("output character = %c\n", a);
	printf("ASCII값 : %d\n", a);
}