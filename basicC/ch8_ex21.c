#include <stdio.h>
void main()
{
	char str1[5] = "abcd";	//���ڿ��迭
	char* str2 = "ABCD";	//char* ������ ����

	printf("%s\n", str1);
	printf("%s\n", str2);

	str1[0] = 'x';	//�迭����� �� ���� ����
	//str2[0] = 'X' �� error : "���ڿ����" ���� �Ұ���
}