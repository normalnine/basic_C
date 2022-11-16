#include <stdio.h>
void main()
{
	int m = 0;

	// 문자 배열('문자상수's) : 1byte x5 = 5byte
	char str[5] = {'K','O','R','E','A'};

	//문자열 배열("문자열'상수) : 1byte x6 = 6byte (널문자 '\0' 포함)
	char sstr[] = "KOREA";

	printf("str배열의 크기 : %d\n", sizeof(str));
	printf("sstr배열의 크기 : %d\n", sizeof(sstr));

	while (m < 5)
	{
		putchar(str[m]);
		m++;
	}
	printf("\n");

	printf("%s", sstr); // printf("%s", &sstr[0]) 와 같음
	
}