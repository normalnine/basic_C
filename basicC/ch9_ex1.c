#include<stdio.h>
void pswap(int** p1, int** p2);
void main()
{
	int A = 10, B = 20;
	int* pA, * pB;
	pA = &A, pB = &B;
	printf("pA�� ����Ű�� ���� : %d\n", *pA);
	printf("pB�� ����Ű�� ���� : %d\n", *pB);

	pswap(&pA, &pB);

	printf("pA�� ����Ű�� ���� : %d\n", *pA);
	printf("pB�� ����Ű�� ���� : %d\n", *pB);
}

void pswap(int** p1, int** p2)
{
	int* temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}