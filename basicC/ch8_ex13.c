#include <stdio.h>
#include <ctype.h>
void main()
{
	char str[80];
	int i;
	printf("���ڿ� �빮�� �Է� = ");
	gets_s(str,80);
	for (i = 0; str[i]; i++)
	{
		printf("%c", tolower(str[i]));
	}
	printf("\n");
}