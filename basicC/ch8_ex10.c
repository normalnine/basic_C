#include <stdio.h>
void main()
{
	int m = 0;

	// ���� �迭('���ڻ��'s) : 1byte x5 = 5byte
	char str[5] = {'K','O','R','E','A'};

	//���ڿ� �迭("���ڿ�'���) : 1byte x6 = 6byte (�ι��� '\0' ����)
	char sstr[] = "KOREA";

	printf("str�迭�� ũ�� : %d\n", sizeof(str));
	printf("sstr�迭�� ũ�� : %d\n", sizeof(sstr));

	while (m < 5)
	{
		putchar(str[m]);
		m++;
	}
	printf("\n");

	printf("%s", sstr); // printf("%s", &sstr[0]) �� ����
	
}