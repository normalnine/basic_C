#include <stdio.h>

void main()
{
	char a[100];
	int i = 0;
	char temp;

	printf("���ڿ��� �Է��ϼ��� : ");
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