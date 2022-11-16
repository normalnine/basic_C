#include<stdio.h>
int main()
{
	int i = 0;		//제어변수 시작값

	while (i < 10)	//제어변수 종료값	//while(i<=9)
	{
		printf("Hello World!\n");	//반복대상
		i++;		//제어변수 증감값
	}
	printf("i : %d\n", i);
	printf("반복횟수 : %d\n", i);
	return 0;
}