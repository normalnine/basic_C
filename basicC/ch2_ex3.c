//int ũ�Ⱑ 2byte�� ���
//--> short�� ��� Ȯ��

#include<stdio.h>
void main()
{	// shrot : -32768 ~ +32767
	short a, b, c;
	a = 1275;
	b = 32768;	//�����÷ο�
	c = 32769;
	printf("%d\n%d\n%d\n", a, b, c); 
}