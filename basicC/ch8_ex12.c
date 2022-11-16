#include <stdio.h>
void main()
{
	char a[][11] = { "unreal","engine","epiclounge" };
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("%s \n", a[i]);	//각 행의 시작주소
	}
}