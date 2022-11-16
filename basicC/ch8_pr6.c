#include <stdio.h>

void main()
{
	char a[100];
	int i = 0;
	char temp;

	printf("문자열을 입력하세요 : ");
	scanf("%s", a);

	
	temp = a[0];

	for (i = 1; a[i] != 0; i++)
	{
		if (temp < a[i])
		{
			temp = a[i];
		}
	}

	printf("%d", temp);
}