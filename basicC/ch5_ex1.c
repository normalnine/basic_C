#include<stdio.h>
void sun();			// 1. �Լ��� ����
void main()
{
	sun();			// 3. �Լ��� ȣ��
	printf("COMPUTER SCIENCE \n");
	sun();
}
void sun()			// 2. �Լ��� ����(����)
{
	printf("================ \n");
}